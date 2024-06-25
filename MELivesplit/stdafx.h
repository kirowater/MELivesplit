#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
#include <wctype.h>
#include <Shlobj.h>
#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

extern "C" {
#include "memory.h"
#include "render.h"
}