#include <iostream>

using namespace std;

int main()
{
	double n_number, k_possible_count;
	n_number = k_possible_count = 0;

	cin >> n_number >> k_possible_count;
	if (n_number > k_possible_count)
	{		
		cout << ceil( (n_number / k_possible_count) * 2)  << endl;
	}
	else
	{
		cout << 2 << endl;;
	}	

    return 0;
}