#!/usr/bin/env python3
import os
os.system("cmake -H. -Bbuild")
os.system("cmake --build build -- -j3")