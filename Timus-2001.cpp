// Timus-2001.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	int a[3] = {0};
	int b[3] = {0};

	cin >> a[0] >> b[0];
	cin >> a[1] >> b[1];
	cin >> a[2] >> b[2];

	cout << a[0] - a[2] << " " << b[0] - b[1];

    return 0;
}

