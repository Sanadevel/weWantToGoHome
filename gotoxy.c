#include<Windows.h>

void gotoxy(int x, int y);
void gotoxy_m(int x, int y);
void gotoxy_n(int x, double y);
void gotoxyt(float x, int y);
void gotoxy_s(int x, int y);

void gotoxy(int x, int y)
{
	COORD pos = { x , y / 2 };//커서이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy_s(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy_m(int x, int y)
{
	COORD pos = { x * 2, y };//커서이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy_n(int x, double y)
{
	COORD pos = { x * 2, y };//커서이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void gotoxyt(float x, int y)
{
	COORD pos = { x * 2, y };//커서이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}