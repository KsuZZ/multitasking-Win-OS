#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

void main() {
	STARTUPINFO si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	CreateProcess(TEXT("D:\\..path to the project..\\calculating.exe"), NULL, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);
	system("pause");
}
