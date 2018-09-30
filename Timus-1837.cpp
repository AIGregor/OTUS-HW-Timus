#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <array>

const std::string Isenbaev("Isenbaev");

bool find_Isenbaev(std::array<std::string, 3>& team)
{
	if (team[0].compare(Isenbaev) == 0 ||
		team[1].compare(Isenbaev) == 0 ||
		team[2].compare(Isenbaev) == 0)
		return true;

	return false;
}

int find_team(const std::string& surname, std::vector<std::array<std::string, 3>>& teams)
{	
	for (int i=0; i < teams.size(); ++i)
	{
		if (teams[i][0].compare(surname) == 0 ||
			teams[i][1].compare(surname) == 0 ||
			teams[i][2].compare(surname) == 0)
			return i;
	}
	return -1;
}

int main()
{	
	using namespace std;
	
	array<string, 3> surname;
	vector<array<string, 3>> teams;
	set<string> surnames;

	map<string, int> people;
	int teamNum = 0;	
	int count = 0;
	cin >> teamNum;

	while (teamNum >= count)
	{
		cin >> surname[0] >> surname[1] >> surname[2];
		
		if (find_Isenbaev(surname))
			people[Isenbaev] = 0;

		teams.push_back(surname);		
		++count;
	}

	surnames.insert(Isenbaev);
	while (surnames.size() > 0)
	{
		set<string> temp;
		for (std::set<string>::iterator it = surnames.begin(); it != surnames.end(); ++it)
		{
			auto surname = people.find(*it);			
			int teams_id = find_team(*it, teams);

			while (teams_id != -1)
			{
				for (const string &man : teams[teams_id])
				{
					if (people.find(man) == people.end())
					{
						people[man] = surname->second + 1;
						temp.insert(man);
					}
				}
				teams.erase(teams.begin() + teams_id);
				teams_id = find_team(*it, teams);
			}
		}
		surnames = temp;		
	}

	if (teams.size() > 0)
		for (auto &team : teams)		
			for (auto &surname : team)			
				people[surname] = -1;			

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