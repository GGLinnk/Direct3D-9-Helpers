#pragma once

/// <summary>
///   This function compares two D3DDISPLAYMODE allow qsort to sorts them by their width, then by their height and finally by their refresh rate.
/// </summary>
/// <param name="firstD3dDisplayMode">The first D3DDISPLAYMODE to be compared</param>
/// <param name="secondD3dDisplayMode">The second D3DDISPLAYMODE to be compared</param>
/// <returns>
///   <para>If width, height or </para>
///   <para>If modes are fully identical. Returns 0.</para>
///   <para></para>
/// </returns>
int d3dDisplayModeCmp(const void *firstD3dDisplayMode, const void *secondD3dDisplayMode);