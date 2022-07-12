#include<stdio.h>
#include<windows.h>
#include<time.h>

void vkswjd(int j);
void gotoxy_n(int x, double y);
void gotoxy_m(int x, int y);
void color(unsigned short color);

extern int count_note, vkswjd_print, combo, perfect_score, play_score;

void vkswjd(int j)
{
	switch (j)
	{
	case 39:
	case 46: gotoxy_n(44, 39); printf("       "); gotoxy_n(44, 39); color(4); printf("  bad  ");
		play_score += (perfect_score * 10) / 100; vkswjd_print = 0; break;
	case 40:
	case 45: gotoxy_n(44, 39); printf("       "); gotoxy_n(44, 39); color(14); printf(" good  ");
		play_score += (perfect_score * 40) / 100; vkswjd_print = 1; break;
	case 41:
	case 44: gotoxy_n(44, 39); printf("       "); gotoxy_n(44, 39); color(10); printf(" great ");
		play_score += (perfect_score * 70) / 100; vkswjd_print = 2; break;
	case 42:
	case 43: gotoxy_n(44, 39); printf("       "); gotoxy_n(44, 39); color(2); printf("perfect");
		play_score += perfect_score; vkswjd_print = 3; break;
	case -1: break;
	default: gotoxy_n(44, 39); printf("       "); gotoxy_n(44, 39); color(15); printf(" miss  ");
		combo = 0; vkswjd_print = 4; gotoxy_m(45, 5); printf("%d   ", combo); break;
	}
}