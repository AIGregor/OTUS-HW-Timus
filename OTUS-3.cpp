// OTUS-3.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

std::string roundSqrt(unsigned long long llValue, double dRoundToNumber = 4)
{
	long double ldResult = 0.0;

	if (llValue < 0 ||
		dRoundToNumber == 0 ||
		llValue > pow(10, 18))
		return "";

	ldResult = sqrt(llValue);
	ldResult = roundl(ldResult * pow(10, dRoundToNumber)) / pow(10, dRoundToNumber);

	std::ostringstream strs;
	strs << std::fixed << std::setprecision(dRoundToNumber) << ldResult;
	std::string str = strs.str();

	return str;
}

int main()
{
	vector<unsigned long long> buffer;
	unsigned long long inputNum;

	while (cin >> inputNum)
	{
		buffer.push_back(inputNum);
	}

	for (vector<unsigned long long>::const_reverse_iterator i = buffer.rbegin(); i != buffer.rend(); ++i)
	{		
		cout << roundSqrt(*i, 4) << endl;
	}

    return 0;
}