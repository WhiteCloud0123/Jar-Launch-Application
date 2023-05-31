#include <iostream>
#include   "windows.h "
#include   "shellapi.h "
#include   "process.h"

#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )

int main()
{

    ShellExecute( 0, ( LPCWSTR )L"open", ( LPCWSTR )L"Launch.vbs", ( LPCWSTR )L"", ( LPCWSTR )L"", 0 );



    return 0;
}