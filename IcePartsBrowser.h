#pragma once

#include "stdio.h"
#include "InGameFunctions.h"

void __fastcall IcePartsBrowser_RefreshHeader(DWORD* IcePartsBrowser, void* EDX_Unused)
{
	IcePartsBrowser_RefreshHeader_Game(IcePartsBrowser);

	RefreshDetailsPane((char const*)IcePartsBrowser[1], IcePartsBrowser + 21, IcePartsBrowser + 20, (DWORD*)IcePartsBrowser[23]);
}

void __fastcall IcePartsBrowser_DoTheAnimation(DWORD* IcePartsBrowser, void* EDX_Unused, int location, bool on)
{
    // Do custom animations
    DWORD* CategoryNode = (DWORD*)IcePartsBrowser[68];
    if (CategoryNode)
    {
        GetAndDoFEPartAnim(CategoryNode[18], on, 1.0f);
    }
}