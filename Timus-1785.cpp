// Timus-1785.cpp : Defines the entry point for the console application.
//

#include <set>
#include <iostream>
#include <string>

using namespace std;

static const int siRangeNumber = 9;
static const int siMaxNumber = 2000;

int main()
{
	std::set<int> Ranges[siRangeNumber];
	static int const iSeporatorValues[siRangeNumber] = {5, 10, 20, 50, 100, 250, 500, 1000};
	static string const otherLanguage[siRangeNumber] = {
		"few",
		"several",
		"pack",
		"lots",
		"horde",
		"throng",
		"swarm",
		"zounds",
		"legion"
	};

	int iRangeNum = 0;
	for (int i = 1; i <= siMaxNumber; ++i)
	{
		if (iSeporatorValues[iRangeNum] == i) 
		{
			++iRangeNum;
		}

		Ranges[iRangeNum].insert(i);
	}

	int iMonsterNum = 0;
	cin >> iMonsterNum;

	if (iMonsterNum > 2000 || iMonsterNum < 1)
		return 0;

	for (int i = 0; i <= siRangeNumber; ++i)
	{
		if (Ranges[i].find(iMonsterNum) != Ranges[i].end())
		{
			cout << otherLanguage[i] << endl;
			break;
		}
	}

    return 0;
}

