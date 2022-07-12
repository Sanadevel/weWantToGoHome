#include<stdio.h>
#include<windows.h>

void gotoxy_m(int x, int y);
void helper_frame();
void page1();
void page10();
void page2();
void page3();
void page4();
void page5();
void page6();
void page7();
void page8();
void page9();
void page_null();

void helper()
{
	int page = 0;
	helper_frame();
	gotoxy_m(46, 45);
	printf("８ %d/10 Ⅰ", page + 1);
	page1();
	while (1)
	{
	A:
		if (GetAsyncKeyState(VK_LEFT))
		{
			if (page == 0)
			{
				page = 9;
			}
			else
			{
				page--;
			}
			switch (page)
			{
			case 0: page_null(); helper_frame(); page1(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 1: page_null(); helper_frame(); page10(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 2: page_null(); helper_frame(); page2(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 3: page_null(); helper_frame(); page3(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 4: page_null(); helper_frame(); page4(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 5: page_null(); helper_frame(); page5(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 6: page_null(); helper_frame(); page6(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 7: page_null(); helper_frame(); page7(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 8: page_null(); helper_frame(); page8(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break; break; break; break; break; break;
			case 9: page_null(); helper_frame(); page9(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			if (page == 9)
			{
				page = 0;
			}
			else
			{
				page++;
			}
			switch (page)
			{
			case 0: page_null(); helper_frame(); page1(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 1: page_null(); helper_frame(); page10(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 2: page_null(); helper_frame(); page2(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 3: page_null(); helper_frame(); page3(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 4: page_null(); helper_frame(); page4(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 5: page_null(); helper_frame(); page5(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 6: page_null(); helper_frame(); page6(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 7: page_null(); helper_frame(); page7(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 8: page_null(); helper_frame(); page8(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			case 9: page_null(); helper_frame(); page9(); gotoxy_m(46, 45);
				color(15); printf("８ %d/10 Ⅰ", page + 1); break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			return;
		}
	}
}

void helper_frame()
{
	gotoxy_m(25, 2);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(25, 3);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 4);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 5);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 6);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 7);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 8);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 9);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 10);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 11);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 12);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 13);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 14);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 15);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 16);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 17);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 18);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 19);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 20);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 21);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 22);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 23);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 24);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 25);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 26);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 27);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 28);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 29);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 30);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 31);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 32);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 33);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 34);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 35);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 36);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 37);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 38);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 39);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 40);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 41);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 42);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(25, 43);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 44);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 45);
	printf("弛                                                                                          弛");
	gotoxy_m(25, 46);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
}