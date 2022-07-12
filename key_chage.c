#include<stdio.h>

extern FILE* key_file;
enum key { Akey = 0x41, Bkey = 0x42, Ckey = 0x43, Dkey = 0x44, Ekey = 0x45, Fkey = 0x46, Gkey = 0x47, Hkey = 0x48, Ikey = 0x49, Jkey = 0x4A, Kkey = 0x4B, Lkey = 0x4C, Mkey = 0x4D, Nkey = 0x4E, Okey = 0x4F, Pkey = 0x50, Qkey = 0x51, Rkey = 0x52, Skey = 0x53, Tkey = 0x54, Ukey = 0x55, Vkey = 0x56, Wkey = 0x57, Xkey = 0x58, Ykey = 0x59, Zkey = 0x5A };

void key_chage(int* key)
{
	switch (*key)
	{
	case 1: *key = Akey; break;
	case 2: *key = Bkey; break;
	case 3: *key = Ckey; break;
	case 4: *key = Dkey; break;
	case 5: *key = Ekey; break;
	case 6: *key = Fkey; break;
	case 7: *key = Gkey; break;
	case 8: *key = Hkey; break;
	case 9: *key = Ikey; break;
	case 10: *key = Jkey; break;
	case 11: *key = Kkey; break;
	case 12: *key = Lkey; break;
	case 13: *key = Mkey; break;
	case 14: *key = Nkey; break;
	case 15: *key = Okey; break;
	case 16: *key = Pkey; break;
	case 17: *key = Qkey; break;
	case 18: *key = Rkey; break;
	case 19: *key = Skey; break;
	case 20: *key = Tkey; break;
	case 21: *key = Ukey; break;
	case 22: *key = Vkey; break;
	case 23: *key = Wkey; break;
	case 24: *key = Xkey; break;
	case 25: *key = Ykey; break;
	case 26: *key = Zkey; break;
	}
}