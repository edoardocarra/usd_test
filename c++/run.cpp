#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "stream.h"
#include "streamIO.h"
#include "translator.h"

int main(int argc, char* argv[]) {
	std::string error = "";
	pxr::UsdObjStream stream;
	pxr::UsdObjReadDataFromFile("teapot.obj",&stream,&error);
} 