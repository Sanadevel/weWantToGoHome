#include<stdio.h>

void gotoxy_m(int x, int y);
void gotoxyt(float x, int y);
void gotoxy_s(int x, int y);
void color(unsigned short color);

extern int alphabet[26][5][5], rank[9][7][17], number[10][7][5], star[7][7];
extern char* music[10];

void page1()
{
	int i = 0, j = 21;
	gotoxy_s(111, 21);
	color(15);
	printf("酈撢た");
	gotoxy_s(111, 22);
	printf("醴蝶籤");
	gotoxy_s(111, 23);
	printf("紫遺蜓");
	gotoxy_s(108, 21);
	printf(">");
	gotoxy_s(119, 21);
	printf("<");
	gotoxyt(35, 20);
	printf("啪歜 衛濛");
	gotoxyt(34.5, 21);
	printf("Ы溯檜 晦煙");
	gotoxyt(36, 22);
	printf("撲 薑");
	gotoxyt(33.5, 20);
	printf(">");
	gotoxyt(40.5, 20);
	printf("<");
	gotoxy_m(35, 43);
	printf("賅萇 摹鷗璽縑憮朝 寞щ酈諦 縛攪酈煎 檜翕 й 熱 氈蝗棲棻.");
}

void page10()
{
	gotoxy_m(26, 3);
	color(8);
	printf("忙式式式式忖忙忖 忙忖忙式式式式忖忙式式式忖忙式式式忖忙式式式式忖  忙忖  忙忖");
	gotoxy_m(26, 4);
	printf("戌式忖忙式戎弛弛 弛弛戌式忖忙式戎弛忙式忖弛弛忙式忖弛戌式忖忙式戎  弛弛  弛弛");
	gotoxy_m(26, 5);
	printf("  弛弛  弛弛 弛弛  弛弛  弛弛 弛弛弛戌式戎弛  弛弛   弛忙忖弛 弛弛");
	gotoxy_m(26, 6);
	printf("  弛弛  弛弛 弛弛  弛弛  弛弛 弛弛弛忙 ●  弛弛   弛戌戎弛 弛弛");
	gotoxy_m(26, 7);
	printf("  弛弛  弛戌式戎弛  弛弛  弛戌式戎弛弛弛 弛弛忙式戎戌式忖弛忙式式忖弛弛戌式式忖");
	gotoxy_m(26, 8);
	printf("  戌戎  戌式式式戎  戌戎  戌式式式戎戌戎 戌戎戌式式式式戎戌戎  戌戎戌式式式戎");
	gotoxy_m(35, 10);
	printf("忙式忖   忙忖    式式式式   忙式忖   ");
	gotoxy_m(35, 11);
	printf("弛 弛   弛戌  弛  式   弛 弛 弛  忙式式式式式式式式式忖");
	gotoxy_m(35, 12);
	printf("弛 戌式式忖弛忙  弛 弛  弛 弛 弛 弛  弛 忙式式式式式式式戎");
	gotoxy_m(35, 13);
	printf("戌式式式式戎戌戎  弛 弛  弛 弛 弛 弛  弛 戌式式式式式式式忖");
	gotoxy_m(35, 14);
	printf("  忙式忖     弛   式  弛 弛 弛  戌式式式式式式式式式戎");
	gotoxy_m(35, 15);
	printf("  弛 戌式式忖    式式式式   弛 弛  忙式式式戎  戌式式式忖");
	gotoxy_m(35, 16);
	printf("  戌式式式式戎           戌式戎  戌式式式式式式式式式式戎");
	gotoxy_m(35, 27);
	printf("忙式式式式式式忖  忙式式式式式式忖  忙式忖忙式忖");
	gotoxy_m(35, 28);
	printf("弛 忙式式忖 弛  弛 忙式式忖 弛  弛 弛弛 弛");
	gotoxy_m(35, 29);
	printf("弛 戌式式戎 弛  弛 戌式式戎 弛  弛 戌戎 弛");
	gotoxy_m(35, 30);
	printf("弛     ●  弛 忙式式式式戎  弛忙忖忙忖弛");
	gotoxy_m(35, 31);
	printf("弛 忙式式忖 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(35, 32);
	printf("弛 戌式式戎 弛  弛 弛       弛弛弛弛弛弛");
	gotoxy_m(35, 33);
	printf("戌式式式式式式戎  戌式戎       戌戎戌戎戌戎");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(55 + j, 10 + i);
				printf("﹥");
			}
		}
	}
	int a = 52, b = 28;
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
	a = 54, b = 28;
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
	a = 56, b = 28;
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
	gotoxy_m(34, 43);
	color(15);
	printf("喻楚 摹鷗�飛橦□韭� 寞щ酈諦 縛攪酈煎 褻濛 й 熱 氈戲貊,");
	gotoxy_m(33, 44);
	printf("喻楚曖 bpm婁 陪檜紫蒂 憲 熱 氈棻.(ル晦脹 bpm婁 棻蒂 熱 氈擠)");
}

