#include<stdio.h>
#include<windows.h>

void gotoxy_m(int x, int y);
void title();
void key_chage(int* key);
void cursor();

extern FILE* key_file;
extern enum key;
extern int dkey, fkey, jkey, kkey, key_number;
extern int key_whdfb;

int main()
{
	fopen_s(&key_file, "key_file.txt", "rt");
	if (NULL != key_file)
	{
		while (EOF != fscanf_s(key_file, "%d %d", &key_number, &key_whdfb))
		{
			switch (key_number)
			{
			case 1: dkey = key_whdfb; break;
			case 2: fkey = key_whdfb; break;
			case 3: jkey = key_whdfb; break;
			case 4: kkey = key_whdfb; break;
			}
		}
		fclose(key_file);
	}
	key_chage(&dkey);
	key_chage(&fkey);
	key_chage(&jkey);
	key_chage(&kkey);
	cursor();
	title();
	system("pause>null");
}