#pragma once

HRESULT __stdcall PresentHook(IDirect3DDevice9 *pDevice, RECT *pSourceRect, CONST RECT *pDestRect, HWND hDestWindowOverride, CONST RGNDATA *pDirtyRegion);
void UpdateLiveSplitTexture(LPDIRECT3DDEVICE9 device);
LPDIRECT3DTEXTURE9 CreateTextureFromHBITMAP(LPDIRECT3DDEVICE9 device, HBITMAP hBitmap);
HBITMAP CaptureLiveSplitWindow(HWND hwnd);
void RenderD3D9();