void page2()
{
	for (int i = 0; i < 94; i++)
	{
		for (int j = 3; j < 42; j++)
		{
			color(15);
			if (i == 35 || i == 56)
			{
				gotoxy_m(i, j);
				printf("|");
			}
			if (i > 35 && i < 56 && j == 38)
			{
				gotoxy_m(i, j);
				color(4);
				printf("式");
			}
		}
	}
	gotoxy_m(36, 20);
	printf("﹥﹥﹥﹥﹥");
	gotoxy_m(46, 30);
	printf("﹥﹥﹥﹥﹥");
	gotoxy_m(45, 5);
	printf("0");
	gotoxy_m(57, 5);
	printf("0000000");
	gotoxy_m(27, 43);
	printf("雲橫雖朝 喻お蒂 說除摹縑 蜃醮 薑п霞 酈蒂 援腦賊 っ薑檜 釭螃堅 薄熱諦 巍爾陛 螃葷棲棻.");
}

void page3()
{
	for (int i = 0; i < 94; i++)
	{
		for (int j = 3; j < 42; j++)
		{
			color(15);
			if (i == 35 || i == 56)
			{
				gotoxy_m(i, j);
				printf("|");
			}
			if (i > 35 && i < 56 && j == 38)
			{
				gotoxy_m(i, j);
				color(4);
				printf("式");
			}
		}
	}
	gotoxy_m(36, 30);
	printf("﹥﹥﹥﹥﹥");
	gotoxy_m(45, 5);
	printf("1");
	gotoxy_m(57, 5);
	printf("0001365");
	gotoxy_m(44, 35); color(2); printf("perfect");
}

