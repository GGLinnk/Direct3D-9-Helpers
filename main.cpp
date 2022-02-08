// Direct3D 9 Helpers.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "main.hpp"

int d3dDisplayModeCmp(const void *firstD3dDisplayMode, const void *secondD3dDisplayMode)
{
    D3DDISPLAYMODE firstD3dDisplayModeT = * (const D3DDISPLAYMODE *)firstD3dDisplayMode;
    D3DDISPLAYMODE secondD3dDisplayModeT = * (const D3DDISPLAYMODE *)secondD3dDisplayMode;

    INT64 wDiff = (INT64)firstD3dDisplayModeT.Width - (INT64)secondD3dDisplayModeT.Width;

    if (wDiff == 0) {
        INT64 hDiff = (INT64)firstD3dDisplayModeT.Height - (INT64)secondD3dDisplayModeT.Height;

        if (hDiff == 0) {
            INT64 rDiff = (INT64)firstD3dDisplayModeT.RefreshRate - (INT64)secondD3dDisplayModeT.RefreshRate;

            if (rDiff > 0)
                return 4;
            if (rDiff < 0)
                return -4;
            return 0;
        }

        if (hDiff > 0)
            return 2;
        if (hDiff < 0)
            return -2;
    }

    if (wDiff > 0)
        return 1;
    if (wDiff < 0)
        return -1;
}
