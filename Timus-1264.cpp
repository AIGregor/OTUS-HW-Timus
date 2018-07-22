// Timus-1264.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	n = m = 0;

	scanf_s("%d %d", &n, &m);
	int iRes = (m + 1) * n;
	printf_s("%d", iRes);

	return 0;
}