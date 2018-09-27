from pxr import Usd, UsdGeom, Gf, Sdf

def AddReferenceToGeometry(stage, path):
    geom = UsdGeom.Xform.Define(stage, path)
    geom.GetPrim().GetReferences().AddReference('./house.usda')
    return geom

def MakeInitialStage(path):
    stage = Usd.Stage.CreateNew(path)
    UsdGeom.SetStageUpAxis(stage, UsdGeom.Tokens.z)
    return stage

stage = MakeInitialStage('Step.usda')

AddReferenceToGeometry(stage, '/Top')

house = stage.GetPrimAtPath('/Top/sets/house')

print(house.GetPropertyNames())

stage.Save()