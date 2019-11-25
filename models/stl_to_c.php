<?php

/*

  Usage:

   find ./ -name "*.stl" -exec php stl_to_c.php {} \;

*/


if( !isset( $argv[1] ) ) die("\nPlease provide a file name\n");
if( !file_exists( $argv[1] ) ) die("\nFile does not exist\n");

$filename = $argv[1];

// use pyton to decode STL
exec("python stl_to_json.py $filename", $out);

if( count($out) !=1 ) {
  die("python error");
}

$json = json_decode( $out[0], true );

if( !$json ) {
  die("json error");
}

$basename = basename( $filename );
$nameparts = explode('.', $basename);
$extension = end( $nameparts );
$shortname = substr( $basename, 0, -(strlen($extension)+1));
$modelname = preg_replace("/[^a-z0-9_]+/i", "_", $shortname );

$faces = []; // unsigned, indexes
$vertices = []; // signed, coords

for( $id=0; $id<count($json['cells']); $id++ ) {
  $face = [3];
  $face[] = $json['cells'][$id][0];
  $face[] = $json['cells'][$id][1];
  $face[] = $json['cells'][$id][2];
  $faces [] = $face;
}

$high_x = -INF;
$high_y = -INF;
$high_z = -INF;
$low_x = INF;
$low_y = INF;
$low_z = INF;

// find high / low values
foreach( $json['coords'] as $id => $coord ) {
/*
  $json['coords'][$id][0] =  $json['coords'][$id][0]; // invert x
  $json['coords'][$id][1] =  $json['coords'][$id][1]; // invert y
  $json['coords'][$id][2] =  $json['coords'][$id][2]; // invert z
*/
  if( $json['coords'][$id][0] > $high_x ) $high_x = $json['coords'][$id][0];
  if( $json['coords'][$id][1] > $high_y ) $high_y = $json['coords'][$id][1];
  if( $json['coords'][$id][2] > $high_z ) $high_z = $json['coords'][$id][2];

  if( $json['coords'][$id][0] < $low_x )  $low_x  = $json['coords'][$id][0];
  if( $json['coords'][$id][1] < $low_y )  $low_y  = $json['coords'][$id][1];
  if( $json['coords'][$id][2] < $low_z )  $low_z  = $json['coords'][$id][2];

}

// get dimensions
$pan_x = $high_x-$low_x;
$pan_y = $high_y-$low_y;
$pan_z = $high_z-$low_z;
$pan_xyz = max( $pan_x, $pan_y, $pan_z );
// translate to center
$offset_x = -( $high_x - $pan_x/2 );
$offset_y = -( $high_y - $pan_y/2 );
$offset_z = -( $high_z - $pan_z/2 );

$zoomfactor = 254 / $pan_xyz; // to int8_t
$high_xyz = max( abs($high_x+$offset_x), abs($high_y+$offset_y), abs($high_z+$offset_z) ) * $zoomfactor;
/*
echo "\n
  zoomfactor = $zoomfactor
  high_xyz = $high_xyz, pan_xyz = $pan_xyz
    high_x = $high_x, low_x = $low_x, pan_x = $pan_x, offset_x = $offset_x
    high_y = $high_y, low_y = $low_y, pan_y = $pan_y, offset_y = $offset_y
    high_z = $high_z, low_z = $low_z, pan_z = $pan_z, offset_z = $offset_z
\n";
*/
$high_x = -INF;
$high_y = -INF;
$high_z = -INF;
$low_x = INF;
$low_y = INF;
$low_z = INF;

foreach( $json['coords'] as $id => $coord ) {
  $json['coords'][$id][0] = round( ( $coord[0] + $offset_x ) * $zoomfactor);
  $json['coords'][$id][1] = round( ( $coord[1] + $offset_y ) * $zoomfactor);
  $json['coords'][$id][2] = round( ( $coord[2] + $offset_z ) * $zoomfactor);

  // recalculate mix/max coords (spoil: min = -max)
  if( $json['coords'][$id][0] > $high_x ) $high_x = $json['coords'][$id][0];
  if( $json['coords'][$id][1] > $high_y ) $high_y = $json['coords'][$id][1];
  if( $json['coords'][$id][2] > $high_z ) $high_z = $json['coords'][$id][2];

  if( $json['coords'][$id][0] < $low_x )  $low_x  = $json['coords'][$id][0];
  if( $json['coords'][$id][1] < $low_y )  $low_y  = $json['coords'][$id][1];
  if( $json['coords'][$id][2] < $low_z )  $low_z  = $json['coords'][$id][2];
}
/*
echo "\n
  zoomfactor = $zoomfactor
  high_xyz = $high_xyz, pan_xyz = $pan_xyz
    high_x = $high_x, low_x = $low_x, pan_x = $pan_x, offset_x = $offset_x
    high_y = $high_y, low_y = $low_y, pan_y = $pan_y, offset_y = $offset_y
    high_z = $high_z, low_z = $low_z, pan_z = $pan_z, offset_z = $offset_z
\n";
*/

$available_span = 320; // px for the viewport
$scalefactor = $high_xyz*2 / $available_span*2;

// generate the C code
ob_start();

?>
#ifndef __<?php echo $modelname;?>_H__
#define __<?php echo $modelname;?>_H__

const float <?php echo $modelname;?>_scale = <?php echo $scalefactor;?>;
const int8_t <?php echo $modelname;?>_vertices[<?php echo count( $json['coords'] );?>][3] = {
<?php foreach( $json['coords'] as $id => $coord ): ?>
<?php echo " { ".implode(',', $coord). "},   // $id\n"; ?>
<?php endforeach; ?>
};

const uint16_t <?php echo $modelname;?>_faces[<?php echo count( $faces );?>][9] = {
<?php foreach( $faces as $id => $face ): ?>
<?php echo " { ".implode(',', $face). "},   // $id\n"; ?>
<?php endforeach; ?>
};

void get<?php echo $modelname;?>Ship() {
  memcpy(ship_vertices, <?php echo $modelname;?>_vertices, sizeof(<?php echo $modelname;?>_vertices));
  ship_vertices_cnt = <?php echo count( $json['coords'] );?>;
  scale = <?php echo $modelname;?>_scale;
  memcpy(ship_faces, <?php echo $modelname;?>_faces, sizeof(<?php echo $modelname;?>_faces));
  ship_faces_cnt = <?php echo count( $faces );?>;
}

ShipAnimation <?php echo $modelname;?>Animation {
  "<?php echo $modelname;?>",
  *get<?php echo $modelname;?>Ship
};

#endif

<?php

$contents = ob_get_contents();
ob_end_clean();

file_put_contents("$filename.h", $contents);

echo "Created/updated $filename.h\n";

