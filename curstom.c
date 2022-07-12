#pragma comment(lib,"winmm.lib")

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <mmsystem.h>

void note_creat(int z);
void gotoxy_m(int x, int y);
void gotoxy_n(int x, double y);
void gotoxy(int x, int y);
void color(unsigned short color);

extern int custom, long_note_long, select_option, note, note_eksdnl, cnt_all;
extern char* music[10], save;
extern FILE* note_file;
extern double note_speed, speed_eksdnl;

extern int apxmfhsha_note[100000], custom_arr[100][100], custom_note_copy[100000];

void curstom()
{
	fopen_s(&note_file, "note_file.txt", "rt");
	if (note_file != NULL)
	{
		fscanf_s(note_file, "%d %lf %c %d", &custom, &note_speed, &save, 1, &cnt_all);
		fclose(note_file);
	}
	int i = 0, k = 40, page = 0;
	if (save == 'n' || save == 'N')
	{
		cnt_all = 0;
	}
	else
	{
		fopen_s(&note_file, "note_file.txt", "rt");
		if (note_file != NULL)
		{
			fscanf_s(note_file, "%d %lf %c %d\n", &custom, &note_speed, &save, 1, &cnt_all);
			for (int i = 0; i < 100000; i++)
			{
				fscanf_s(note_file, "%d ", &custom_note_copy[i]);
			}
			fclose(note_file);
		}
	}
	speed_eksdnl = 0.001;
	select_option = 0;
	note = 0;
	note_eksdnl = 1;
	save = 'a';

	PlaySound(L"□Raindrops_costheta■ Skyscape (Game Edit Ver.) (online-audio-converter.com).wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
	gotoxy_m(45, 15);
	printf("喻楚蒂 摹鷗ж撮蹂");
	gotoxy(84, k);
	printf("Ⅰ");
	for (int j = 40; j <= 56; j += 4)
	{
		gotoxy(88, j);
		color(15);
		printf("%s", music[i]);
		i++;
	}
	Sleep(300);
	while (1)
	{
	A:
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			if (k == 40)
			{
				goto A;
			}
			else
			{
				gotoxy(84, k);
				printf("  ");
				k -= 4;
				gotoxy(84, k);
				printf("Ⅰ");
				Sleep(200);
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			if (k == 72)
			{
				goto A;
			}
			else
			{
				gotoxy(84, k);
				printf("  ");
				k += 4;
				gotoxy(84, k);
				printf("Ⅰ");
				Sleep(200);
			}
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			gotoxy(84, k);
			printf("Ⅱ");
			switch (k)
			{
			case 40: custom = 1; break;
			case 44: custom = 2; break;
			case 48: custom = 3; break;
			case 52: custom = 4; break;
			case 56: custom = 5; break;
			case 60: custom = 6; break;
			case 64: custom = 7; break;
			case 68: custom = 8; break;
			case 72: custom = 9; break;
			}
			Sleep(200);
			break;
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			return;
		}
	}
	Sleep(200);
	system("cls");
	gotoxy_m(6, 2);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(6, 3);
	printf("弛     1      弛     2      弛     3      弛     4      弛     5      弛     6      弛     7      弛     8      弛     9      弛     10     弛");
	gotoxy_m(6, 4);
	printf("弛            弛            弛            弛            弛            弛            弛            弛            弛            弛            弛");
	gotoxy_m(6, 5);
	printf("弛            弛            弛            弛            弛            弛            弛            弛            弛            弛            弛");
	gotoxy_m(6, 6);
	printf("弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥﹥      弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛");
	gotoxy_m(6, 7);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 8);
	printf("弛     11     弛     12     弛     13     弛     14     弛     15     弛     16     弛     17     弛     18     弛     19     弛     20     弛");
	gotoxy_m(6, 9);
	printf("弛            弛            弛            弛            弛            弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥        弛");
	gotoxy_m(6, 10);
	printf("弛            弛            弛            弛            弛            弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥        弛");
	gotoxy_m(6, 11);
	printf("弛    ﹥﹥﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥  ﹥  弛  ﹥﹥﹥    弛  ﹥﹥﹥﹥  弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥﹥      弛");
	gotoxy_m(6, 12);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 13);
	printf("弛     21     弛     22     弛     23     弛     24     弛     25     弛     26     弛     27     弛     28     弛     29     弛     30     弛");
	gotoxy_m(6, 14);
	printf("弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛      ﹥    弛      ﹥    弛      ﹥    弛        ﹥  弛        ﹥  弛");
	gotoxy_m(6, 15);
	printf("弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛      ﹥    弛      ﹥    弛      ﹥    弛        ﹥  弛        ﹥  弛");
	gotoxy_m(6, 16);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥﹥      弛    ﹥﹥    弛    ﹥  ﹥  弛  ﹥  ﹥    弛    ﹥﹥    弛      ﹥﹥  弛  ﹥    ﹥  弛    ﹥  ﹥  弛");
	gotoxy_m(6, 17);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 18);
	printf("弛     31     弛     32     弛     33     弛     34     弛     35     弛     36     弛     37     弛     38     弛     39     弛     40     弛");
	gotoxy_m(6, 19);
	printf("弛        ﹥  弛  ﹥        弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛      ﹥    弛      ﹥    弛      ﹥    弛");
	gotoxy_m(6, 20);
	printf("弛        ﹥  弛  ﹥        弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛      ﹥    弛      ﹥    弛      ﹥    弛");
	gotoxy_m(6, 21);
	printf("弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥    弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛");
	gotoxy_m(6, 22);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 23);
	printf("弛     41     弛     42     弛     43     弛     44     弛     45     弛     46     弛     47     弛     48     弛     49     弛     50     弛");
	gotoxy_m(6, 24);
	printf("弛        ﹥  弛        ﹥  弛        ﹥  弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥﹥      弛  ﹥﹥      弛  ﹥  ﹥    弛");
	gotoxy_m(6, 25);
	printf("弛        ﹥  弛        ﹥  弛        ﹥  弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥﹥      弛  ﹥﹥      弛  ﹥  ﹥    弛");
	gotoxy_m(6, 26);
	printf("弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥﹥﹥    弛");
	gotoxy_m(6, 27);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 28);
	printf("弛     51     弛     52     弛     53     弛     54     弛     55     弛     56     弛     57     弛     58     弛     59     弛     60     弛");
	gotoxy_m(6, 29);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥﹥    弛    ﹥  ﹥  弛    ﹥  ﹥  弛      ﹥﹥  弛      ﹥﹥  弛  ﹥﹥      弛");
	gotoxy_m(6, 30);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥﹥    弛    ﹥  ﹥  弛    ﹥  ﹥  弛      ﹥﹥  弛      ﹥﹥  弛  ﹥﹥      弛");
	gotoxy_m(6, 31);
	printf("弛  ﹥  ﹥﹥  弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥﹥    弛    ﹥﹥﹥  弛  ﹥﹥  ﹥  弛    ﹥﹥﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(6, 32);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 33);
	printf("弛     61     弛     62     弛     63     弛     64     弛     65     弛     66     弛     67     弛     68     弛     69     弛     70     弛");
	gotoxy_m(6, 34);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(6, 35);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(6, 36);
	printf("弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(6, 37);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(6, 38);
	printf("弛     71     弛     72     弛     73     弛     74     弛     75     弛     76     弛     77     弛     78     弛     79     弛     80     弛");
	gotoxy_m(6, 39);
	printf("弛  ﹥﹥      弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛");
	gotoxy_m(6, 40);
	printf("弛  ﹥﹥      弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛");
	gotoxy_m(6, 41);
	printf("弛  ﹥﹥      弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛");
	gotoxy_m(6, 42);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	gotoxy_m(77, 2);
	printf("0擎 奢寥/100擎 謙猿");
	gotoxy_m(72, 3);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(72, 4);
	printf("弛                               弛");
	gotoxy_m(72, 5);
	printf("弛                               弛");
	gotoxy_m(72, 6);
	printf("弛                               弛");
	gotoxy_m(72, 7);
	printf("弛                               弛");
	gotoxy_m(72, 8);
	printf("弛                               弛");
	gotoxy_m(72, 9);
	printf("弛                               弛");
	gotoxy_m(72, 10);
	printf("弛                               弛");
	gotoxy_m(72, 11);
	printf("弛                               弛");
	gotoxy_m(72, 12);
	printf("弛                               弛");
	gotoxy_m(72, 13);
	printf("弛                               弛");
	gotoxy_m(72, 14);
	printf("弛                               弛");
	gotoxy_m(72, 15);
	printf("弛                               弛");
	gotoxy_m(72, 16);
	printf("弛                               弛");
	gotoxy_m(72, 17);
	printf("弛                               弛");
	gotoxy_m(72, 18);
	printf("弛                               弛");
	gotoxy_m(72, 19);
	printf("弛                               弛");
	gotoxy_m(72, 20);
	printf("弛                               弛");
	gotoxy_m(72, 21);
	printf("弛                               弛");
	gotoxy_m(72, 22);
	printf("弛                               弛");
	gotoxy_m(72, 23);
	printf("弛                               弛");
	gotoxy_m(72, 24);
	printf("弛                               弛");
	gotoxy_m(72, 25);
	printf("弛                               弛");
	gotoxy_m(72, 26);
	printf("弛                               弛");
	gotoxy_m(72, 27);
	printf("弛                               弛");
	gotoxy_m(72, 28);
	printf("弛                               弛");
	gotoxy_m(72, 29);
	printf("弛                               弛");
	gotoxy_m(72, 30);
	printf("弛                               弛");
	gotoxy_m(72, 31);
	printf("弛                               弛");
	gotoxy_m(72, 32);
	printf("弛                               弛");
	gotoxy_m(72, 33);
	printf("弛                               弛");
	gotoxy_m(72, 34);
	printf("弛                               弛");
	gotoxy_m(72, 35);
	printf("弛                               弛");
	gotoxy_m(72, 36);
	printf("弛                               弛");
	gotoxy_m(72, 37);
	printf("弛                               弛");
	gotoxy_m(72, 38);
	printf("弛                               弛");
	gotoxy_m(72, 39);
	printf("弛                               弛");
	gotoxy_m(72, 40);
	printf("弛                               弛");
	gotoxy_m(72, 41);
	printf("弛                               弛");
	gotoxy_m(72, 42);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	gotoxy_m(78, 41);
	printf("８ %d/%d Ⅰ", page + 1, cnt_all / 360 + 1);
	gotoxy_m(71, 43);
	printf("﹦");
	gotoxy_m(70, 44);
	printf("樓  紫");
	gotoxy_m(70, 45);
	printf("%.3lf", note_speed);
	gotoxy_m(71, 46);
	printf("∩");
	gotoxy_m(76, 43);
	printf("﹦");
	gotoxy_m(74, 44);
	printf("樓紫  欽嬪");
	gotoxy_m(75, 45);
	printf("%0.3lf", speed_eksdnl);
	gotoxy_m(76, 46);
	printf("∩");
	gotoxy_m(81, 43);
	printf("﹦");
	gotoxy_m(80, 44);
	printf("喻  お");
	gotoxy_m(80, 45);
	printf("%3d", note);
	gotoxy_m(81, 46);
	printf("∩");
	gotoxy_m(86, 43);
	printf("﹦");
	gotoxy_m(84, 44);
	printf("喻お  欽嬪");
	gotoxy_m(85, 45);
	printf("%2d", note_eksdnl);
	gotoxy_m(86, 46);
	printf("∩");
	int j = 0, p = 1, in = 0;
	switch (select_option)
	{
	case 0:
		gotoxy_m(71, 43);
		printf("～");
		gotoxy_m(71, 46);
		printf("∪");
		break;
	case 1:
		gotoxy_m(76, 43);
		printf("～");
		gotoxy_m(76, 46);
		printf("∪");
		break;
	case 2:
		gotoxy_m(81, 43);
		printf("～");
		gotoxy_m(81, 46);
		printf("∪");
		break;
	case 3:
		gotoxy_m(86, 43);
		printf("～");
		gotoxy_m(86, 46);
		printf("∪");
		break;
	}
	while (1)
	{
		switch (apxmfhsha_note[in])
		{
		case 1:gotoxy_n(89, 0);
			color(15);
			printf("﹥﹥﹥﹥﹥");
			custom_arr[0][89] = 1;
			break;
		}
		if (apxmfhsha_note[in] == 100)
		{
			system("cls"); return;
		}
		if (in == 5000)
		{
			in = 0;
		}
		for (int k = 0; k < long_note_long; k++)
		{
			for (double jm = 47; jm >= 0; jm -= note_speed)
			{
			B:
				if (GetAsyncKeyState(VK_UP) & 0x8000)
				{
					switch (select_option)
					{
					case 0:
						if (note_speed + speed_eksdnl > 1)
							goto B;
						note_speed += speed_eksdnl; gotoxy_m(70, 45); printf("%.3lf", note_speed);
						break;
					case 1: if (speed_eksdnl == 0.001)
					{
						speed_eksdnl = 0.005;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.005)
					{
						speed_eksdnl = 0.01;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.01)
					{
						speed_eksdnl = 0.05; gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.05)
					{
						speed_eksdnl = 0.1;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.1)
					{
						speed_eksdnl = 0.5;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.5)
					{
						speed_eksdnl = 0.001;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  break;
					case 2:
						if (note == 80)
						{
							note = 100;
							gotoxy_m(80, 45); printf("%3d", note);
						}
						else if (note == 100)
						{
							note = 0;
							gotoxy_m(80, 45); printf("%3d", note);
						}
						note += note_eksdnl; gotoxy_m(80, 45); printf("%3d", note);
						if (note > 100)
						{
							note = 100;
							gotoxy_m(80, 45); printf("%3d", note);
						}
						else if (note > 80 && note < 100)
						{
							note = 80;
							gotoxy_m(80, 45); printf("%3d", note);
						}
						break;
					case 3:
						switch (note_eksdnl)
						{
						case 1: note_eksdnl = 5; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 5: note_eksdnl = 10; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 10: note_eksdnl = 50; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 50: note_eksdnl = 1; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						}
						break;
					}
					Sleep(200);
				}
				if (GetAsyncKeyState(VK_DOWN) & 0x8000)
				{
					switch (select_option)
					{
					case 0:
						if (note_speed - speed_eksdnl < 0)
							goto B;
						note_speed -= speed_eksdnl; gotoxy_m(70, 45); printf("%.3lf", note_speed);
						break;
					case 1: if (speed_eksdnl == 0.005)
					{
						speed_eksdnl = 0.001;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.01)
					{
						speed_eksdnl = 0.005;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.05)
					{
						speed_eksdnl = 0.01; gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.1)
					{
						speed_eksdnl = 0.05;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.5)
					{
						speed_eksdnl = 0.1;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  else if (speed_eksdnl == 0.001)
					{
						speed_eksdnl = 0.5;
						gotoxy_m(75, 45);
						printf("%0.3lf", speed_eksdnl);
					}
						  break;
					case 2: if (note == 100)
					{
						note = 80;
						gotoxy_m(80, 45); printf("%3d", note);
					}
						  else if (note == 0)
					{
						note = 100;
						gotoxy_m(80, 45); printf("%3d", note);
					}
						  note -= note_eksdnl; gotoxy_m(80, 45); printf("%3d", note);
						  if (note < 0)
						  {
							  note = 0;
							  gotoxy_m(80, 45); printf("%3d", note);
						  }
						  else if (note > 80 && note < 100)
						  {
							  note = 100;
							  gotoxy_m(80, 45); printf("%3d", note);
						  }
						  break;
					case 3:
						switch (note_eksdnl)
						{
						case 1: note_eksdnl = 50; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 5: note_eksdnl = 1; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 10: note_eksdnl = 5; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						case 50: note_eksdnl = 10; gotoxy_m(85, 45);
							printf("%2d", note_eksdnl); break;
						}
						break;
					}
					Sleep(200);
				}
				if (GetAsyncKeyState(VK_LEFT) & 0x8000)
				{
					if (select_option == 0)
					{
						goto B;
					}
					else
					{
						switch (select_option)
						{
						case 1:
							gotoxy_m(71, 43);
							printf("～");
							gotoxy_m(71, 46);
							printf("∪");
							gotoxy_m(76, 43);
							printf("﹦");
							gotoxy_m(76, 46);
							printf("∩");
							select_option--;
							break;
						case 2:
							gotoxy_m(76, 43);
							printf("～");
							gotoxy_m(76, 46);
							printf("∪");
							gotoxy_m(81, 43);
							printf("﹦");
							gotoxy_m(81, 46);
							printf("∩");
							select_option--;
							break;
						case 3:
							gotoxy_m(81, 43);
							printf("～");
							gotoxy_m(81, 46);
							printf("∪");
							gotoxy_m(86, 43);
							printf("﹦");
							gotoxy_m(86, 46);
							printf("∩");
							select_option--;
							break;
						case 4:
							if (page > 0)
							{
								page--;
								printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
							}
							for (int i = 4; i < 41; i++)
							{
								gotoxy_m(73, i);
								for (int j = page * 370 + (i - 4) * 10; j < page * 370 + (i - 4) * 10 + 10; j++)
								{
									printf("%3d", custom_note_copy[j]);
								}
							}
							gotoxy_m(78, 41);
							printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
							break;
						}
						Sleep(200);
					}
				}
				if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
				{
					if (select_option == 3)
					{
						goto B;
					}
					else
					{
						switch (select_option)
						{
						case 0:
							gotoxy_m(71, 43);
							printf("﹦");
							gotoxy_m(71, 46);
							printf("∩");
							gotoxy_m(76, 43);
							printf("～");
							gotoxy_m(76, 46);
							printf("∪");
							select_option++;
							break;
						case 1:
							gotoxy_m(76, 43);
							printf("﹦");
							gotoxy_m(76, 46);
							printf("∩");
							gotoxy_m(81, 43);
							printf("～");
							gotoxy_m(81, 46);
							printf("∪");
							select_option++;
							break;
						case 2:
							gotoxy_m(81, 43);
							printf("﹦");
							gotoxy_m(81, 46);
							printf("∩");
							gotoxy_m(86, 43);
							printf("～");
							gotoxy_m(86, 46);
							printf("∪");
							select_option++;
							break;
						case 4: if (cnt_all / 370 > page)
						{
							page++;
							printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
						}
							  for (int i = 4; i < 41; i++)
							  {
								  gotoxy_m(73, i);
								  for (int j = page * 370 + (i - 4) * 10; j < page * 370 + (i - 4) * 10 + 10; j++)
								  {
									  printf("%3d", custom_note_copy[j]);
								  }
							  }
							  gotoxy_m(78, 41);
							  printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
							  break;
						}
						Sleep(200);
					}
				}
				if (GetAsyncKeyState(VK_SPACE) & 0x8000)
				{
					if (select_option != 4)
					{
						select_option = 4;
					}
					else
					{
						select_option = 0;
					}
					Sleep(200);
				}
				if (GetAsyncKeyState(VK_BACK) & 0x8000)
				{
					if (cnt_all >= 1)
					{
						cnt_all--;
						custom_note_copy[cnt_all] = 0;
					}
					for (int i = 4; i < 41; i++)
					{
						gotoxy_m(73, i);
						for (int j = page * 370 + (i - 4) * 10; j < page * 370 + (i - 4) * 10 + 10; j++)
						{
							printf("%3d", custom_note_copy[j]);
						}
					}
					gotoxy_m(78, 41);
					printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
					Sleep(200);
				}
				if (GetAsyncKeyState(VK_RETURN) & 0x8000)
				{
					int cnt = 0;
					switch (select_option)
					{
					case 0:
						fopen_s(&note_file, "note_file.txt", "wt");
						if (note_file != NULL)
						{
							fprintf(note_file, "%d %lf %c %d", custom, note_speed, 'y', cnt_all);
							fclose(note_file);
						}
						break;
					case 2:
						custom_note_copy[cnt_all] = note;
						for (int i = 4; i < 41; i++)
						{
							gotoxy_m(73, i);
							for (int j = page * 370 + (i - 4) * 10; j < page * 370 + (i - 4) * 10 + 10; j++)
							{
								printf("%3d", custom_note_copy[j]);
							}
						}
						gotoxy_m(78, 41);
						printf("８ %d/%d Ⅰ", page + 1, cnt_all / 370 + 1);
						cnt_all++;
					}
					Sleep(200);
				}
				if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
				{
				D:
					gotoxy_m(37, 25);
					printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式忖");
					gotoxy_m(37, 26);
					printf("弛                         弛");
					gotoxy_m(37, 27);
					printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式戎");
					gotoxy_m(38, 26);
					printf("盪濰 ж衛啊蝗棲梱?(y/n)  \a");
					while (1)
					{
						if (_kbhit())
						{
							save = _getch();
							break;
						}
					}
					switch (save)
					{
					case 'y':
					case 'Y':
						fopen_s(&note_file, "note_file.txt", "wt");
						if (note_file != NULL)
						{
							fprintf(note_file, "%d %lf %c %d\n", custom, note_speed, 'y', cnt_all);
							for (int i = 0; i < 100000; i++)
							{
								fprintf(note_file, "%d ", custom_note_copy[i]);
							}
							fclose(note_file);
						}
						system("cls");
						Sleep(200);
						return;
					case 'n':
					case 'N':
						for (int i = 0; i < 100000; i++)
						{
							if (i == 10)
							{
								custom_note_copy[i] = 100;
							}
							else
							{
								custom_note_copy[i] = 0;
							}
						}
						fopen_s(&note_file, "note_file.txt", "wt");
						if (note_file != NULL)
						{
							fprintf(note_file, "%d %lf %c %d\n", custom, note_speed, 'n', 0);
							fclose(note_file);
						}
						system("cls");
						Sleep(200);
						return;
					default: goto D;
					}
					Sleep(200);
				}
				if (custom_arr[(int)jm][89] == 1)
				{
					gotoxy_n(89, jm);
					printf("          ");
					custom_arr[(int)jm][89] = 0;
					jm += note_speed;
					gotoxy_n(89, jm);
					color(15);
					printf("﹥﹥﹥﹥﹥");
					custom_arr[(int)jm][89] = 1;
					jm -= note_speed;
					custom_arr[46][89] = 0;
					gotoxy_n(89, 46);
					printf("           ");
				}
			}
		}
		in++;
	}
}