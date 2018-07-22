// Timus-1787.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int k, n;
	k = n = 0;
	cin >> k >> n;
	
	if (n > 100 || k < 1)
		return 0;

	int iTemp, summ;
	summ = iTemp = 0;

	while (cin >> iTemp)
	{
		summ = summ + iTemp - k;

		if (summ < 0)
			summ = 0;
	}

	if (summ >= 0)
		cout << summ;
	
    return 0;
}

