#include <iostream>

using namespace std;

int main()
{
	int t_qxx, t_zzz, i;
	i = t_qxx = t_zzz = 0;

	cin >> t_qxx >> t_zzz;
	
	if (!(t_qxx <= t_zzz && 250 <= t_qxx && t_zzz <= 2400))
		return 0;

	int chance = 0;
	int task[10];
	while (cin >> chance)
	{
		i += chance * 20;
	}
	
	if (t_qxx + i <= t_zzz)
		cout << "No chance." << endl;
	else
		cout << "Dirty debug :(" << endl;

    return 0;
}