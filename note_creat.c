#include<stdio.h>

void color(unsigned short color);
void gotoxy_n(int x, double y);

extern int tutorialm[100][100];
extern int* note_wnth[10];

extern int in, long_note_long;
extern double present_combo;

void note_creat(int z)
{
	switch (note_wnth[z][in])
	{
	case 1: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 2: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 3: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 4: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;               //¥‹¿œ ≈∏¿œ 
	case 5: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 6: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 7: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 8: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 9: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 10: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //¥ı∫Ì ≈∏¿œ
	case 11: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 12: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 13: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 14: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;           //∆Æ∏Æ«√ ≈∏¿œ
	case 15: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //ƒıµÂ∂Û«√ ≈∏¿œ
	case 16: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 17: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 18: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 19: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //∑’ ≈∏¿œ
	case 20: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 21: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 22: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;            //1∑’ + ¥‹¿œ
	case 23: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 24: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 25: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //2∑’ + ¥‹¿œ
	case 26: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 27: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 28: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //3∑’ + ¥‹¿œ
	case 29: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 30: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 31: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;           //4∑’ + ¥‹¿œ
	case 32: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 33: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 34: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //1∑’ + ¥ı∫Ì
	case 35: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 36: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 37: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //2∑’ + ¥ı∫Ì
	case 38: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 39: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 40: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //3∑’ + ¥ı∫Ì
	case 41: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 42: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 43: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;           //4∑’ + ¥ı∫Ì
	case 44: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 45: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 46: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 47: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //∑’ + ∆Æ∏Æ«√
	case 48: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 49: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 50: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 51: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 52: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 53: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;           //1∑’ + x∑’ + ¥‹¿œ
	case 54: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 55: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 56: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 57: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;           //2∑’ + x∑’ + ¥‹¿œ
	case 58: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(36, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 59: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;           //3∑’ + 4∑’ + ¥‹¿œ
	case 60: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 61: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 62: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //1∑’ + x∑’ + ¥ı∫Ì
	case 63: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 64: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //2∑’ + x∑’ + ¥ı∫Ì
	case 65: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //3∑’ + 4∑’ + ¥ı∫Ì
	case 66: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 67: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 68: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 69: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //∆Æ∏Æ«√∑’ + ¥‹¿œ
	case 70: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //ƒıµÂ∂Û«√∑’
	case 71: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 72: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 73: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 74: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 75: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 76: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //¥ı∫Ì∑’
	case 77: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 78: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 79: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 80: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;           //∆Æ∏Æ«√∑’
	}

	switch (note_wnth[z][in])
	{
	case 1:
	case 2:
	case 3:
	case 4: present_combo += 1; break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10: present_combo += 2; break;
	case 11:
	case 12:
	case 13:
	case 14: present_combo += 3; break;
	case 15: present_combo += 4; break;
	case 16:
	case 17:
	case 18:
	case 19: present_combo += long_note_long; break;
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31: present_combo += long_note_long + 1; break;
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43: present_combo += long_note_long + 2; break;
	case 44:
	case 45:
	case 46:
	case 47: present_combo += long_note_long + 3; break;
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59: present_combo += long_note_long * 2 + 1; break;
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65: present_combo += long_note_long * 2 + 2; break;
	case 66:
	case 67:
	case 68:
	case 69: present_combo += long_note_long * 3 + 1; break;
	case 70: present_combo += long_note_long * 4; break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76: present_combo += long_note_long * 2; break;
	case 77:
	case 78:
	case 79:
	case 80: present_combo += long_note_long * 3; break;
	}
}

//1 ~ 4     1∞≥
//5 ~10     2∞≥
//11 ~14     3∞≥
//15     4∞≥
//16 ~19     long_note_long∞≥
//20 ~31     long_note_long + 1∞≥
//32 ~43     long_note_long + 2∞≥
//44 ~47     long_note_long + 3∞≥
//48 ~59     long_note_long * 2 + 1∞≥
//60 ~65     long_note_long * 2 + 2∞≥
//66 ~69     long_note_long * 3 + 1∞≥
//70     long_note_long * 4∞≥
//71 ~76     long_note_long * 2∞≥
//77 ~80     long_note_long * 3∞≥

void long_note(int z)
{
	switch (note_wnth[z][in])
	{
	case 16:
	case 20:
	case 21:
	case 22:
	case 32:
	case 33:
	case 34:
	case 44: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		break;
	case 17:
	case 23:
	case 24:
	case 25:
	case 35:
	case 36:
	case 37:
	case 45: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 18:
	case 26:
	case 27:
	case 28:
	case 38:
	case 39:
	case 40:
	case 46: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 19:
	case 29:
	case 30:
	case 31:
	case 41:
	case 42:
	case 43:
	case 47: gotoxy_n(51, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 48:
	case 49:
	case 60:
	case 71: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		break;
	case 50:
	case 51:
	case 61:
	case 72: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 52:
	case 53:
	case 62:
	case 73: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 54:
	case 55:
	case 63:
	case 74: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 56:
	case 57:
	case 64:
	case 75: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 58:
	case 59:
	case 65:
	case 76: gotoxy_n(46, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 66:
	case 77: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		break;
	case 67:
	case 78: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 68:
	case 79: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 69:
	case 80: gotoxy_n(41, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	case 70: gotoxy_n(36, 0);
		color(15);
		printf("°·°·°·°·°·");
		tutorialm[0][36] = 1;
		gotoxy_n(41, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][41] = 1;
		gotoxy_n(46, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][46] = 1;
		gotoxy_n(51, 0);
		printf("°·°·°·°·°·");
		tutorialm[0][51] = 1;
		break;
	}
}