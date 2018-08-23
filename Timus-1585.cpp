#include <iostream>
#include <string>

static const std::string sEmp = "Emperor Penguin";
static const std::string sMac = "Macaroni Penguin";
static const std::string sLit = "Little Penguin";

std::pair<int, std::string> max;

void setMax(int count, std::string type)
{
	if (count > max.first)
	{
		max.first = count;
		max.second = type;
	}
}

int main()
{
	using namespace std;

	int count = 0;
	cin >> count;

	int numEmp = 0;
	int numMac = 0;
	int numLit = 0;

	string sIN;		
	max.first = 0;

	for (int i= 0; i <= count; ++i)
	{
		getline(cin,sIN);

		if (sIN.compare(sEmp) == 0)
		{
			++numEmp;
			setMax(numEmp, sEmp);
		}
		else if (sIN.compare(sMac) == 0)
		{
			++numMac;
			setMax(numMac, sMac);
		}
		else if (sIN.compare(sLit) == 0)
		{
			++numLit;
			setMax(numLit, sLit);
		}		
	}

	cout << max.second << endl;

    return 0;
}