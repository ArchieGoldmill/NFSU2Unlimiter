#pragma once

#include "stdio.h"
#include <windows.h>

#define _FECarConfigRef 0x8389AC
#define _CarPartDB 0x8A2B68
#define _CarTypeInfoArray 0x8A1CCC
#define _TheGameFlowManager 0x8654A4
#define _CarSlotIDNames 0x802DE8
#define _CarPartIDNames 0x803338
#define _WheelStandardWidth 0x8026C4
#define gCarCustomizeManager 0x8392C0
#define gCarCustomizeManager_0 0x838980
#define gIceSideBarOverlayName 0x7FA204
#define TopOrFullScreenRide 0x8371B0
#define ThePlayerCareer 0x85AD40
#define _DrawTrunkAudio 0x8A1BEC
#define _CareerStringTable 0x838428
#define _PerformanceClassRange 0x7A1A84

DWORD(*bStringHash)(char const* StringToHash) = (DWORD(*)(char const*))0x43DB50;
DWORD(*bStringHash2)(char const* StringToHash, int PartialHash) = (DWORD(*)(char const*, int))0x43DB80;
char* (*GetCarTypeName)(int CarTypeID) = (char* (*)(int))0x610110;
DWORD* (*GetCarTypeInfo)(int CarTypeID) = (DWORD* (*)(int))0x610110;
int(*GetCarPartFromSlot)(int CarSlotID) = (int(*)(int))0x60FEE0;
int(*ShowTrunkUnderInFE_Game)(int CarTypeID) = (int(*)(int))0x60C8F0;
int(*RemoveCentreBrakeWithCustomSpoiler_Game)(int CarTypeID) = (int(*)(int))0x60C8A0;
char* (__cdecl* _strstr)(char const*, char const*) = (char* (__cdecl*)(char const*, char const*))0x75F140;
void*(__cdecl* j__malloc)(size_t a1) = (void*(__cdecl*)(size_t))0x575620;
int(__thiscall* AddElementToMenuWithStateID)(int _this, int a2, int a3, int a4, int a5) = (int(__thiscall*)(int, int, int, int, int))0x520CB0;
void* (__thiscall* AddCustomElementToMenu)(void* _this, int a2, int a3, int a4) = (void* (__thiscall*)(void*, int, int, int))0x545920;
int(__cdecl* FEHashUpper)(unsigned __int8* a1) = (int(__cdecl*)(unsigned __int8*))0x505450;
int(__thiscall* ChooseRimBrand_AddRimCategory)(DWORD* _this, int RimBrandName, int RimBrandIcon, int RimBrandHash) = (int(__thiscall*)(DWORD*, int, int, int))0x5463B0;
int(__thiscall* Player_AutoPilotOn)(DWORD* _Player) = (int(__thiscall*)(DWORD*))0x5FAE20;
int(__thiscall* Player_AutoPilotOff)(DWORD* _Player) = (int(__thiscall*)(DWORD*))0x5FAF10;
int(__thiscall* ChooseDecalCategory_AddCategoryOption)(void* _this, int LayoutID, bool isDecalSelection, int TextureHash, int StringHash) = (int(__thiscall*)(void*, int, bool, int, int))0x520FF0;
int(__thiscall* ChooseDecalCategory_AddCategoryOptionLock)(void* _this, int LayoutID, bool isDecalSelection, int TextureHash, int StringHash) = (int(__thiscall*)(void*, int, bool, int, int))0x52FF60;
int(__thiscall* CustomizeNeonMenu_AddSelection)(void* _this, int CAR_SLOT_ID, int TextureHash, int StringHash, int CarAnimLocation) = (int(__thiscall*)(void*, int, int, int, int))0x53BC90;
int(__cdecl* SelectableTrack_CalcLanguageHash)(int EventID, int IsReverse) = (int(__cdecl*)(int, int))0x516280;
int(__cdecl* FEngSetVisible)(DWORD* FEObject) = (int(__cdecl*)(DWORD*))0x50CA50;
int(__cdecl* FEngSetInvisible)(DWORD* FEObject) = (int(__cdecl*)(DWORD*))0x50CA00;
int(__cdecl* FEngSetVisible_Pkg)(char const* pkg_name, DWORD obj_hash) = (int(__cdecl*)(char const*, DWORD))0x495520;
int(__cdecl* FEngSetInvisible_Pkg)(char const* pkg_name, DWORD obj_hash) = (int(__cdecl*)(char const*, DWORD))0x4954E0;
int(*FEPrintf)(char const*, int, char const*, ...) = (int(*)(char const*, int, char const*, ...))0x537B80;
int(*FEPrintf_ObjName)(char const*, char const*, char const*, ...) = (int(*)(char const*, char const*, char const*, ...))0x542600;
DWORD(__cdecl* FEngFindObject)(char const* pkg_name, DWORD obj_hash) = (DWORD(__cdecl*)(char const*, DWORD))0x5379C0;
void (__thiscall* PartSelectionScreen_AddCategory)(DWORD* PartSelectionScreen, unsigned int CarSlotID, unsigned int TextureHash, unsigned int LanguageHash, bool unk) = (void (__thiscall*)(DWORD*, unsigned int, unsigned int, unsigned int, bool))0x545700;
void (__thiscall* PartSelectionScreen_ResetCategories)(DWORD* PartSelectionScreen) = (void (__thiscall*)(DWORD*))0x5385C0;
void(__thiscall* PartSelectionScreen_AddCategoryRims)(DWORD* PartSelectionScreen,unsigned int TextureHash, unsigned int LanguageHash) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int))0x53A620;
void(__thiscall* PartSelectionScreen_AddCategoryCarbon)(DWORD* PartSelectionScreen,unsigned int TextureHash, unsigned int LanguageHash) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int))0x545880;
void(__cdecl* FEngSetLanguageHash)(char const* pkg, unsigned int obj, unsigned int hsh) = (void(__cdecl*)(char const*, unsigned int, unsigned int))0x495460;
void(__cdecl* FEngSetLastButton)(char const* pkg, unsigned int btn) = (void(__cdecl*)(char const*, unsigned int))0x50B8C0;
DWORD(__cdecl* FEngGetLastButton)(char const* pkg) = (DWORD(__cdecl*)(char const*))0x50B8A0;
void(__thiscall* ThumbnailScroller_SnapToItem)(DWORD* ThumbnailScroller, unsigned int btn) = (void(__thiscall*)(DWORD*, unsigned int))0x538700;
bool(*IsCarPartsAnimLoadedForCar)(DWORD CarTypeHash) = (bool(*)(DWORD))0x4A5B10;
int(*FEGetAnimationState)(int CarAnimLocation) = (int(*)(int))0x4C18B0;
void(*FEDoCarPartAnimNow)(int CarAnimLocation, bool unk1, float unk2) = (void(*)(int, bool, float))0x4C1860;
void(__thiscall* IceSelectionScreen_AddSelection)(DWORD* IceSelectionScreen, unsigned int CarSlotID, unsigned int TextureHash, unsigned int LanguageHash, int CarAnimLocation, char const* FEPackageName) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int, unsigned int, int, char const*))0x53AB30;
void(__thiscall* IceCategoryThing_Create)(DWORD* IceCategoryThing, int CarAnimLocation, unsigned int CarSlotID, unsigned int TextureHash, unsigned int LanguageHash) = (void(__thiscall*)(DWORD*, int, unsigned int, unsigned int, unsigned int))0x53AA80;
bool (*IsNeonCompletelyLocked)() = (bool(*)())0x539FB0;
void(__thiscall* IceSelectionThing_Create)(DWORD* IceSelectionThing, unsigned int CarSlotID, unsigned int TextureHash, unsigned int LanguageHash, int CarAnimLocation, bool IsLocked, char const* FEPackageName) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int, unsigned int, int, bool, char const*))0x53A9D0;
void(__thiscall* IceCategoryTrunkThing_Create)(DWORD* IceCategoryTrunkThing) = (void(__thiscall*)(DWORD*))0x53AAC0;
void(__thiscall* IceSelectionScreen_StartBrowsingParts)(DWORD* IceSelectionScreen) = (void(__thiscall*)(DWORD*))0x556930;
void(__thiscall* IceSelectionScreen_SetExtraFunctionTextVisibility)(DWORD* IceSelectionScreen, bool IsVisible) = (void(__thiscall*)(DWORD*, bool))0x547090;
DWORD*(__thiscall* CarCustomizeManager_GetInstalledPart)(DWORD* CarCustomizeManager, int CarSlotID) = (DWORD*(__thiscall*)(DWORD*, int))0x6102F0;
bool(__thiscall* CarCustomizeManager_IsTrunkAudioSlotAvailable_Game)(DWORD* CarCustomizeManager, int CarSlotID) = (bool(__thiscall*)(DWORD*, int))0x6103F0;
unsigned int(__thiscall* CarPart_GetAppliedAttributeUParam)(DWORD* CarPart, unsigned int AttributeHash, unsigned int ValueIfNotFound) = (unsigned int(__thiscall*)(DWORD*, unsigned int, unsigned int))0x61B500;
bool(__thiscall* FEPackage_Startup)(DWORD* FEPackage, DWORD* FEGameInterface) = (bool(__thiscall*)(DWORD*, DWORD*))0x52B370;
DWORD* (__thiscall* FEPackage_FindObjectByHash)(DWORD* FEPackage, unsigned int ObjectHash) = (DWORD * (__thiscall*)(DWORD*, unsigned int))0x517F80;
DWORD* (__thiscall* FEObject_Clone)(DWORD* FEObject, bool) = (DWORD * (__thiscall*)(DWORD*, bool))0x5545D0;
void(__thiscall* FEMinList_AddNode)(DWORD* FEMinList, DWORD* FEMinNode, DWORD* FEObject) = (void(__thiscall*)(DWORD*, DWORD*, DWORD*))0x5053B0;
void(__thiscall* ChooseDecalCategory_ShowTotalPaintCost)(DWORD* ChooseDecalCategory) = (void(__thiscall*)(DWORD*))0x5453B0;
void(__thiscall* ChooseDecalCategory_HideTotalPaintCost)(DWORD* ChooseDecalCategory) = (void(__thiscall*)(DWORD*))0x545460;
void(__thiscall* ChooseDecalCategory_UpdateTotalPaintCost)(DWORD* ChooseDecalCategory) = (void(__thiscall*)(DWORD*))0x53BCF0;
DWORD _ftol2 = 0x75BED4;
bool(__thiscall* ChoosePaintScreen_IsPaintMenuLocked)(DWORD* ChoosePaintScreen, int CarSlotID) = (bool(__thiscall*)(DWORD*, int))0x530820;
void(__thiscall* PaintSelectionThing_Create)(DWORD* IceSelectionThing, unsigned int CarSlotID, unsigned int TextureHash, unsigned int LanguageHash, int CarAnimLocation, bool IsLocked) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int, unsigned int, int, bool))0x521FF0;
int(__thiscall* ChoosePaintScreen_GetCarSlotIDForVinylPaintLayer)(DWORD* ChoosePaintScreen, int CarSlotID, int ColorID) = (int(__thiscall*)(DWORD*, int, int))0x50F440;
int(__thiscall* ChoosePaintScreen_GetPaintBrandHashFromCarSlotId)(DWORD* ChoosePaintScreen, int CarSlotID) = (int(__thiscall*)(DWORD*, int))0x50F5B0;
DWORD(*FEngHashString)(char const* StringToHash, ...) = (DWORD(*)(char const*, ...))0x50B990;
bool(__thiscall* CarPart_HasAppliedAttribute)(DWORD* CarPart, unsigned int AttributeHash) = (bool(__thiscall*)(DWORD*, unsigned int))0x61B4E0;
bool (__thiscall* CarCustomizeManager_AreBrakesPaintable)(DWORD* CarCustomizeManager) = (bool (__thiscall*)(DWORD*))0x50ED90;
bool (__thiscall* CarCustomizeManager_IsEnginePaintable)(DWORD* CarCustomizeManager) = (bool (__thiscall*)(DWORD*))0x50EDC0;
DWORD* (__thiscall* CarPartDatabase_NewGetCarPart)(DWORD* CarPartDatabase, int CarType, int CarSlotID, DWORD CarPartHash, int Unk1, int Unk2) = (DWORD * (__thiscall*)(DWORD*, int, int, DWORD, int, int))0x61B980;
DWORD* (__thiscall* CarPartDatabase_NewGetFirstCarPart)(DWORD* CarPartDatabase, int CarType, int CarSlotID, DWORD CarPartHash, int Unk) = (DWORD * (__thiscall*)(DWORD*, int, int, DWORD, int))0x61BA30;
DWORD* (__thiscall* CarPartDatabase_NewGetNextCarPart)(DWORD* CarPartDatabase, DWORD* PreviousCarPart, int CarType, int CarSlotID, DWORD CarPartHash, int Unk) = (DWORD * (__thiscall*)(DWORD*, DWORD*, int, int, DWORD, int))0x61BA50;
//DWORD* (__thiscall* CarPart_GetFirstAppliedAttribute)(DWORD* CarPart, unsigned int AttributeHash) = (DWORD * (__thiscall*)(DWORD*, unsigned int))0x60FEF0;
DWORD* (__thiscall* CarPart_GetNextAppliedAttribute)(DWORD* CarPart, unsigned int AttributeHash, DWORD* PreviousAttribute) = (DWORD * (__thiscall*)(DWORD*, unsigned int, DWORD*))0x60FEF0;
bool (*IsBrowsingBrakePaint)() = (bool(*)())0x50F1D0;
//void (__thiscall* RideInfo_UpdatePartsEnabled)(DWORD* CarCustomizeManager) = (void (__thiscall*)(DWORD*))0x61BCD0;
int (*CarAnimManager_GetLocationState)(int CarAnimManager, int CarAnimLocation) = (int(*)(int, int))0x433CD0;
int (*CarCustomizeManager_GetPartUnlockFilter)() = (int(*)())0x50F0D0;
float (*CarAnimManager_GetAnimationTime)(int CarAnimManager, int CarAnimLocation, int Unk) = (float(*)(int, int, int))0x434610;
void(__thiscall* CarRenderInfo_RenderNeon2)(DWORD* CarRenderInfo, int eView, float* bV3, float* bM4, int a5, DWORD* PosMarkerPtr, int a7, float a8, int a9, float Brightness) = (void(__thiscall*)(DWORD*, int, float*, float*, int, DWORD*, int, float, int, float))0x60D7F0;
bool(__cdecl* UnlockSystem_IsCarPartUnlocked)(int UnlockFilter, int CarSlotID, DWORD* CarPart, int Unk) = (bool(_cdecl*)(int, int, DWORD*, int))0x52A010;
int(*bRandom)(int Max) = (int(*)(int))0x43C1C0;
int(__thiscall* CarCustomizeManager_GetNumDecalsForInstalledLayoutPart)(DWORD* CarCustomizeManager, int CarSlotID) = (int(__thiscall*)(DWORD*, int))0x5218B0;
int(__thiscall* CarCustomizeManager_GetLayoutPart_Game)(DWORD* CarCustomizeManager, int CarSlotID, int LayoutID) = (int(__thiscall*)(DWORD*, int, int))0x521940;
void(__thiscall* CarCustomizeManager_PreviewPaintPart)(DWORD* CarCustomizeManager, int CarSlotID, DWORD* PartToPaint) = (void(__thiscall*)(DWORD*, int, DWORD*))0x55C1F0;
int(__stdcall* CarCustomizeManager_TranslateToWidebodyLayoutSlotIfNecessary)(int CarSlotID) = (int(__stdcall*)(int))0x50F060;
void(__thiscall* CompleatCarPhysicsInfo_BuildCarPhysicsInfo)(float* CompleatCarPhysicsInfo, float* CarPhysicsInfo, float* PhysicsUpgradeSpecification, float a4) = (void(__thiscall*)(float*, float*, float*, float))0x5AC4F0;
void(__thiscall* CompleatCarPhysicsInfo_ApplyJunkmanUpgrades)(float* CompleatCarPhysicsInfo, float* CarPhysicsInfo, float* PhysicsUpgradeSpecification) = (void(__thiscall*)(float*, float*, float*))0x5997E0;
void(__thiscall* CompleatCarPhysicsInfo_TuneForDrift)(float* CompleatCarPhysicsInfo, float* CarPhysicsInfo, float* PhysicsUpgradeSpecification) = (void(__thiscall*)(float*, float*, float*))0x5A7750;
void(__thiscall* CompleatCarPhysicsInfo_TuneForShortTrack)(float* CompleatCarPhysicsInfo, float* CarPhysicsInfo, float* PhysicsUpgradeSpecification) = (void(__thiscall*)(float*, float*, float*))0x5A77C0;
void(__thiscall* CompleatCarPhysicsInfo_TuneForDragRace)(float* CompleatCarPhysicsInfo, float* CarPhysicsInfo, float* PhysicsUpgradeSpecification) = (void(__thiscall*)(float*, float*, float*))0x5A7830;
int(__thiscall* CustomPhysicsSpec_GetNumActiveTunings)(DWORD* CustomPhysicsSpec) = (int(__thiscall*)(DWORD*))0x59B0E0;
void(__thiscall* CustomPhysicsSpec_RebuildCustomTunings)(DWORD* CustomPhysicsSpec) = (void(__thiscall*)(DWORD*))0x5B4780;
void(__thiscall* RidePhysicsInfo_ComputeMiscStats)(DWORD* RidePhysicsInfo) = (void(__thiscall*)(DWORD*))0x5B06A0;
void(*MakeAccelerationTable)(float* unk1, float* unk2) = (void(*)(float*, float*))0x5B5AB0;
float(__thiscall *Table_GetValue)(float* Table, float Value) = (float(__thiscall*)(float*, float))0x5764D0;
float(*bDistBetween)(float* v1, float* v2) = (float(*)(float*, float*))0x43CE10;
DWORD* (*CreateNewSkidSet)(DWORD* SkidMaker, DWORD* Car, float* a3, float* a4, int a5, float a6) = (DWORD * (*)(DWORD*, DWORD*, float*, float*, int, float))0x5E6D80;
bool (__thiscall* SkidSet_AddSegment)(DWORD* SkidSet, float* a2, float* a3, bool a4, float a5) = (bool(__thiscall*)(DWORD*, float*, float*, bool, float))0x5DC680;
void(__thiscall* SkidSegment_GetPoints)(DWORD* SkidSegment, float* a2, float* a3) = (void(__thiscall*)(DWORD*, float*, float*))0x5D2FC0;
void(__cdecl* FEngSetScript_Obj)(DWORD* FEObject, char const* ScriptName, bool Unk) = (void(__cdecl*)(DWORD*, char const*, bool))0x51CF70;
void(__cdecl* FEngSetScript_Pkg)(char const* PackageName, DWORD ObjectHash, char const* ScriptName, bool Unk) = (void(__cdecl*)(char const*, DWORD, char const*, bool))0x537C00;
void(__thiscall* ChoosePaintScreen_BuildPaintList)(DWORD* ChoosePaintScreen) = (void(__thiscall*)(DWORD*))0x548630;
int(__thiscall* PlayerCareerState_GetCarPartCost)(DWORD* PlayerCareerState, int CarSlotID, DWORD* TheCarPart) = (int(__thiscall*)(DWORD*, int, DWORD*))0x514280;

char const* (*SearchForString)(unsigned int EDX_StringHash) = (char const* (*)(unsigned int))0x4FF9D0;