#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	cin >> count;

	set<string> catalog;
	set<string> spam;

	while (count >= 0)
	{
		string word;
		getline(cin, word);
		if (catalog.find(word) != catalog.end())
			spam.insert(word);
		else
			catalog.insert(word);

		--count;
	}

	for (auto it : spam)
		cout << it << endl;
	
	return 0;
}