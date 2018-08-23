#include <iostream>

using namespace std;

const char one = '1';
const char zero = '0';

int main()
{	
	long long number = 0;
	cin >> number;

	long long inputIndex = 0;
	double calc = 0;

	for (int i = 0; i < number; ++i)
	{
		cin >> inputIndex;
		
		calc = sqrt(8 * inputIndex - 7);

		if (calc - (long long) calc == 0)
			cout << one;
		else
			cout << zero;

		cout << " ";
	}	

	cout << endl;

    return 0;
}