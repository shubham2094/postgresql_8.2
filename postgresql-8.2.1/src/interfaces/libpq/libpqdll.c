/* $PostgreSQL: pgsql/src/interfaces/libpq/libpqdll.c,v 1.10 2006/03/11 04:38:40 momjian Exp $ */

#define WIN32_LEAN_AND_MEAN
#include <winsock.h>
#include <windows.h>
#include "win32.h"


BOOL		WINAPI
DllMain(HINSTANCE hinstDLL, DWORD fdwReason,
		LPVOID lpReserved)
{
	WSADATA		wsaData;

	switch (fdwReason)
	{
		case DLL_PROCESS_ATTACH:
			if (WSAStartup(MAKEWORD(1, 1), &wsaData))
			{
				/*
				 * No really good way to do error handling here, since we
				 * don't know how we were loaded
				 */
				return FALSE;
			}
			break;
		case DLL_PROCESS_DETACH:
			WSACleanup();
			break;
	}

	return TRUE;
}
