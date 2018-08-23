#include <iostream>
#include <string>

using namespace std;

#define person_price 100

int main()
{
	string name;
	int people = 2; // Маршалл и Лили

	int count = 0;
	cin >> count;
	
	people += count; // + friends
	
	while (count >= 0)
	{
		getline(cin, name);
		if (name.find("+"s) != string::npos)
		{
			++people; // + one
		}

		--count;
	}	
	
	if (people == 13)
		++people;

	cout << people*person_price << endl;

    return 0;
}