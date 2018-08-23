#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	short a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;
	int result1 = a - b - c;
	int result2 = a - b * c;

	cout << min(result1, result2) << endl;
}