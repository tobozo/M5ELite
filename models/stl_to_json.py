# sudo pip install meshio numpy-stl vtk
import os.path
from os import path
import json
import meshio
import argparse
import sys

try:
  file=sys.argv[1]
except:
  print "Usage: python point.py blah.stl"
  sys.exit()

try:
  f = open(file)
  f.close()
except IOError:
  print('File does not exist')
  sys.exit();

mesh = meshio.read( file )  # or .off, .vtk, .ply, ...
meshpoints = mesh.points.tolist()
meshcells = mesh.cells['triangle']
print json.dumps({'coords':meshpoints, 'cells':meshcells.tolist()}, separators=(',', ':'))

