#pragma once

#include "stdio.h"
#include "InGameFunctions.h"

void __fastcall HUD_Customizer_DisplayCurrentHUD(DWORD *HUD_Customizer, void *EDX_Unused, int hud_index)
{
	char const* PackageName = (char const*)HUD_Customizer[1];
    DWORD prefix_hash = g_displayHUDprefix;
    DWORD texture_hash, tach_fill_hash, lines_hash, redline_hash;
    char StringToHash[29];
    int TachStyle = 6;

    memset(StringToHash, 0, sizeof(StringToHash));

    bSPrintf(StringToHash, "TACH_FILL_CUSTOM_%02d", hud_index);
    tach_fill_hash = bStringHash(StringToHash);

	DWORD* ride = CarViewer_GetRideInfo(0);
    if (ride)
    {
        // fix tach_fill as it doesn't have prefix by default
        if (prefix_hash != CT_bStringHash("3RDPERSON_"))
        {
            bSPrintf(StringToHash, "TACH_FILL_CUSTOM_%02d", hud_index);
            tach_fill_hash = bStringHash2(StringToHash, prefix_hash);
        }

        FEngSetVisible_Pkg(PackageName, CT_bStringHash("NON_INTERACTIVE_GROUP"));

        bSPrintf(StringToHash, "TURBOFILL_CUSTOM_%02d", hud_index);
        texture_hash = bStringHash2(StringToHash, prefix_hash);
        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("3RDPERSON_TURBOFILL"), texture_hash);

        bSPrintf(StringToHash, "TURBODIAL_CUSTOM_%02d", hud_index);
        texture_hash = bStringHash2(StringToHash, prefix_hash);
        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("3RDPERSON_TURBODIAL"), texture_hash);

        bSPrintf(StringToHash, "TURBOLINES_CUSTOM_%02d", hud_index);
        texture_hash = bStringHash2(StringToHash, prefix_hash);
        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("3RDPERSON_TURBOLINES"), texture_hash);

        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("TACH_FILL"), tach_fill_hash);

        bSPrintf(StringToHash, "RPMDIAL_CUSTOM_%02d", hud_index);
        texture_hash = bStringHash2(StringToHash, prefix_hash);
        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("3RDPERSONNEEDLE"), texture_hash);

        DWORD* phys = RidePhysicsInfo_GetCarPhysicsInfo((ride + 4), 1);
        if (phys)
        {
            DWORD *engine_info = phys + 496;
            TachStyle = GetTachStyle(engine_info);
        }
        
        switch (TachStyle)
        {
        case 0:
            bSPrintf(StringToHash, "10500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_9000", prefix_hash);
            break;
        case 1:
            bSPrintf(StringToHash, "10500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_8500", prefix_hash);
            break;
        case 2:
            bSPrintf(StringToHash, "9500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_8000", prefix_hash);
            break;
        case 3:
            bSPrintf(StringToHash, "9500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_7500", prefix_hash);
            break;
        case 4:
            bSPrintf(StringToHash, "8500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_7000", prefix_hash);
            break;
        case 5:
            bSPrintf(StringToHash, "8500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_6500", prefix_hash);
            break;
        case 6:
        default:
            bSPrintf(StringToHash, "7500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_6000", prefix_hash);
            break;
        case 7:
            bSPrintf(StringToHash, "7500LINES_CUSTOM_%02d", hud_index);
            lines_hash = bStringHash2(StringToHash, prefix_hash);
            redline_hash = bStringHash2("REDLINE_5500", prefix_hash);
            break;
        }

        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("3RDPERSONTACHRPMNUMBERS"), lines_hash);
        FEngSetTextureHash_Pkg(PackageName, CT_bStringHash("REDLINE"), redline_hash);

        FEngSetLanguageHash(PackageName, CT_bStringHash("3RDPERSONSPEEDUNITS"), Player_IsHudKPH() ? CT_bStringHash("HUD_KMH") : CT_bStringHash("HUD_MPH"));
    }
}