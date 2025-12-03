#pragma once

#include "stdio.h"
#include "InGameFunctions.h"

void __fastcall CustomHUD_Browser_RefreshHeader(DWORD* CustomHUD_Browser, void* EDX_Unused)
{
	char const* PackageName = (char const*)CustomHUD_Browser[1];

	if ((DWORD*)CustomHUD_Browser[21] != CustomHUD_Browser + 21)
	{
		DWORD* CurrSelPart = (DWORD*)CustomHUD_Browser[23];
		if (CurrSelPart)
		{ 
			DWORD* part = (DWORD*)CurrSelPart[11];

			if (CarPart_HasAppliedAttribute(part, CT_bStringHash("LANGUAGEHASH")))
			{ 
				FEngSetLanguageHash(PackageName, CT_bStringHash("PART_NAME"), CarPart_GetAppliedAttributeUParam(part, CT_bStringHash("LANGUAGEHASH"), 0));
			}
			else
			{
				FEPrintf(PackageName, CT_bStringHash("PART_NAME"), CarPart_GetName(part));
			}

			g_displayHUDattributes[0] = CarPart_GetAppliedAttributeUParam(part, CT_bStringHash("HUDINDEX"), 0);
			g_displayHUDprefix = bStringHash2("_", CarPart_GetAppliedAttributeUParam(part, CT_bStringHash("TEXTURE_NAME"), CT_bStringHash("3RDPERSON")));

			int CurrNodeIndex = ThumbnailScroller_GetCurrenNodeIndex(CustomHUD_Browser + 20);
			FEScrollBar_Update(CustomHUD_Browser + 45, 1, CustomHUD_Browser[67], CurrNodeIndex);

			CarPart_Print(part);

			if (*(int*)_FEDatabase != 1 || *(int*)0x83898C == 1)
			{
				FEngSetInvisible_Pkg(PackageName, CT_bStringHash("PRICE"));
			}
			else
			{
				int CarPartCost = PlayerCareerState_GetCarPartCost_Game((DWORD*)ThePlayerCareer, *(DWORD*)(CustomHUD_Browser[68] + 72), part);
				FEPrintf_ObjName(PackageName, "Cash", "%$d", CarPartCost);
			}
		}
	}
}