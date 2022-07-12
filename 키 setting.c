#include<stdio.h>
#include<windows.h>

void key_setting();
void key_chage2(int* key);
void key_chage(int* key);
void gotoxy_m(int x, int y);

extern FILE* key_file;
extern int dkey, fkey, jkey, kkey, chage_key, tkarkrgud_key, dkey_cp, fkey_cp, jkey_cp, kkey_cp;
extern int alphabet[26][5][5], tkarkrgud[2][4][7];

void key_setting()
{
	tkarkrgud_key = 0;
	chage_key = 0;
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

	key_chage2(&dkey);
	key_chage2(&fkey);
	key_chage2(&jkey);
	key_chage2(&kkey);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(35 + i, 22 + j);
			if (alphabet[dkey - 1][j][i] == 1)
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
			if (alphabet[fkey - 1][j][i] == 1)
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
			if (alphabet[jkey - 1][j][i] == 1)
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
			if (alphabet[kkey - 1][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			gotoxy_m(34 + i, 15 + j);
			if (tkarkrgud[0][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			gotoxy_m(34 + i, 30 + j);
			if (tkarkrgud[1][j][i] == 1)
			{
				printf("﹥");
			}
		}
	}
	dkey_cp = dkey;
	fkey_cp = fkey;
	jkey_cp = jkey;
	kkey_cp = kkey;

	while (1)
	{
	A:
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			if (tkarkrgud_key == 3)
			{
				goto A;
			}
			else
			{
				switch (tkarkrgud_key)
				{
				case 0:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(34 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(34 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					tkarkrgud_key++;
					chage_key++;
					break;
				case 1:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					tkarkrgud_key++;
					chage_key++;
					break;
				case 2:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(56 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(56 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					tkarkrgud_key++;
					chage_key++;
					break;
				}
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			if (tkarkrgud_key == 0)
			{
				goto A;
			}
			else
			{
				switch (tkarkrgud_key)
				{
				case 1:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(34 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(34 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					tkarkrgud_key--;
					chage_key--;
					break;
				case 2:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(42 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					tkarkrgud_key--;
					chage_key--;
					break;
				case 3:
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(49 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("﹥");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(56 + i, 15 + j);
							if (tkarkrgud[0][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					for (int i = 0; i < 7; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							gotoxy_m(56 + i, 30 + j);
							if (tkarkrgud[1][j][i] == 1)
							{
								printf("  ");
							}
						}
					}
					tkarkrgud_key--;
					chage_key--;
					break;
				}
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			switch (chage_key)
			{
			case 0:
				if (dkey_cp == 1)
				{
					dkey_cp = 26;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(35 + i, 22 + j);
							if (alphabet[dkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					dkey_cp--;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(35 + i, 22 + j);
							if (alphabet[dkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 1:
				if (fkey_cp == 1)
				{
					fkey_cp = 26;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(42 + i, 22 + j);
							if (alphabet[fkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					fkey_cp--;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(42 + i, 22 + j);
							if (alphabet[fkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 2:
				if (jkey == 1)
				{
					jkey_cp = 26;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(50 + i, 22 + j);
							if (alphabet[jkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					jkey_cp--;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(50 + i, 22 + j);
							if (alphabet[jkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 3:
				if (kkey_cp == 1)
				{
					kkey_cp = 26;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(57 + i, 22 + j);
							if (alphabet[kkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					kkey_cp--;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(57 + i, 22 + j);
							if (alphabet[kkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			switch (chage_key)
			{
			case 0:
				if (dkey_cp == 26)
				{
					dkey_cp = 1;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(35 + i, 22 + j);
							if (alphabet[dkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					dkey_cp++;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(35 + i, 22 + j);
							if (alphabet[dkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 1:
				if (fkey_cp == 26)
				{
					fkey_cp = 1;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(42 + i, 22 + j);
							if (alphabet[fkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					fkey_cp++;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(42 + i, 22 + j);
							if (alphabet[fkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 2:
				if (jkey == 26)
				{
					jkey_cp = 1;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(50 + i, 22 + j);
							if (alphabet[jkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					jkey_cp++;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(50 + i, 22 + j);
							if (alphabet[jkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			case 3:
				if (kkey_cp == 26)
				{
					kkey_cp = 1;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(57 + i, 22 + j);
							if (alphabet[kkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				else
				{
					kkey_cp++;
					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < 5; j++)
						{
							gotoxy_m(57 + i, 22 + j);
							if (alphabet[kkey_cp - 1][j][i] == 1)
							{
								printf("﹥");
							}
							else
							{
								printf("  ");
							}
						}
					}
				}
				break;
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			switch (chage_key)
			{
			case 0: dkey = dkey_cp;
			case 1: fkey = fkey_cp;
			case 2: jkey = jkey_cp;
			case 3: kkey = kkey_cp;
			}
			fopen_s(&key_file, "key_file.txt", "wt");
			if (NULL != key_file)
			{
				fprintf(key_file, "%d %d\n", 1, dkey);
				fprintf(key_file, "%d %d\n", 2, fkey);
				fprintf(key_file, "%d %d\n", 3, jkey);
				fprintf(key_file, "%d %d\n", 4, kkey);

				fclose(key_file);
			}
			Sleep(200);
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			system("cls");
			Sleep(200);
			key_chage(&dkey);
			key_chage(&fkey);
			key_chage(&jkey);
			key_chage(&kkey);
			return;
		}
	}
}