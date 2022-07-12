#pragma comment(lib,"winmm.lib")

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <mmsystem.h>

void gotoxy_m(int x, int y);
void color(unsigned short color);

extern int number[10][7][5], rank[9][7][17], full_combo[7][55], million[7][41];
extern int play_score, combo, count_note, record_line, record_cnt;
extern double present_combo;
extern FILE* record;

void finsh(int z)
{
	int grade = 0;
	if (play_score <= 1000000 && play_score >= 990000)
	{
		grade = 8;
	}
	else if (play_score <= 989999 && play_score >= 950000)
	{
		grade = 7;
	}
	else if (play_score <= 949999 && play_score >= 900000)
	{
		grade = 6;
	}
	else if (play_score <= 899999 && play_score >= 800000)
	{
		grade = 5;
	}
	else if (play_score <= 799999 && play_score >= 650000)
	{
		grade = 4;
	}
	else if (play_score <= 649999 && play_score >= 500000)
	{
		grade = 3;
	}
	else if (play_score <= 499999 && play_score >= 300000)
	{
		grade = 2;
	}
	else if (play_score <= 299999 && play_score >= 100000)
	{
		grade = 1;
	}
	else if (play_score <= 99999 && play_score >= 0)
	{
		grade = 0;
	}
	fopen_s(&record, "record.txt", "a+");
	if (record != NULL)
	{
		record_cnt++;
		fprintf(record, "%d %d %d %d %d\n", record_cnt, z, play_score, combo, grade);
		fclose(record);
	}
	int a = 58, b = 25;
	system("cls");
	gotoxy_m(5, 5);
	color(15);
	printf("┌───┐  ┌───┐  ┌───┐  ┌───┐  ┌───┐");
	gotoxy_m(5, 6);
	printf("│┌──┘  │┌──┘  │┌─┐│  │┌─┐│  │┌──┘");
	gotoxy_m(5, 7);
	printf("│└──┐  ││     ││ ││  │└─┘│  │└──┐");
	gotoxy_m(5, 8);
	printf("└──┐│  ││     ││ ││  │┌ 〈  │┌──┘");
	gotoxy_m(5, 9);
	printf("┌──┘│  │└──┐  │└─┘│  ││ |│  │└──┐");
	gotoxy_m(5, 10);
	printf("└───┘  └───┘  └───┘  └┘ └┘  └───┘");

	gotoxy_m(5, 15);
	printf("┌───┐  ┌───┐  ┌┐  ┌┐  ┌───┐  ┌───┐");
	gotoxy_m(5, 16);
	printf("│┌──┘  │┌─┐│  ││  ││  │┌─┐│  │┌─┐│");
	gotoxy_m(5, 17);
	printf("││     ││ ││  │└──┘│  │└─┘│  ││ ││");
	gotoxy_m(5, 18);
	printf("││     ││ ││  │┌┐┌┐│  │  〈  ││ ││");
	gotoxy_m(5, 19);
	printf("││     ││ ││  ││││││  │┌─┐│  ││ ││");
	gotoxy_m(5, 20);
	printf("│└──┐  │└─┘│  ││└┘││  │└─┘│  │└─┘│");
	gotoxy_m(5, 21);
	printf("└───┘  └───┘  └┘  └┘  └───┘  └───┘");

	gotoxy_m(5, 25);
	printf("┌───┐  ┌───┐    ┌┐    ┌──┐   ┌───┐");
	gotoxy_m(5, 26);
	printf("│┌──┘  │┌─┐│    ││    │┌┐ ┐  │┌──┘");
	gotoxy_m(5, 27);
	printf("││┌─┐  │└─┘│   │┌┐│   ││ ┐│  │└──┐");
	gotoxy_m(5, 28);
	printf("││└┐│  │┌ 〈   │└┘│   ││ ┘│  │┌──┘");
	gotoxy_m(5, 29);
	printf("│└─┘│  ││ ││  │ ┌┐ │  │└┘ ┘  │└──┐");
	gotoxy_m(5, 30);
	printf("└───┘  └┘ └┘  └─┘└─┘  └──┘   └───┘");

	a = 58;
	b = 25;
	if (play_score <= 1000000 && play_score >= 990000)
	{
		gotoxy_m(31, 25);
		printf("┌───┐  ┌───┐  ┌───┐");
		gotoxy_m(31, 26);
		printf("│┌──┘  │┌──┘  │┌──┘");
		gotoxy_m(31, 27);
		printf("│└──┐  │└──┐  │└──┐");
		gotoxy_m(31, 28);
		printf("└──┐│  └──┐│  └──┐│");
		gotoxy_m(31, 29);
		printf("┌──┘│  ┌──┘│  ┌──┘│");
		gotoxy_m(31, 30);
		printf("└───┘  └───┘  └───┘");
	}
	else if (play_score <= 989999 && play_score >= 950000)
	{
		gotoxy_m(33, 25);
		printf("┌───┐  ┌───┐");
		gotoxy_m(33, 26);
		printf("│┌──┘  │┌──┘");
		gotoxy_m(33, 27);
		printf("│└──┐  │└──┐");
		gotoxy_m(33, 28);
		printf("└──┐│  └──┐│");
		gotoxy_m(33, 29);
		printf("┌──┘│  ┌──┘│");
		gotoxy_m(33, 30);
		printf("└───┘  └───┘");
	}
	else if (play_score <= 949999 && play_score >= 900000)
	{
		gotoxy_m(35, 25);
		printf("┌───┐");
		gotoxy_m(35, 26);
		printf("│┌──┘");
		gotoxy_m(35, 27);
		printf("│└──┐");
		gotoxy_m(35, 28);
		printf("└──┐│");
		gotoxy_m(35, 29);
		printf("┌──┘│");
		gotoxy_m(35, 30);
		printf("└───┘");
	}
	else if (play_score <= 899999 && play_score >= 800000)
	{
		gotoxy_m(35, 25);
		printf("  ┌┐  ");
		gotoxy_m(35, 26);
		printf("  ││");
		gotoxy_m(35, 27);
		printf(" │┌┐│  ");
		gotoxy_m(35, 28);
		printf(" │└┘│  ");
		gotoxy_m(35, 29);
		printf("│ ┌┐ │");
		gotoxy_m(35, 30);
		printf("└─┘└─┘");
	}
	else if (play_score <= 799999 && play_score >= 650000)
	{
		gotoxy_m(35, 25);
		printf("┌───┐");
		gotoxy_m(35, 26);
		printf("│┌─┐│");
		gotoxy_m(35, 27);
		printf("│└─┘│");
		gotoxy_m(35, 28);
		printf("│  〈");
		gotoxy_m(35, 29);
		printf("│┌─┐│");
		gotoxy_m(35, 30);
		printf("│└─┘│");
		gotoxy_m(35, 31);
		printf("└───┘");
	}
	else if (play_score <= 649999 && play_score >= 500000)
	{
		gotoxy_m(35, 25);
		printf("┌───┐");
		gotoxy_m(35, 26);
		printf("│┌──┘");
		gotoxy_m(35, 27);
		printf("││   ");
		gotoxy_m(35, 28);
		printf("││   ");
		gotoxy_m(35, 29);
		printf("│└──┐");
		gotoxy_m(35, 30);
		printf("└───┘");
	}
	else if (play_score <= 499999 && play_score >= 300000)
	{
		gotoxy_m(35, 25);
		printf("┌──┐");
		gotoxy_m(35, 26);
		printf("│┌┐ ┐");
		gotoxy_m(35, 27);
		printf("││ ┐│");
		gotoxy_m(35, 28);
		printf("││ ┘│");
		gotoxy_m(35, 29);
		printf("│└┘ ┘");
		gotoxy_m(35, 30);
		printf("└──┘");
	}
	else if (play_score <= 299999 && play_score >= 100000)
	{
		gotoxy_m(35, 25);
		printf("┌───┐");
		gotoxy_m(35, 26);
		printf("│┌──┘");
		gotoxy_m(35, 27);
		printf("│└──┐");
		gotoxy_m(35, 28);
		printf("│┌──┘");
		gotoxy_m(35, 29);
		printf("│└──┐");
		gotoxy_m(35, 30);
		printf("└───┘");
	}
	else if (play_score <= 99999 && play_score >= 0)
	{
		gotoxy_m(35, 25);
		printf("┌───┐");
		gotoxy_m(35, 26);
		printf("│┌──┘");
		gotoxy_m(35, 27);
		printf("│└──┐");
		gotoxy_m(35, 28);
		printf("│┌──┘");
		gotoxy_m(35, 29);
		printf("││");
		gotoxy_m(35, 30);
		printf("└┘");
	}

	if (play_score == 1000000)
	{
		gotoxy_m(30, 5);
		printf(" ┤  ┌─┐ ┌─┐ ┌─┐ ┌─┐ ┌─┐ ┌─┐");
		gotoxy_m(30, 6);
		printf(" │  │ │ │ │ │ │ │ │ │ │ │ │");
		gotoxy_m(30, 7);
		printf(" │  │ │ │ │ │ │ │ │ │ │ │ │");
		gotoxy_m(30, 8);
		printf(" │  │ │ │ │ │ │ │ │ │ │ │ │");
		gotoxy_m(30, 9);
		printf(" │  │ │ │ │ │ │ │ │ │ │ │ │");
		gotoxy_m(30, 10);
		printf(" ┴  └─┘ └─┘ └─┘ └─┘ └─┘ └─┘");
		goto A;
	}
	else if (play_score == 0)
	{
		gotoxy_m(36, 5);
		printf("┌────┐ ");
		gotoxy_m(36, 6);
		printf("│    │ ");
		gotoxy_m(36, 7);
		printf("│    │ ");
		gotoxy_m(36, 8);
		printf("│    │ ");
		gotoxy_m(36, 9);
		printf("│    │ ");
		gotoxy_m(36, 10);
		printf("└────┘ ");
		goto A;
	}
	a = 43;
	play_score *= 10;
	while (play_score != 0)
	{
		b = 5;
		play_score /= 10;
		switch (play_score % 10)
		{
		case 0:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌─┐ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("└─┘ ");
			break;
		case 1:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf(" ┤ "); b++;
			gotoxy_m(a, b);
			printf(" │ "); b++;
			gotoxy_m(a, b);
			printf(" │  "); b++;
			gotoxy_m(a, b);
			printf(" │  "); b++;
			gotoxy_m(a, b);
			printf(" ┴  ");
			break;
		case 2:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("──┐ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("┌─┘ "); b++;
			gotoxy_m(a, b);
			printf("│   "); b++;
			gotoxy_m(a, b);
			printf("└── ");
			break;
		case 3:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("──┐ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("──┤ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("──┘ ");
			break;
		case 4:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("└─┤ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("  │ ");
			break;
		case 5:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌── "); b++;
			gotoxy_m(a, b);
			printf("│   "); b++;
			gotoxy_m(a, b);
			printf("└─┐ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("──┘ ");
			break;
		case 6:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌── "); b++;
			gotoxy_m(a, b);
			printf("│   "); b++;
			gotoxy_m(a, b);
			printf("├─┐ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("└─┘ ");
			break;
		case 7:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌─┐ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("  │ ");
			break;
		case 8: 
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌─┐ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("├─┤ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("└─┘ ");
			  break;
		case 9:
			gotoxy_m(a, b);
			printf("    "); b++;
			gotoxy_m(a, b);
			printf("┌─┐ "); b++;
			gotoxy_m(a, b);
			printf("│ │ "); b++;
			gotoxy_m(a, b);
			printf("└─┤ "); b++;
			gotoxy_m(a, b);
			printf("  │ "); b++;
			gotoxy_m(a, b);
			printf("──┘ ");
			break;
		}
		a -= 2;
	}

A:

	if (combo == count_note)
	{
		gotoxy_m(25, 15);
		printf("┌───┐  ┌┐ ┌┐  ┌┐     ┌┐     ┌───┐  ┌───┐  ┌┐  ┌┐  ┌───┐  ┌───┐");
		gotoxy_m(25, 16);
		printf("│┌──┘  ││ ││  ││     ││     │┌──┘  │┌─┐│  ││  ││  │┌─┐│  │┌─┐│");
		gotoxy_m(25, 17);
		printf("│└──┐  ││ ││  ││     ││     ││     ││ ││  │└──┘│  │└─┘│  ││ ││");
		gotoxy_m(25, 18);
		printf("│┌──┘  ││ ││  ││     ││     ││     ││ ││  │┌┐┌┐│  │  〈  ││ ││");
		gotoxy_m(25, 19);
		printf("││     ││ ││  ││     ││     ││     ││ ││  ││││││  │┌─┐│  ││ ││");
		gotoxy_m(25, 20);
		printf("││     │└─┘│  │└──┐  │└──┐  │└──┐  │└─┘│  ││└┘││  │└─┘│  │└─┘│");
		gotoxy_m(25, 21);
		printf("└┘     └───┘  └───┘  └───┘  └───┘  └───┘  └┘  └┘  └───┘  └───┘");
	}
	else if (combo == 0)
	{
		gotoxy_m(36, 15);
		printf("┌────┐ ");
		gotoxy_m(36, 16);
		printf("│    │ ");
		gotoxy_m(36, 17);
		printf("│    │ ");
		gotoxy_m(36, 18);
		printf("│    │ ");
		gotoxy_m(36, 19);
		printf("│    │ ");
		gotoxy_m(36, 20);
		printf("└────┘ ");
	}
	else
	{
		a = 43;
		while (combo != 0)
		{
			b = 15;
			switch (combo % 10)
			{
			case 0:
				gotoxy_m(a, b);
				printf("┌─┐ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("└─┘ ");
				break;
			case 1:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf(" ┤ "); b++;
				gotoxy_m(a, b);
				printf(" │ "); b++;
				gotoxy_m(a, b);
				printf(" │  "); b++;
				gotoxy_m(a, b);
				printf(" │  "); b++;
				gotoxy_m(a, b);
				printf(" ┴  ");
				break;
			case 2:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("──┐ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("┌─┘ "); b++;
				gotoxy_m(a, b);
				printf("│   "); b++;
				gotoxy_m(a, b);
				printf("└── ");
				break;
			case 3:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("──┐ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("──┤ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("──┘ ");
				break;
			case 4:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("└─┤ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("  │ ");
				break;
			case 5:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("┌── "); b++;
				gotoxy_m(a, b);
				printf("│   "); b++;
				gotoxy_m(a, b);
				printf("└─┐ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("──┘ ");
				break;
			case 6:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("┌── "); b++;
				gotoxy_m(a, b);
				printf("│   "); b++;
				gotoxy_m(a, b);
				printf("├─┐ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("└─┘ ");
				break;
			case 7:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("┌─┐ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("  │ "); b++;
				gotoxy_m(a, b);
				printf("  │ ");
				break;
			case 8: 
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("┌─┐ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("├─┤ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("└─┘ ");
				  break;
			case 9:
				gotoxy_m(a, b);
				printf("    "); b++;
				gotoxy_m(a, b);
				printf("┌─┐ "); b++;
				gotoxy_m(a, b);
				printf("│ │ "); b++;
				gotoxy_m(a, b);
				printf("└─┤ "); b++;
				gotoxy_m(a, b);
				printf("   │ "); b++;
				gotoxy_m(a, b);
				printf("──┘ ");
				break;
			}
			a -= 6;
			combo /= 10;
		}
	}
	gotoxy_m(40, 40);
	printf("계속하려면 space키를 누르시오");

	while (1)
	{
		if (_kbhit())
		{
			int c = _getch();
			if (c == 32)
			{
				system("cls");
				break;
			}
		}
	}
	combo = 0;
	present_combo = 0;
	count_note = 0;
	PlaySound(L"Fingerprint_-_Mini_Vandals.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
}