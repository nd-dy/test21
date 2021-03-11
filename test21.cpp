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

	} qq;

	qq.abcd = 0;
	qq.a[1] = 1;
	qq.a[2] = 2;
	qq.a[3] = 3;

	return 0;
}

