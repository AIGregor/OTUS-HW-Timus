// Times-1409.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main()
{
	int iHarry, iLarry;
	iHarry = iLarry = 0;

	scanf_s("%i %i", &iHarry, &iLarry);
	const int iTotal = iHarry + iLarry - 1;
	printf_s("%i %i", iTotal - iHarry, iTotal - iLarry);

    return 0;
}

