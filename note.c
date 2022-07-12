#pragma comment(lib,"winmm.lib")

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include <mmsystem.h>

void note_gkatn(int z);
void long_note(int z);
void gotoxy_n(int x, double y);
void gotoxy_m(int x, int y);
void waiting_time();
void vkswjd(int j);
void note_creat(int z);
void color(unsigned short color);

extern int tutorialm[100][100];
extern int dkey, fkey, jkey, kkey, count_note;
extern int* note_wnth[10];
extern int vkswjd_print, combo, play_score, long_note_long, custom;
extern double present_combo, note_speed;

struct time {
	int start;
	int end;
	int result;
};

int in = 0;

void note_gkatn(int z)
{
	struct time time_vkswjd[4];
	double speed = 1, delay_time = 10;
	waiting_time();
	switch (z)
	{
	case 0: PlaySound(L"광주 소프트웨어 마이스터고 교가.wav", 0, SND_FILENAME | SND_ASYNC); speed = 0.82; delay_time = 10; break;
	case 1: PlaySound(L"My-First-and-Last.wav", 0, SND_FILENAME | SND_ASYNC); break;
	case 2: PlaySound(L"The Vamps Wake Up.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.37; delay_time = 20; break;
	case 3: PlaySound(L"a_hisa-Celestial-Exploring.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.8; break;
	case 4: PlaySound(L"【SDVX】-RoughSketch-－-666-【NOFX】.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.5; delay_time = 5; break;
	case 5: 
		speed = note_speed * 680;
		switch (custom)
		{
		case 1: PlaySound(L"광주 소프트웨어 마이스터고 교가.wav", 0, SND_FILENAME | SND_ASYNC); speed = 0.82; delay_time = 10; break;
		case 2: PlaySound(L"My-First-and-Last.wav", 0, SND_FILENAME | SND_ASYNC); break;
		case 3: PlaySound(L"The Vamps Wake Up.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.37; delay_time = 20; break;
		case 4: PlaySound(L"a_hisa-Celestial-Exploring.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.8; break;
		case 5: PlaySound(L"【SDVX】-RoughSketch-－-666-【NOFX】.wav", 0, SND_FILENAME | SND_ASYNC); speed = 1.5; delay_time = 5; break;
		}
		break;
	}
	combo = 0;
	in = 0;
	vkswjd_print = 5;
	int j = 0, p = 1;
	double vkswjd_time = 50.3;
	while (1)
	{
		note_creat(z);
		if (note_wnth[z][in] == 100)
		{
			system("cls"); return;
		}
		for (int k = 0; k < long_note_long; k++)
		{
			for (double jm = 47; jm >= 0; jm -= speed)
			{
				for (int i = 36; i <= 51; i += 5)
				{
					if (GetAsyncKeyState(dkey) & 0x8000)
					{
						time_vkswjd[0].end = clock();
						time_vkswjd[0].result = time_vkswjd[0].end - time_vkswjd[0].start;
						if (time_vkswjd[0].result >= vkswjd_time - delay_time)
						{
							for (int i = 46; i >= 39; i--)
							{
								if (tutorialm[i][36] == 1)
								{
									j = i;
									break;
								}
							}
							vkswjd(j);
							gotoxy_n(36, j);
							printf("          ");
							if (vkswjd_print != 4 && present_combo > combo)
							{
								combo++;
							}
							tutorialm[(int)j][36] = 0;
							j = -1;
							vkswjd_time -= 0.0075;
							time_vkswjd[0].start = clock();
						}
					}
					if (GetAsyncKeyState(fkey) & 0x8000)
					{
						time_vkswjd[1].end = clock();
						time_vkswjd[1].result = time_vkswjd[1].end - time_vkswjd[1].start;
						if (time_vkswjd[1].result >= vkswjd_time - delay_time)
						{
							for (int i = 46; i >= 39; i--)
							{
								if (tutorialm[i][41] == 1)
								{
									j = i;
									break;
								}
							}
							vkswjd(j);
							gotoxy_n(41, j);
							printf("          ");
							if (vkswjd_print != 4 && present_combo > combo)
							{
								combo++;
							}
							tutorialm[(int)j][41] = 0;
							j = -1;
							vkswjd_time -= 0.0075;
							time_vkswjd[1].start = clock();
						}
					}
					if (GetAsyncKeyState(jkey) & 0x8000)
					{
						time_vkswjd[2].end = clock();
						time_vkswjd[2].result = time_vkswjd[2].end - time_vkswjd[2].start;
						if (time_vkswjd[2].result >= vkswjd_time - delay_time)
						{
							for (int i = 46; i >= 39; i--)
							{
								if (tutorialm[i][46] == 1)
								{
									j = i;
									break;
								}
							}
							vkswjd(j);
							gotoxy_n(46, j);
							printf("          ");
							tutorialm[(int)j][46] = 0;
							j = -1;
							vkswjd_time -= 0.0075;
							time_vkswjd[2].start = clock();
						}
					}
					if (GetAsyncKeyState(kkey) & 0x8000)
					{
						time_vkswjd[3].end = clock();
						time_vkswjd[3].result = time_vkswjd[3].end - time_vkswjd[3].start;
						if (time_vkswjd[3].result >= vkswjd_time - delay_time)
						{
							for (int i = 46; i >= 39; i--)
							{
								if (tutorialm[i][51] == 1)
								{
									j = i;
									break;
								}
							}
							vkswjd(j);
							gotoxy_n(51, j);
							printf("          ");
							tutorialm[(int)j][51] = 0;
							j = -1;
							vkswjd_time -= 0.0075;
							time_vkswjd[3].start = clock();
						}
					}
					if (tutorialm[(int)jm][i] == 1)
					{
						long_note(z);
						gotoxy_n(i, jm);
						printf("          ");
						tutorialm[(int)jm][i] = 0;
						jm += speed;
						gotoxy_n(i, jm);
						color(15);
						printf("■■■■■");
						tutorialm[(int)jm][i] = 1;
						jm -= speed;
						if (tutorialm[39][41] != 1 && tutorialm[39][46] != 1)
						{
							gotoxy_m(44, 39);
							switch (vkswjd_print)
							{
							case 0: printf("       "); gotoxy_n(44, 39); color(4); printf("  bad"); break;
							case 1: printf("       "); gotoxy_n(44, 39); color(14); printf(" good"); break;
							case 2: printf("       "); gotoxy_n(44, 39); color(10); printf(" great "); break;
							case 3: printf("       "); gotoxy_n(44, 39); color(2); printf("perfect"); break;
							case 4: printf("       "); gotoxy_n(44, 39); color(15); printf(" miss"); present_combo = 0; break;
							}
						}
					}
					gotoxy_m(36, 43);
					color(4);
					printf("──────────────────────────────────────");
					for (int i = 36; i < 51; i += 5)
					{
						if (tutorialm[47][i] == 1)
						{
							j = 47;
							vkswjd(j);
						}
						tutorialm[47][i] = 0;
						gotoxy_n(36, 47);
						printf("                                                                                                    ");
					}
				}
				gotoxy_m(45, 5);
				printf("%d", combo);
				gotoxy_m(57, 5);
				printf("%07d", play_score);
			}
		}
		in++;
	}
}