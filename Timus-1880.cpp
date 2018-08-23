#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n_count = 0;
	short min_set = 0;
	short min_i = 0;
	set<long> set[3];
	
	for (int i = 0; i < 3; ++i)
	{
		cin >> n_count;
		if (n_count < min_set) min_set = n_count; min_i = i;
		while (n_count > 0)
		{
			long number = 0;
			cin >> number;
			set[i].insert(number);
			--n_count;
		}
	}

	int set_a, set_b;
	if (min_i == 0) set_a = 1; set_b = 2;
	if (min_i == 1) set_a = 0; set_b = 2;
	if (min_i == 2) set_a = 0; set_b = 1;

	int self_count = 0;
	for (auto item : set[min_i]) 
	{
		if (set[set_a].find(item) != set[set_a].end()
			&& set[set_b].find(item) != set[set_b].end())
		{
			++self_count;
		}
	}

	std::cout << self_count << endl;

    return 0;
}