#define _WIN32_WINNT 0x0500
#include <windows.h>
int main() {
	HWND hWnd = GetConsoleWindow();
	ShowWindow( hWnd, SW_HIDE );
	while(1) {
		system("taskkill /f /im REDAgent.exe");
		system("taskkill /f /im ePointer.exe");
		system("taskkill /f /im ngtray.exe");
	}
}
