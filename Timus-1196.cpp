#include <iostream>
#include <set>

using namespace std;

int main()
{
	int m_teacher_number = 0;
	int n_stud_number = 0;

	multiset<int> teacher_list = {};
	multiset<int> stud_list = {};
	int result = 0;

	cin >> m_teacher_number;

	while (m_teacher_number > 0)
	{
		int date = 0;
		cin >> date;
		teacher_list.insert(date);
		m_teacher_number--;
	}

	cin >> n_stud_number;
	while (n_stud_number > 0)
	{
		int date = 0;
		cin >> date;
		stud_list.insert(date);
		n_stud_number--;
	}

	for (auto date : stud_list)
	{
		if (teacher_list.find(date) != teacher_list.end())
			result++;
	}

	cout << result << endl;

    return 0;
}