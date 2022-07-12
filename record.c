#include<stdio.h>
#include<windows.h>

void gotoxy_m(int x, int y);
void color(unsigned short color);

extern FILE* record;
extern int record_cnt, play_score, combo;

struct record_s {
	int map;
	int score;
	int combo;
	int grade_s;
};

void record_gkatn()
{
	int y = 16;
	system("cls");
	gotoxy_m(32, 13);
	color(15);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(32, 14);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 15);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 16);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 17);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 18);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 19);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 20);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 21);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 22);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 23);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 24);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 25);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 26);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 27);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 28);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 29);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 30);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 31);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 32);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 33);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(32, 34);
	printf("弛                               弛              弛      弛       弛");
	gotoxy_m(32, 35);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	struct record_s record_s[10] = {0};
	int z = 0, i = 0, j = 0;
	fopen_s(&record, "record.txt", "rt");
	if (record != NULL)
	{
		while(i != 10)
		{
			fscanf_s(record, "%d %d %d %d %d", &z, &record_s[i].map, &record_s[i].score, &record_s[i].combo, &record_s[i].grade_s);
			if (z != NULL && i > record_cnt - 10)
			{
				i++;
			}
			else if (z == NULL)
			{
				break;
			}
		}
		fclose(record);
	}
	gotoxy_m(40, 14);
	printf("喻楚");
	gotoxy_m(51, 14);
	printf("薄熱");
	gotoxy_m(57, 14);
	printf("巍爾");
	gotoxy_m(60, 14);
	printf("蛔晝");
	for (int i = 9; i >= 0; i--)
	{
		gotoxy_m(33, y);
		switch (record_s[i].map)
		{
		case 0: printf("ぅ饜葬橡"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo); 
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		case 1: printf("MY FIRST AND LAST"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo);
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		case 2: printf("WAKE UP"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo);
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		case 3: printf("CELESTIAL EXPLORING"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo);
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		case 4: printf("666"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo);
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		case 5: printf("CUSTOM"); gotoxy_m(50, y); printf("%d", record_s[i].score); gotoxy_m(57, y); printf("%d", record_s[i].combo);
			switch (record_s[i].grade_s)
			{
			case 0: gotoxy_m(61, y); printf("F"); break;
			case 1: gotoxy_m(61, y); printf("E"); break;
			case 2: gotoxy_m(61, y); printf("D"); break;
			case 3: gotoxy_m(61, y); printf("C"); break;
			case 4: gotoxy_m(61, y); printf("B"); break;
			case 5: gotoxy_m(61, y); printf("A"); break;
			case 6: gotoxy_m(61, y); printf("S"); break;
			case 7: gotoxy_m(60, y); printf("SS"); break;
			case 8: gotoxy_m(60, y); printf("SSS"); break;
			}
			break;
		}
	}
	while (1)
	{
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			return;
		}
	}
}