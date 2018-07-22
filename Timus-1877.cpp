// Timus-1877.cpp : Defines the entry point for the console application.
//

#include <iostream>

int main()
{
	int iFirst, iSecond;
	iFirst = iSecond = 0;

	std::cin >> iFirst;
	std::cin >> iSecond;

	if (iFirst > 9999 || iFirst < 0 ||
		iSecond > 9999 || iSecond < 0)
		return 0;

	if (iFirst % 2 == 0 || iSecond % 2 == 1)
	{
		printf_s("yes");
	}
	else
	{
		printf_s("no");
	}

    return 0;
}