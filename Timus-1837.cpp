#include <iostream>
#include <map>
#include <deque>
#include <string>
#include <array>

const std::string Isenbaev("Isenbaev");

bool find_Isenbaev(std::array<std::string, 3>& team)
{
	if (team[0].compare(Isenbaev) == 0 ||
		team[1].compare(Isenbaev) == 0 ||
		team[2].compare(Isenbaev) == 0)
	{
		return true;
	}
	
	return false;
}

int main()
{	
	using namespace std;
	
	array<string, 3> surname;
	deque<array<string, 3>> teams;
	
	map<string, int> people;
	int teamNum = 0;	
	int count = 0;
	cin >> teamNum;

	while (teamNum >= count)
	{
		cin >> surname[0] >> surname[1] >> surname[2];
		
		bool hasIsenPos = find_Isenbaev(surname);

		if (hasIsenPos)
		{			
			surname[0].compare(Isenbaev) == 0 ? people[surname[0]] = 0 : people[surname[0]] = 1;
			surname[1].compare(Isenbaev) == 0 ? people[surname[1]] = 0 : people[surname[1]] = 1;
			surname[2].compare(Isenbaev) == 0 ? people[surname[2]] = 0 : people[surname[2]] = 1;
		}
		else
		{
			teams.push_back(surname);
		}
		++count;
	}

	for (auto team : teams)
	{
		bool isInMap = false;
		auto surnameInMap = team[0];
		
		for (auto surname : team)
		{
			auto findSurname = people.find(surname);
			if (findSurname != people.end())
			{
				isInMap = true;
				surnameInMap = surname;
				break;
			}
		}
		for (auto surname : team)
		{			
			if (isInMap)
			{
				if (people.find(surname) == people.end())
					people[surname] = people[surnameInMap] + 1;
			}
			else
			{
				people[surname] = -1;
			}
		}
	}

	for (auto surname : people)
	{
		cout << surname.first << " ";
		if (surname.second != -1)			
			cout << surname.second << endl;
		else
			cout << "undefined" << endl;
	}

	return 0;
}