void page4()
{
	gotoxy_m(29, 5);
	color(15);
	printf("忙式式式忖  忙式式式忖  忙式式式忖  忙式式式忖  忙式式式忖");
	gotoxy_m(29, 6);
	printf("弛忙式式戎  弛忙式式戎  弛忙式忖弛  弛忙式忖弛  弛忙式式戎");
	gotoxy_m(29, 7);
	printf("弛戌式式忖  弛弛     弛弛 弛弛  弛戌式戎弛  弛戌式式忖");
	gotoxy_m(29, 8);
	printf("戌式式忖弛  弛弛     弛弛 弛弛  弛忙 ●  弛忙式式戎");
	gotoxy_m(29, 9);
	printf("忙式式戎弛  弛戌式式忖  弛戌式戎弛  弛弛 |弛  弛戌式式忖");
	gotoxy_m(29, 10);
	printf("戌式式式戎  戌式式式戎  戌式式式戎  戌戎 戌戎  戌式式式戎");

	gotoxy_m(29, 15);
	printf("忙式式式忖  忙式式式忖  忙忖  忙忖  忙式式式忖  忙式式式忖");
	gotoxy_m(29, 16);
	printf("弛忙式式戎  弛忙式忖弛  弛弛  弛弛  弛忙式忖弛  弛忙式忖弛");
	gotoxy_m(29, 17);
	printf("弛弛     弛弛 弛弛  弛戌式式戎弛  弛戌式戎弛  弛弛 弛弛");
	gotoxy_m(29, 18);
	printf("弛弛     弛弛 弛弛  弛忙忖忙忖弛  弛  ●  弛弛 弛弛");
	gotoxy_m(29, 19);
	printf("弛弛     弛弛 弛弛  弛弛弛弛弛弛  弛忙式忖弛  弛弛 弛弛");
	gotoxy_m(29, 20);
	printf("弛戌式式忖  弛戌式戎弛  弛弛戌戎弛弛  弛戌式戎弛  弛戌式戎弛");
	gotoxy_m(29, 21);
	printf("戌式式式戎  戌式式式戎  戌戎  戌戎  戌式式式戎  戌式式式戎");

	gotoxy_m(29, 25);
	printf("忙式式式忖  忙式式式忖    忙忖    忙式式忖   忙式式式忖");
	gotoxy_m(29, 26);
	printf("弛忙式式戎  弛忙式忖弛    弛弛    弛忙忖 忖  弛忙式式戎");
	gotoxy_m(29, 27);
	printf("弛弛忙式忖  弛戌式戎弛   弛忙忖弛   弛弛 忖弛  弛戌式式忖");
	gotoxy_m(29, 28);
	printf("弛弛戌忖弛  弛忙 ●   弛戌戎弛   弛弛 戎弛  弛忙式式戎");
	gotoxy_m(29, 29);
	printf("弛戌式戎弛  弛弛 弛弛  弛 忙忖 弛  弛戌戎 戎  弛戌式式忖");
	gotoxy_m(29, 30);
	printf("戌式式式戎  戌戎 戌戎  戌式戎戌式戎  戌式式戎   戌式式式戎");
	gotoxy_m(54, 5);
	printf("忙式式式式忖 ");
	gotoxy_m(54, 6);
	printf("弛    弛 ");
	gotoxy_m(54, 7);
	printf("弛    弛 ");
	gotoxy_m(54, 8);
	printf("弛    弛 ");
	gotoxy_m(54, 9);
	printf("弛    弛 ");
	gotoxy_m(54, 10);
	printf("戌式式式式戎 ");
	gotoxy_m(54, 15);
	printf("忙式式式式忖 ");
	gotoxy_m(54, 16);
	printf("弛    弛 ");
	gotoxy_m(54, 17);
	printf("弛    弛 ");
	gotoxy_m(54, 18);
	printf("弛    弛 ");
	gotoxy_m(54, 19);
	printf("弛    弛 ");
	gotoxy_m(54, 20);
	printf("戌式式式式戎 ");
	gotoxy_m(54, 25);
	printf("忙式式式忖");
	gotoxy_m(54, 26);
	printf("弛忙式式戎");
	gotoxy_m(54, 27);
	printf("弛戌式式忖");
	gotoxy_m(54, 28);
	printf("弛忙式式戎");
	gotoxy_m(54, 29);
	printf("弛弛");
	gotoxy_m(54, 30);
	printf("戌戎");
	gotoxy_m(35, 43);
	printf("唸婁 璽縑憮 譆謙 薄熱, 巍爾, 蛔晝擊 憲 熱 氈蝗棲棻.");
}

