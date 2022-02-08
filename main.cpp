// Direct3D 9 Helpers.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "main.hpp"

int d3dDisplayModeCmp(const void *firstD3dDisplayMode, const void *secondD3dDisplayMode)
{
    D3DDISPLAYMODE firstD3dDisplayModeT = * (const D3DDISPLAYMODE *)firstD3dDisplayMode;
    D3DDISPLAYMODE secondD3dDisplayModeT = * (const D3DDISPLAYMODE *)secondD3dDisplayMode;

    UINT wDiff = (firstD3dDisplayModeT.Width - secondD3dDisplayModeT.Width);

    if (wDiff == 0) {
        UINT hDiff = (firstD3dDisplayModeT.Height - secondD3dDisplayModeT.Height);

        if (hDiff == 0) {
            return (firstD3dDisplayModeT.RefreshRate - secondD3dDisplayModeT.RefreshRate);
        }

        return hDiff;
    }

    return wDiff;
}
