#include <iostream>
#include <map>
#include <string>;

using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	
	multimap<char, string> catalog;

	while (count >= 0)
	{
		string word;
		getline(cin, word);
		catalog.insert(pair <char, string>(word[0], word));
		--count;
	}

	char find_symbol;
	cin >> find_symbol;

	for (auto it = catalog.lower_bound(find_symbol); it != catalog.upper_bound(find_symbol); ++it)
	{
		cout << it->second << endl;
	}

	return 0;
}