void page5()
{
	gotoxy_m(33, 20);
	printf("忙式式式式式式式式式式式式式式成式式式式式式式式式式式式式式成式式式式式式式式式式式式式式成式式式式式式式式式式式式式式忖");
	gotoxy_m(33, 21);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 22);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 23);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 24);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 25);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 26);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 27);
	printf("弛              弛              弛              弛              弛");
	gotoxy_m(33, 28);
	printf("戌式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式戎");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(35 + i, 22 + j);
			if (alphabet[3][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(42 + i, 22 + j);
			if (alphabet[5][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(50 + i, 22 + j);
			if (alphabet[9][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(57 + i, 22 + j);
			if (alphabet[10][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	gotoxy_m(29, 43);
	printf("撲薑 璽縑憮 酈撲薑 龔戲煎 陛賊 寞щ酈諦 縛攪酈煎 撲薑脹 酈蒂 夥羚 熱 氈蝗棲棻.");
}

void page6()
{
	int i = 0, k = 20;
	gotoxy_m(41, 15);
	printf("喻楚蒂 摹鷗ж撮蹂");
	gotoxy_m(31, k);
	printf("Ⅰ");
	for (int j = 20; j <= 28; j += 2)
	{
		gotoxy_m(33, j);
		color(15);
		printf("%s", music[i]);
		i++;
	}
	gotoxy_m(39, 43);
	printf("醴蝶籤 龔縑憮朝 試盪 喻楚蒂 摹鷗м棲棻.");
}

void page7()
{
	gotoxy_m(33, 4);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(33, 5);
	printf("弛     1      弛     2      弛     3      弛     4      弛     5      弛");
	gotoxy_m(33, 6);
	printf("弛            弛            弛            弛            弛            弛");
	gotoxy_m(33, 7);
	printf("弛            弛            弛            弛            弛            弛");
	gotoxy_m(33, 8);
	printf("弛  ﹥        弛    ﹥      弛      ﹥    弛        ﹥  弛  ﹥﹥      弛");
	gotoxy_m(33, 9);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 10);
	printf("弛     11     弛     12     弛     13     弛     14     弛     15     弛");
	gotoxy_m(33, 11);
	printf("弛            弛            弛            弛            弛            弛");
	gotoxy_m(33, 12);
	printf("弛            弛            弛            弛            弛            弛");
	gotoxy_m(33, 13);
	printf("弛    ﹥﹥﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥  ﹥  弛  ﹥﹥﹥    弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(33, 14);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 15);
	printf("弛     21     弛     22     弛     23     弛     24     弛     25     弛");
	gotoxy_m(33, 16);
	printf("弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛");
	gotoxy_m(33, 17);
	printf("弛  ﹥        弛  ﹥        弛    ﹥      弛    ﹥      弛    ﹥      弛");
	gotoxy_m(33, 18);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥﹥      弛    ﹥﹥    弛    ﹥  ﹥  弛");
	gotoxy_m(33, 19);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 20);
	printf("弛     31     弛     32     弛     33     弛     34     弛     35     弛");
	gotoxy_m(33, 21);
	printf("弛        ﹥  弛  ﹥        弛  ﹥        弛  ﹥        弛    ﹥      弛");
	gotoxy_m(33, 22);
	printf("弛        ﹥  弛  ﹥        弛  ﹥        弛  ﹥        弛    ﹥      弛");
	gotoxy_m(33, 23);
	printf("弛      ﹥﹥  弛  ﹥﹥﹥    弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥﹥    弛");
	gotoxy_m(33, 24);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 25);
	printf("弛     41     弛     42     弛     43     弛     44     弛     45     弛");
	gotoxy_m(33, 26);
	printf("弛        ﹥  弛        ﹥  弛        ﹥  弛  ﹥        弛    ﹥      弛");
	gotoxy_m(33, 27);
	printf("弛        ﹥  弛        ﹥  弛        ﹥  弛  ﹥        弛    ﹥      弛");
	gotoxy_m(33, 28);
	printf("弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛    ﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(33, 29);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 30);
	printf("弛     51     弛     52     弛     53     弛     54     弛     55     弛");
	gotoxy_m(33, 31);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥﹥    弛");
	gotoxy_m(33, 32);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥﹥    弛");
	gotoxy_m(33, 33);
	printf("弛  ﹥  ﹥﹥  弛  ﹥﹥  ﹥  弛  ﹥  ﹥﹥  弛  ﹥﹥﹥    弛    ﹥﹥﹥  弛");
	gotoxy_m(33, 34);
	printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣");
	gotoxy_m(33, 35);
	printf("弛     61     弛     62     弛     63     弛     64     弛     65     弛");
	gotoxy_m(33, 36);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛");
	gotoxy_m(33, 37);
	printf("弛  ﹥  ﹥    弛  ﹥    ﹥  弛    ﹥﹥    弛    ﹥  ﹥  弛      ﹥﹥  弛");
	gotoxy_m(33, 38);
	printf("弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛  ﹥﹥﹥﹥  弛");
	gotoxy_m(33, 39);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	gotoxy_m(38, 43);
	printf("ル縑 蜃朝 璋濠蒂 殮溘ж賊 喻お陛 盪濰腌棲棻.");
}

void page8()
{
	gotoxy_m(41, 23);
	printf("﹦");
	gotoxy_m(40, 24);
	printf("樓  紫");
	gotoxy_m(40, 25);
	printf("0.001");
	gotoxy_m(41, 26);
	printf("∩");
	gotoxy_m(46, 23);
	printf("﹦");
	gotoxy_m(44, 24);
	printf("樓紫  欽嬪");
	gotoxy_m(45, 25);
	printf("0.001");
	gotoxy_m(46, 26);
	printf("∩");
	gotoxy_m(51, 23);
	printf("﹦");
	gotoxy_m(50, 24);
	printf("喻  お");
	gotoxy_m(50, 25);
	printf("1");
	gotoxy_m(51, 26);
	printf("∩");
	gotoxy_m(56, 23);
	printf("﹦");
	gotoxy_m(54, 24);
	printf("喻お  欽嬪");
	gotoxy_m(55, 25);
	printf("1");
	gotoxy_m(56, 26);
	printf("∩");
	gotoxy_m(32, 43);
	printf("寞щ酈諦 縛攪酈蒂 鱔п 喻お曖 樓紫諦 喻お曖 殮溘擊 薑й 熱 氈蝗棲棻.");
}

void page9()
{
	gotoxy_m(40, 3);
	printf("0擎 奢寥/100擎 謙猿");
	gotoxy_m(37, 4);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy_m(37, 5);
	printf("弛                               弛");
	gotoxy_m(37, 6);
	printf("弛                               弛");
	gotoxy_m(37, 7);
	printf("弛                               弛");
	gotoxy_m(37, 8);
	printf("弛                               弛");
	gotoxy_m(37, 9);
	printf("弛                               弛");
	gotoxy_m(37, 10);
	printf("弛                               弛");
	gotoxy_m(37, 11);
	printf("弛                               弛");
	gotoxy_m(37, 12);
	printf("弛                               弛");
	gotoxy_m(37, 13);
	printf("弛                               弛");
	gotoxy_m(37, 14);
	printf("弛                               弛");
	gotoxy_m(37, 15);
	printf("弛                               弛");
	gotoxy_m(37, 16);
	printf("弛                               弛");
	gotoxy_m(37, 17);
	printf("弛                               弛");
	gotoxy_m(37, 18);
	printf("弛                               弛");
	gotoxy_m(37, 19);
	printf("弛                               弛");
	gotoxy_m(37, 20);
	printf("弛                               弛");
	gotoxy_m(37, 21);
	printf("弛                               弛");
	gotoxy_m(37, 22);
	printf("弛                               弛");
	gotoxy_m(37, 23);
	printf("弛                               弛");
	gotoxy_m(37, 24);
	printf("弛                               弛");
	gotoxy_m(37, 25);
	printf("弛                               弛");
	gotoxy_m(37, 26);
	printf("弛                               弛");
	gotoxy_m(37, 27);
	printf("弛                               弛");
	gotoxy_m(37, 28);
	printf("弛                               弛");
	gotoxy_m(37, 29);
	printf("弛                               弛");
	gotoxy_m(37, 30);
	printf("弛                               弛");
	gotoxy_m(37, 31);
	printf("弛                               弛");
	gotoxy_m(37, 32);
	printf("弛                               弛");
	gotoxy_m(37, 33);
	printf("弛                               弛");
	gotoxy_m(37, 34);
	printf("弛                               弛");
	gotoxy_m(37, 35);
	printf("弛                               弛");
	gotoxy_m(37, 36);
	printf("弛                               弛");
	gotoxy_m(37, 37);
	printf("弛                               弛");
	gotoxy_m(37, 38);
	printf("弛                               弛");
	gotoxy_m(37, 39);
	printf("弛                               弛");
	gotoxy_m(37, 40);
	printf("弛                               弛");
	gotoxy_m(37, 41);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	gotoxy_m(43, 40);
	printf("８ 1/1 Ⅰ");
	gotoxy_m(36, 43);
	printf("殮溘脹 喻お蒂 罹晦憮 �挫� й 熱 氈蝗棲棻.");
}

void page_null()
{
	gotoxy_m(26, 3);
	printf("                                                                                          ");
	gotoxy_m(26, 4);
	printf("                                                                                          ");
	gotoxy_m(26, 5);
	printf("                                                                                          ");
	gotoxy_m(26, 6);
	printf("                                                                                          ");
	gotoxy_m(26, 7);
	printf("                                                                                          ");
	gotoxy_m(26, 8);
	printf("                                                                                          ");
	gotoxy_m(26, 9);
	printf("                                                                                          ");
	gotoxy_m(26, 10);
	printf("                                                                                          ");
	gotoxy_m(26, 11);
	printf("                                                                                          ");
	gotoxy_m(26, 12);
	printf("                                                                                          ");
	gotoxy_m(26, 13);
	printf("                                                                                          ");
	gotoxy_m(26, 14);
	printf("                                                                                          ");
	gotoxy_m(26, 15);
	printf("                                                                                          ");
	gotoxy_m(26, 16);
	printf("                                                                                          ");
	gotoxy_m(26, 17);
	printf("                                                                                          ");
	gotoxy_m(26, 18);
	printf("                                                                                          ");
	gotoxy_m(26, 19);
	printf("                                                                                          ");
	gotoxy_m(26, 20);
	printf("                                                                                          ");
	gotoxy_m(26, 21);
	printf("                                                                                          ");
	gotoxy_m(26, 22);
	printf("                                                                                          ");
	gotoxy_m(26, 23);
	printf("                                                                                          ");
	gotoxy_m(26, 24);
	printf("                                                                                          ");
	gotoxy_m(26, 25);
	printf("                                                                                          ");
	gotoxy_m(26, 26);
	printf("                                                                                          ");
	gotoxy_m(26, 27);
	printf("                                                                                          ");
	gotoxy_m(26, 28);
	printf("                                                                                          ");
	gotoxy_m(26, 29);
	printf("                                                                                          ");
	gotoxy_m(26, 30);
	printf("                                                                                          ");
	gotoxy_m(26, 31);
	printf("                                                                                          ");
	gotoxy_m(26, 32);
	printf("                                                                                          ");
	gotoxy_m(26, 33);
	printf("                                                                                          ");
	gotoxy_m(26, 34);
	printf("                                                                                          ");
	gotoxy_m(26, 35);
	printf("                                                                                          ");
	gotoxy_m(26, 36);
	printf("                                                                                          ");
	gotoxy_m(26, 37);
	printf("                                                                                          ");
	gotoxy_m(26, 38);
	printf("                                                                                          ");
	gotoxy_m(26, 39);
	printf("                                                                                          ");
	gotoxy_m(26, 40);
	printf("                                                                                          ");
	gotoxy_m(26, 41);
	printf("                                                                                          ");
}