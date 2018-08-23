#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count = 0;
	cin >> count;

	int power = 0;
	int ind = 0;
	int startInd = -1;
	vector<int> in;
	
	for (int i=0; i < count; ++i)
	{
		cin >> power;
		in.push_back(power);
	}

	power = 0;
	while (ind+3 <= count)
	{
		int locMax = in[ind] + in[ind + 1] + in[ind + 2];
		if (power < locMax)
		{
			power = locMax;
			startInd = ind;
		}
		
		++ind;
	}

	cout << power << " " << startInd + 2 << endl;

    return 0;
}