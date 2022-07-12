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

extern int note[10][100], tutorialm[100][100], curstom_note[100000];

extern int* note_wnth[10];
extern int count_note, perfect_score, custom, cnt_all;
extern double note_speed;
extern char save;
extern FILE* note_file;

void custom_map()
{
	system("cls");
A:;
	fopen_s(&note_file, "note_file.txt", "rt");
	if (note_file != NULL)
	{
		fscanf_s(note_file, "%d %lf %c %d\n", &custom, &note_speed, &save, 1, &cnt_all);
		for (int i = 0; i < 100000; i++)
		{
			fscanf_s(note_file, "%d ", &curstom_note[i]);
		}
		fclose(note_file);
	}
	PlaySound(L"¹«À½.wav", 0, SND_FILENAME | SND_ASYNC);
	Sleep(300);
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
				printf("¦¡");
			}
		}
	}
	note_count(5);
	perfect_score = 1000000 / count_note;
	note_gkatn(5);
	PlaySound(L"Fingerprint_-_Mini_Vandals.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
	finsh(5);
	return;
}