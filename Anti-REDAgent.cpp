#define _WIN32_WINNT 0x0500
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	HWND hWnd = GetConsoleWindow();
	ShowWindow( hWnd, SW_HIDE );
	while(true) {
		system("taskkill /f /im REDAgent.exe");
		system("taskkill /f /im ePointer.exe");
		system("taskkill /f /im ngtray.exe");
	}
}
