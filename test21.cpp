// test21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	printf("Hello World!\n");

	int Count1, Count2, Count3;
	int *pCount1, *pCount2, *pCount3;
	pCount1 = &Count1;
	pCount2 = &Count2;
	pCount3 = &Count3;

	union u_test
	{
		unsigned char a[4];
		int abcd;
		int qq;
		int qqq;
		int qqqq;

	} qq;

	qq.abcd = 0;
	qq.a[1] = 1;
	qq.a[2] = 2;
	qq.a[3] = 3;
	qq.qq = 55;
	qq.qqq = 77;
	qq.qqqq = 88;

	int i;
	int m[16];

	for (i = 0; i < 16; i++)
	{
		m[i] = i;
	}

	int *p = m;
	i = 0;
	while (i < 16)
	{
		*p++ = (15-i);
		i++;
	}


	// 0x0043FDBC + 1 = 0x0043FDBD
	// 0x0043FDBC + 4 = 0x0043FDC0

	struct s_test
	{
		int a, b, c;
	} st[16];

	s_test *pStruct = st;
	i = 0;
	while (i < 16)
	{
		pStruct->a = (15 - i);
		pStruct->b = (31 - i);
		pStruct->c = (47 - i);
		pStruct++;
		i++;
	}

	return 0;
}

