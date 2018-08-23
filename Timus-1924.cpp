#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	int summ = 0;

	while (count > 0)
	{
		summ += count;
		--count;
	}

	cout << (summ % 2 == 0 ? "black" : "grimy") << endl;

    return 0;
}