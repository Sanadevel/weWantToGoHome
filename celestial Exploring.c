#pragma comment(lib,"winmm.lib")

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <mmsystem.h>

void gotoxy_m(int x, int y);
void note_gkatn(int z);
void note_count(int x);
void finsh(int z);
void color(unsigned short color);

extern int note[10][100], tutorialm[100][100];
extern int* note_wnth[10];
extern int count_note, perfect_score;


void Celestial_Exploring()
{
	system("cls");
	int c;
	c = _getch();
	PlaySound(L"무음.wav", 0, SND_FILENAME | SND_ASYNC);
	for (int i = 0; i < 94; i++)
	{
		for (int j = 0; j < 48; j++)
		{
			color(15);
			if (i == 35 || i == 56)
			{
				gotoxy_m(i, j);
				printf("|");
			}
			if (i > 35 && i < 56 && j == 43)
			{
				gotoxy_m(i, j);
				color(4);
				printf("─");
			}
		}
	}
	note_count(3);
	perfect_score = 1000000 / count_note;
	note_gkatn(3);
	finsh(3);
	PlaySound(L"무음.wav", 0, SND_FILENAME | SND_ASYNC);
	PlaySound(L"Fingerprint_-_Mini_Vandals.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
	return;
}