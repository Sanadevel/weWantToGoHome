#include<stdio.h>
#include<conio.h>
#include<windows.h>

void color(unsigned short color);
void choose_music();
void music0();
void music1();
void music2();
void music3();
void music4();
void music5();
void tutorial();
void my_first_and_last();
void Celestial_Exploring();
void _666();
void custom_map();
void wake_up();
void gotoxy(int x, int y);
void gotoxy_m(int x, int y);
void finsh(int z);

extern int choose_music_arr[100][100], star[7][7];;
extern char* music[10];

int rhythm[100][100];

void choose_music()
{
A:;
	int page = 0;
	Sleep(500);
	system("cls");
	music0();
	while (1)
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			switch(page)
			{
			case 0: page = 5; music5(); break;
			case 1: page--; music0(); break;
			case 2: page--; music1(); break;
			case 3: page--; music2(); break;
			case 4: page--; music3(); break;
			case 5: page--; music4(); break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			switch (page)
			{
			case 0: page++; music1(); break;
			case 1: page++; music2(); break;
			case 2: page++; music3(); break;
			case 3: page++; music4(); break;
			case 4: page++; music5(); break;
			case 5: page = 0; music0(); break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			switch (page)
			{
			case 0: tutorial(); goto A;
			case 1: my_first_and_last(); goto A;
			case 2: wake_up(); goto A;
			case 3: Celestial_Exploring(); goto A;
			case 4: _666(); goto A;
			case 5: custom_map(); goto A;
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			return;
		}
	}
}

void music0()
{
	system("cls");
	gotoxy_m(1, 1);
	color(8);
	printf("忙式式式式忖忙忖 忙忖忙式式式式忖忙式式式忖忙式式式忖忙式式式式忖  忙忖  忙忖");
	gotoxy_m(1, 2);
	printf("戌式忖忙式戎弛弛 弛弛戌式忖忙式戎弛忙式忖弛弛忙式忖弛戌式忖忙式戎  弛弛  弛弛");
	gotoxy_m(1, 3);
	printf("  弛弛  弛弛 弛弛  弛弛  弛弛 弛弛弛戌式戎弛  弛弛   弛忙忖弛 弛弛");
	gotoxy_m(1, 4);
	printf("  弛弛  弛弛 弛弛  弛弛  弛弛 弛弛弛忙 ●  弛弛   弛戌戎弛 弛弛");
	gotoxy_m(1, 5);
	printf("  弛弛  弛戌式戎弛  弛弛  弛戌式戎弛弛弛 弛弛忙式戎戌式忖弛忙式式忖弛弛戌式式忖");
	gotoxy_m(1, 6);
	printf("  戌戎  戌式式式戎  戌戎  戌式式式戎戌戎 戌戎戌式式式式戎戌戎  戌戎戌式式式戎");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf("式式忖 "); b++;
	gotoxy_m(a, b);
	printf("  弛 "); b++;
	gotoxy_m(a, b);
	printf("忙式戎 "); b++;
	gotoxy_m(a, b);
	printf("弛   "); b++;
	gotoxy_m(a, b);
	printf("戌式式 ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("忙式忖 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戌式戎 ");
}

void music1()
{
	system("cls");
	gotoxy_m(1, 1);
	color(12);
	printf("忙忖  忙忖忙忖  忙忖忙式式式忖忙式式式式忖忙式式式忖忙式式式忖忙式式式式忖 忙忖  忙忖  忙忖忙式式忖 忙忖     忙忖  忙式式式忖忙式式式式忖");
	gotoxy_m(1, 2);
	printf("弛弛  弛弛弛戌式式戎弛弛忙式式戎戌式忖忙式戎弛忙式忖弛弛忙式式戎戌式忖忙式戎 弛弛  弛 弛 弛弛弛忙忖 忖弛弛     弛弛  弛忙式式戎戌式忖忙式戎");
	gotoxy_m(1, 3);
	printf("弛戌式式戎弛戌式忖忙式戎弛戌式式忖  弛弛  弛戌式戎弛弛戌式式忖  弛弛  弛忙忖弛 弛  弛弛弛弛弛 忖弛弛弛    弛忙忖弛 弛戌式式忖  弛弛  ");
	gotoxy_m(1, 4);
	printf("弛忙忖忙忖弛  弛弛  弛忙式式戎  弛弛  弛忙 ●戌式式忖弛  弛弛  弛戌戎弛 弛弛弛  弛弛弛 戎弛弛弛    弛戌戎弛 戌式式忖弛  弛弛   ");
	gotoxy_m(1, 5);
	printf("弛弛戌戎弛弛  弛弛  弛弛   忙式戎戌式忖弛弛 弛弛忙式式戎弛  弛弛 弛忙式式忖弛弛弛 弛 弛弛戌戎 戎弛戌式式忖弛忙式式忖弛忙式式戎弛  弛弛  ");
	gotoxy_m(1, 6);
	printf("戌戎  戌戎  戌戎  戌戎   戌式式式式戎戌戎 戌戎戌式式式戎  戌戎 戌戎  戌戎戌戎  戌戎戌式式戎 戌式式式戎戌戎  戌戎戌式式式戎  戌戎  ");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf("忙式忖 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戌式戎 ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("忙式忖 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戍式扣 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戌式戎 ");
}

void music2()
{
	system("cls");
	gotoxy_m(1, 1);
	color(11);
	printf("忙忖忙忖忙忖  忙忖  忙忖  忙忖忙式式式忖忙忖 忙忖忙式式式忖");
	gotoxy_m(1, 2);
	printf("弛弛弛弛弛弛  弛弛  弛弛 弛 弛弛忙式式戎弛弛 弛弛弛忙式忖弛");
	gotoxy_m(1, 3);
	printf("弛戌戎戌戎弛 弛忙忖弛 弛戌戎  /弛戌式式忖弛弛 弛弛弛戌式戎弛");
	gotoxy_m(1, 4);
	printf("戌忖忙忖忙戎 弛戌戎弛 弛忙忖 ′弛忙式式戎弛弛 弛弛弛忙式式戎");
	gotoxy_m(1, 5);
	printf(" 弛弛弛弛 弛忙式式忖弛弛弛 弛 弛弛戌式式忖弛戌式戎弛弛弛   ");
	gotoxy_m(1, 6);
	printf(" 戌戎戌戎 戌戎  戌戎戌戎  戌戎戌式式式戎戌式式式戎戌戎   ");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(78 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 69, b = 28;
	gotoxy_m(a, b);
	printf("忙式忖 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戌式扣 "); b++;
	gotoxy_m(a, b);
	printf("  弛 "); b++;
	gotoxy_m(a, b);
	printf("式式戎 ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("弛 弛 "); b++;
	gotoxy_m(a, b);
	printf("戌式扣 "); b++;
	gotoxy_m(a, b);
	printf("  弛 "); b++;
	gotoxy_m(a, b);
	printf("  弛 ");
}

void music3()
{
	system("cls");
	gotoxy_m(1, 1);
	color(5);
	printf("忙式式式忖忙式式式忖忙忖   忙式式式忖忙式式式忖忙式式式式忖忙式式式式忖  忙忖  忙忖   忙式式式忖忙忖 忙忖忙式式式忖忙忖   忙式式式忖忙式式式忖忙式式式式忖忙忖  忙忖忙式式式忖");
	gotoxy_m(1, 2);
	printf("弛忙式式戎弛忙式式戎弛弛   弛忙式式戎弛忙式式戎戌式忖忙式戎戌式忖忙式戎  弛弛  弛弛   弛忙式式戎弛戌 戎弛弛忙式忖弛弛弛   弛忙式忖弛弛忙式忖弛戌式忖忙式戎弛 弛 弛弛弛忙式式戎");
	gotoxy_m(1, 3);
	printf("弛弛   弛戌式式忖弛弛   弛戌式式忖弛戌式式忖  弛弛    弛弛   弛忙忖弛 弛弛   弛戌式式忖 忖 忙 弛戌式戎弛弛弛   弛弛 弛弛弛戌式戎弛  弛弛  弛  弛弛弛弛弛忙式忖");
	gotoxy_m(1, 4);
	printf("弛弛   弛忙式式戎弛弛   弛忙式式戎戌式式忖弛  弛弛    弛弛   弛戌戎弛 弛弛   弛忙式式戎 戎 戌 弛忙式式戎弛弛   弛弛 弛弛弛忙 ●  弛弛  弛弛弛  弛弛弛戌忖弛");
	gotoxy_m(1, 5);
	printf("弛戌式式忖弛戌式式忖弛戌式式忖弛戌式式忖忙式式戎弛  弛弛  忙式戎戌式忖弛忙式式忖弛弛戌式式忖弛戌式式忖弛忙 忖弛弛弛   弛戌式式忖弛戌式戎弛弛弛 弛弛忙式戎戌式忖弛弛 弛 弛弛戌式戎弛");
	gotoxy_m(1, 6);
	printf("戌式式式戎戌式式式戎戌式式式戎戌式式式戎戌式式式戎  戌戎  戌式式式式戎戌戎  戌戎戌式式式戎戌式式式戎戌戎 戌戎戌戎   戌式式式戎戌式式式戎戌戎 戌戎戌式式式式戎戌戎  戌戎戌式式式戎");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(78 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("式式忖 "); b++;
	gotoxy_m(a, b);
	printf("  弛 "); b++;
	gotoxy_m(a, b);
	printf("式式扣 "); b++;
	gotoxy_m(a, b);
	printf("  弛 "); b++;
	gotoxy_m(a, b);
	printf("式式戎 ");
}

void music4()
{
	system("cls");
	gotoxy_m(1, 1);
	color(2);
	printf("忙式式式忖忙式式式忖忙式式式忖");
	gotoxy_m(1, 2);
	printf("弛忙式式戎弛忙式式戎弛忙式式戎");
	gotoxy_m(1, 3);
	printf("弛戌式式忖弛戌式式忖弛戌式式忖");
	gotoxy_m(1, 4);
	printf("弛忙式忖弛弛忙式忖弛弛忙式忖弛");
	gotoxy_m(1, 5);
	printf("弛戌式戎弛弛戌式戎弛弛戌式戎弛");
	gotoxy_m(1, 6);
	printf("戌式式式戎戌式式式戎戌式式式戎");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(78 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(86 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf(" 扣 "); b++;
	gotoxy_m(a, b);
	printf(" 弛 "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 弛  "); b++;
	gotoxy_m(a, b);
	printf(" 扛  ");
}

void music5()
{
	system("cls");
	gotoxy_m(1, 1);
	color(6);
	printf("忙式式式忖忙忖 忙忖忙式式式忖忙式式式式忖忙式式式忖忙忖  忙忖");
	gotoxy_m(1, 2);
	printf("弛忙式式戎弛弛 弛弛弛忙式式戎戌式忖忙式戎弛忙式忖弛弛弛  弛弛");
	gotoxy_m(1, 3);
	printf("弛弛   弛弛 弛弛弛戌式式忖  弛弛  弛弛 弛弛弛戌式式戎弛");
	gotoxy_m(1, 4);
	printf("弛弛   弛弛 弛弛戌式式忖弛  弛弛  弛弛 弛弛弛忙忖忙忖弛");
	gotoxy_m(1, 5);
	printf("弛戌式式忖弛戌式戎弛忙式式戎弛  弛弛  弛戌式戎弛弛弛戌戎弛弛");
	gotoxy_m(1, 6);
	printf("戌式式式戎戌式式式戎戌式式式戎  戌戎  戌式式式戎戌戎  戌戎");
	gotoxy_m(50, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(50, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(50, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(50, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(50, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(50, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(50, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(50, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(50, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(50, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(50, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(50, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(50, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
}