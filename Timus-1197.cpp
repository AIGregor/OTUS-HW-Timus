#include <iostream>

using namespace std;

int main()
{
	int chessBoard[8][8] = {0};
	for (int i = 0; i < 8; i++) 
	{
		for (int j = 0; j<8; j++) {
			int counter = 0;
			if (i - 2 >= 0 && j - 1 >= 0)    ++counter;
			if (i - 2 >= 0 && j + 1 <= 7)    ++counter;
			if (i - 1 >= 0 && j - 2 >= 0)    ++counter;
			if (i - 1 >= 0 && j + 2 <= 7)    ++counter;
			if (i + 2 <= 7 && j - 1 >= 0)    ++counter;
			if (i + 2 <= 7 && j + 1 <= 7)    ++counter;
			if (i + 1 <= 7 && j - 2 >= 0)    ++counter;
			if (i + 1 <= 7 && j + 2 <= 7)    ++counter;
			chessBoard[i][j] = counter;
		}
	}
	int n_number = 0;
	cin >> n_number;

	for (int i = 0; i < n_number; ++i)
	{
		char position_let, position_num;
		position_let = position_num = 0;
		cin >> position_let >> position_num;

		cout << chessBoard[position_let - 'a'][position_num - '0' - 1] << endl;
	}

    return 0;
}