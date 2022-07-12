#pragma comment(lib,"winmm.lib")

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include <mmsystem.h>

void setting();
void key_setting();
void curstom();
void helper();
void color(unsigned short color);
void gotoxy_s(int x, int y);
void gotoxy_m(int x, int y);

extern int rhythm2[100][100];

void setting()
{
B:;
	int x, j = 21;
	srand(time(NULL));
	system("cls");
	gotoxy_s(91, 21);
	color(15);
	printf("키셋팅");
	gotoxy_s(91, 22);
	printf("커스텀");
	gotoxy_s(91, 23);
	printf("도움말");
	gotoxy_s(88, 21);
	printf(">");
	gotoxy_s(99, 21);
	printf("<");
	Sleep(300);
	while (1)
	{
		x = rand() % 94;
		gotoxy_m(x, 0);
		rhythm2[0][x] = 1;
		color(15);
		printf("♩");
		Sleep(100);
		for (int i = 47; i >= 0; i--)
		{
			for (int j = 0; j < 94; j++)
			{
				if (j >= 40 && j <= 60 && i == 18 && rhythm2[i][j] == 1)
				{
					rhythm2[i][j] = 0;
					gotoxy_m(j, i);
					printf("  ");
				}
				if (rhythm2[i][j] == 1)
				{
					rhythm2[i][j] = 0;
					gotoxy_m(j, i);
					printf("  ");
					rhythm2[i + 1][j] = 1;
					gotoxy_m(j, i + 1);
					printf("♩");
				}
				if (rhythm2[45][j] == 1)
				{
					gotoxy_m(j, 45);
					printf("  ");
					rhythm2[45][j] = 0;
				}
			}
		}
	A:
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			if (j == 21)
			{
				goto A;
			}
			else
			{
				gotoxy_s(88, j);
				printf(" ");
				gotoxy_s(99, j);
				printf(" ");
				j--;
				gotoxy_s(88, j);
				printf(">");
				gotoxy_s(99, j);
				printf("<");
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			if (j == 23)
			{
				goto A;
			}
			else
			{
				gotoxy_s(88, j);
				printf(" ");
				gotoxy_s(99, j);
				printf(" ");
				j++;
				gotoxy_s(88, j);
				printf(">");
				gotoxy_s(99, j);
				printf("<");
			}
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			switch (j)
			{
			case 21: system("cls"); key_setting(); Sleep(200); goto B;
			case 22: system("cls"); curstom(); Sleep(200); goto B;
			case 23: system("cls"); helper(); Sleep(200); PlaySound(L"Fingerprint_-_Mini_Vandals.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP); goto B;
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			return;
		}
	}
}