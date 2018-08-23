#include <iostream>

using namespace std;

int calcHours(const int& m,const int& n)
{
	int m_computers = m;
	int n_cables = n;

	if (m_computers < 1 || n_cables < 1)
		return 0;

	int hours = 0;
	int i = 1;	
	m_computers--;

	while (i < n_cables && m_computers > 0)
	{
		m_computers -= i;
		i = 2 * i;
		hours++;
	}
	if (m_computers > 0 && m_computers % n_cables != 0)
		hours++;
	
	return hours += m_computers / n_cables;
}

int main()
{
	int m_computers, n_cables;
	m_computers = n_cables = 0;
	
	bool res = calcHours(8, 3) == 4;
	cout << "1 -" << res << endl;
	
	res = calcHours(12, 6) == 4;
	cout << "2 -" << res << endl;
	
	res = calcHours(10, 1) == 9;
	cout << "3 -" << res << endl;
	
	res = calcHours(3, 8) == 2;
	cout << "4 -" << res << endl;
	
	res = calcHours(100, 10) == 13;
	cout << "5 -" << res << endl;
	
	res = calcHours(1000000000, 1) == 999999999;
	cout << "6 -" << res << endl;
	
	res = calcHours(1, 15) == 0;
	cout << "7 -" << res << endl;
	
	res = calcHours(1, 1) == 0;
	cout << "8 -" << res << endl;
	
	res = calcHours(3, 3) == 2;
	cout << "9 -" << res << endl;
	
	res = calcHours(5, 7) == 3;
	cout << "10 -" << res << endl;
	
	res = calcHours(4, 2) == 2;
	cout << "11 -" << res << endl;
	
	res = calcHours(7, 2) == 4;
	cout << "12 -" << res << endl;

	cin >> m_computers >> n_cables;
	cout << calcHours(m_computers, n_cables) << endl;

    return 0;
}