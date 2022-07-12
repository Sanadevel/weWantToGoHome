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
	printf("���������������� ������������������������������������������������  ����  ����");
	gotoxy_m(1, 2);
	printf("���������������� ������������������������������������������������  ����  ����");
	gotoxy_m(1, 3);
	printf("  ����  ���� ����  ����  ���� ��������������  ����   �������� ����");
	gotoxy_m(1, 4);
	printf("  ����  ���� ����  ����  ���� �������� ��  ����   �������� ����");
	gotoxy_m(1, 5);
	printf("  ����  ����������  ����  �������������� ��������������������������������������");
	gotoxy_m(1, 6);
	printf("  ����  ����������  ����  �������������� ��������������������  ��������������");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("��");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("��   "); b++;
	gotoxy_m(a, b);
	printf("������ ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
}

void music1()
{
	system("cls");
	gotoxy_m(1, 1);
	color(12);
	printf("����  ��������  ���������������������������������������������������������� ����  ����  ������������ ����     ����  ����������������������");
	gotoxy_m(1, 2);
	printf("����  ���������������������������������������������������������������������� ����  �� �� ���������� ������     ����  ����������������������");
	gotoxy_m(1, 3);
	printf("����������������������������������  ����  ��������������������  ����  �������� ��  ���������� ��������    �������� ����������  ����  ");
	gotoxy_m(1, 4);
	printf("������������  ����  ����������  ����  ���� ������������  ����  �������� ������  ������ ��������    �������� ����������  ����   ");
	gotoxy_m(1, 5);
	printf("������������  ����  ����   ���������������� ��������������  ���� ���������������� �� �������� ����������������������������������  ����  ");
	gotoxy_m(1, 6);
	printf("����  ����  ����  ����   ���������������� ��������������  ���� ����  ��������  ������������ ��������������  ��������������  ����  ");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("��");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
}

void music2()
{
	system("cls");
	gotoxy_m(1, 1);
	color(11);
	printf("������������  ����  ����  ������������������ ��������������");
	gotoxy_m(1, 2);
	printf("������������  ����  ���� �� ���������������� ��������������");
	gotoxy_m(1, 3);
	printf("������������ �������� ������  /�������������� ��������������");
	gotoxy_m(1, 4);
	printf("������������ �������� ������ ���������������� ��������������");
	gotoxy_m(1, 5);
	printf(" �������� ���������������� �� ��������������������������   ");
	gotoxy_m(1, 6);
	printf(" �������� ����  ��������  ����������������������������   ");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("��");
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
				printf("��");
			}
		}
	}
	int a = 69, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("  �� ");
}

void music3()
{
	system("cls");
	gotoxy_m(1, 1);
	color(5);
	printf("������������������������   ��������������������������������������������  ����  ����   �������������� ������������������   ������������������������������������  ��������������");
	gotoxy_m(1, 2);
	printf("������������������������   ��������������������������������������������  ����  ����   �������������� ������������������   ���������������������������������� �� ��������������");
	gotoxy_m(1, 3);
	printf("����   ��������������   ��������������������  ����    ����   �������� ����   ���������� �� �� ��������������   ���� ��������������  ����  ��  ����������������");
	gotoxy_m(1, 4);
	printf("����   ��������������   ��������������������  ����    ����   �������� ����   ���������� �� �� ��������������   ���� �������� ��  ����  ������  ������������");
	gotoxy_m(1, 5);
	printf("��������������������������������������������������  ����  ������������������������������������������������ ��������   ������������������������ �������������������� �� ������������");
	gotoxy_m(1, 6);
	printf("��������������������������������������������������  ����  ����������������  ���������������������������� ��������   ������������������������ ��������������������  ��������������");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("��");
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
				printf("��");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
}

void music4()
{
	system("cls");
	gotoxy_m(1, 1);
	color(2);
	printf("������������������������������");
	gotoxy_m(1, 2);
	printf("������������������������������");
	gotoxy_m(1, 3);
	printf("������������������������������");
	gotoxy_m(1, 4);
	printf("������������������������������");
	gotoxy_m(1, 5);
	printf("������������������������������");
	gotoxy_m(1, 6);
	printf("������������������������������");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(70 + j, 10 + i);
				printf("��");
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
				printf("��");
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
				printf("��");
			}
		}
	}
	int a = 67, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 69, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 71, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
}

void music5()
{
	system("cls");
	gotoxy_m(1, 1);
	color(6);
	printf("�������������� ����������������������������������������  ����");
	gotoxy_m(1, 2);
	printf("�������������� ����������������������������������������  ����");
	gotoxy_m(1, 3);
	printf("����   ���� ��������������  ����  ���� ����������������");
	gotoxy_m(1, 4);
	printf("����   ���� ��������������  ����  ���� ����������������");
	gotoxy_m(1, 5);
	printf("������������������������������  ����  ����������������������");
	gotoxy_m(1, 6);
	printf("������������������������������  ����  ��������������  ����");
	gotoxy_m(50, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(50, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(50, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(50, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(50, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(50, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(50, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(50, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(50, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(50, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(50, 33);
	printf("����������������  ������       ������������");
}