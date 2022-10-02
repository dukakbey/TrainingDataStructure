#!/bin/bash
cd /home/sc/applications/release/TrainingDataStructure/build/Debug 
rm -R * 
cmake -DCMAKE_BUILD_TYPE=Debug .. 
make -j4
