#pragma comment(lib,"winmm.lib")

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

void title();
void choose_music();
void tutorial();
void record_gkatn();
void gotoxyt(float x, int y);
void setting();


extern int music_rkawl;

void color(unsigned short color);
void gotoxyt(float x, int y);

void title() {
	PlaySound(L"Fingerprint_-_Mini_Vandals.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
B:;
	int i, j = 41;
	int a = 0;
	int x = 0;
	int y = 0;
	gotoxyt(42, 5);
	color(15);
	printf("@@               @@");
	gotoxyt(40.5, 6);
	printf("(@@                   @@)");
	gotoxyt(21.5, 7);
	printf("@@)                     @@             @:       (:@@:)      :@             @@                     (@@");
	gotoxyt(20.5, 8);
	printf(" @                       :#               @@@@@@@@@0@@0@@@@@@@@               #:                       @");
	gotoxyt(20.5, 9);
	printf("(##@@#:            (#@#<--(@@@@         _-@@                 @@-_         @@@@)-->#@#)            :#@@##)");
	gotoxyt(23, 10);
	printf("(@@@@@@@@@@@@@@@         @@@@@@@@@@                         @@@@@@@@@@         @@@@@@@@@@@@@@@)");
	gotoxyt(16, 31);
	printf("@@)                                                    * G  A  M  E *                                                   (@@");
	gotoxyt(15.5, 32);
	printf("@       @@          @@@)										    (@@@          @@       @");
	gotoxyt(15, 33);
	printf("@      _@  @        @               @@@@@@          _____@@#<<(==)>>#@@_____          @@@@@@              @        @  @_      @");
	gotoxyt(15, 34);
	printf("(#@@#@          @@@@:@@@@@@@@@@@@@@@  || @@@@@        | @ << (-==-) >> @ |        @@@@@ ||  @@@@@@@@@@:@@@@            @#@@#)");
	gotoxyt(17.5, 35);
	printf("@@@@@@@@@@@                   @@@@@   |  @@@@       --<< (==) >>--       @@@@  |   @@@@@              @@@@@@@@@@@@");
	gotoxyt(33, 36);
	printf("@   @###@@@  @@@@_                    _@@@@  @@@###@   @");
	gotoxyt(44.5, 37);
	printf("@-  ( )  -@");
	gotoxyt(45, 38);
	printf("@-------@");
	gotoxyt(45.5, 39);
	printf("@@___@@");
	gotoxyt(45, 41);
	printf("게임 시작");
	gotoxyt(44.5, 42);
	printf("플레이 기록");
	gotoxyt(46, 43);
	printf("설 정");
	gotoxyt(43.5, 41);
	printf(">");
	gotoxyt(50.5, 41);
	printf("<");
	gotoxyt(87, 47);
	printf("연타하면 뒤짐");
	for (i = 0;; i++)
	{
		if (i == 15)
		{
			i = 0;
		}
		gotoxyt(13, 15);
		color(i);
		printf("##########            ##           ##         ##            ##      ################         ##           ##         ####       ####");
		gotoxyt(13, 16);
		printf("##       ##           ##           ##          ##          ##              ##                ##           ##        ##  ##     ##  ##");
		gotoxyt(13, 17);
		printf("##        ##          ##           ##            ##      ##                ##                ##           ##       ##    ##   ##    ##");
		gotoxyt(13, 18);
		printf("##         ##         ##           ##              ##  ##                  ##                ##           ##      ##      ## ##      ##");
		gotoxyt(13, 19);
		printf("##         ##         ##           ##                ##                    ##                ##           ##      ##      ## ##      ##");
		gotoxyt(13, 20);
		printf("##        ##          ###############                ##                    ##                ###############      ##       ##        ##");
		gotoxyt(13, 21);
		printf("##       ##           ###############                ##                    ##                ###############      ##       ##        ##");
		gotoxyt(13, 22);
		printf("#########             ##           ##                ##                    ##                ##           ##      ##       ##        ##");
		gotoxyt(13, 23);
		printf("##       ##           ##           ##                ##                    ##                ##           ##      ##       ##        ##");
		gotoxyt(13, 24);
		printf("##        ##          ##           ##                ##                    ##                ##           ##      ##       ##        ##");
		gotoxyt(13, 25);
		printf("##         ##         ##           ##                ##                    ##                ##           ##      ##       ##        ##");
		gotoxyt(13, 26);
		printf("##          ##        ##           ##                ##                    ##                ##           ##      ##       ##        ##");
		gotoxyt(13, 27);
		printf("##           ##       ##           ##                ##                    ##                ##           ##      ##       ##        ##");

		Sleep(100);
	A:

		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			if (j == 41)
			{
				goto A;
			}
			else
			{
				gotoxyt(43.5, j);
				printf(" ");
				gotoxyt(50.5, j);
				printf(" ");
				j--;
				gotoxyt(43.5, j);
				color(15);
				printf(">");
				gotoxyt(50.5, j);
				printf("<");
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			if (j == 43)
			{
				goto A;
			}
			else
			{
				gotoxyt(43.5, j);
				printf(" ");
				gotoxyt(50.5, j);
				printf(" ");
				j++;
				gotoxyt(43.5, j);
				color(15);
				printf(">");
				gotoxyt(50.5, j);
				printf("<");
			}
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			switch (j)
			{
			case 41: choose_music(); goto B;
			case 42: record_gkatn(); goto B;
			case 43: setting(); goto B;
			}
		}
	}
}