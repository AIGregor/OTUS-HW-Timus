#include <iostream>
#include <set>
#include <sstream>
#include <string>

using namespace std;

enum states {
	one,
	two,
	tree
};

int main()
{
	set<string> box_one = {
		"Alice", "Ariel" , "Aurora", 
		"Phil", "Peter", "Olaf", 
		"Phoebus", "Ralph", "Robin"};

	set<string> box_two = {
		"Bambi", "Mulan" , "Silver",
		"Belle", "Mowgli", "Simba",
		"Bolt", "Mickey", "Stitch" };

	set<string> box_tree = {
		"Dumbo", "Genie" , "Jiminy",
		"Kuzko", "Kida", "Kenai",
		"Tarzan", "Tiana", "Winnie" };

	int count = 0;
	cin >> count;

	auto curState = states::one;
	int steps = 0;

	for (int i = 0; i <= count; ++i)
	{
		string temp_nam;
		getline(cin, temp_nam);

		if (box_one.find(temp_nam) != box_one.end()) 
		{
			steps += abs(curState - states::one);
			curState = states::one;
		}
		else if (box_two.find(temp_nam) != box_two.end())
		{
			steps += abs(curState - states::two);
			curState = states::two;
		}
		else if (box_tree.find(temp_nam) != box_tree.end())
		{
			steps += abs(curState - states::tree);
			curState = states::tree;
		}		
	}

	cout << steps << endl;

    return 0;
}