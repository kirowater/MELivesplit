#include "stdafx.h"

void Main() {
	if (!GetModuleHandleA("MirrorsEdge.exe")) {
		return;
	}
	RenderD3D9();
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(module);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Main, 0, 0, 0);
	}
	return TRUE;
}