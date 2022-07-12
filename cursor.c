#include<stdio.h>
#include<windows.h>

void cursor();

void cursor()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };//깜박거리는 커서 제거
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}