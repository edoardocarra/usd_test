#!/usr/bin/env python
import os
os.system("cmake -H. -Bbuild")
os.system("cmake --build build -- -j3")