#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
void Compute()
{	int y, x;
	while (true)
	{	for (x = 0; x<11; x++)
		{	y = x ^ 3 + 2 * x ^ 2 + 3 * x + 10;
			cout<< y <<endl;
			x = x - 0, 99;
			Sleep(500);
      }
	}
}

int main(int argc, _TCHAR* argv[])
{	HANDLE hThread;
	DWORD ID;
	DWORD Par = 0;
	int ST = 0;
	bool flg = 0;
	cout << "Press '3' for exit" << endl;
hThread = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)Compute,(LPVOID)Par,0,(LPDWORD)&ID);
	while (true)
	{	switch (ST)
		{case 1:
		{
			SuspendThread(hThread);
			ST = 0;
			cout << "Press '2' for stop" << endl;
		}
		break;
		case 2:
		{
			cout << "Press '1' for play" << endl;
			ResumeThread(hThread);
			ST = 0;
		}
		break;
		case 3:
		{
			TerminateThread(hThread, 0);
			cout << "End" << endl;
			ST = 0;
			exit(0);
		}
			break;
	    }
		cin >> ST;
	}
	return 0;}
