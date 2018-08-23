#include <iostream>

constexpr long long my_plus(int x)
{
	return x > 0 ? x + my_plus(x-1) : 0;
}

int main()
{
	using namespace std;

	int number = 0;
	cin >> number;

	if (abs(number) > 10000)
		return 0;

	long long result = my_plus(abs(number));
	if (number > 0)
	{
		cout << result << endl;
	}
	else
	{
		cout << (-result + 1) << endl;
	}	

    return 0;
}
