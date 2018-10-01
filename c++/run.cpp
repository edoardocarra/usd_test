#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "pxr/usd/sdf/layer.h"
#include "pxr/usd/sdf/path.h"
#include "pxr/usd/usd/stage.h"
#include "pxr/usd/usdGeom/mesh.h"
#include "pxr/base/vt/array.h"

#include "pxr/base/gf/range3f.h"

void diocane() {
	pxr::SdfLayerRefPtr layer = pxr::SdfLayer::CreateAnonymous(".usda");
	pxr::UsdStageRefPtr stage = pxr::UsdStage::Open(layer);
}


int main(int argc, char* argv[]) {
	std::cout << "ciao";
	diocane();
} 
