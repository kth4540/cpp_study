#include <iostream>
using namespace std;
int main()
{
	const int num_row = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_row; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << "[" << row << "]" << "[" << col << "]" << "\t";
		cout << endl;
	}

	int arr[num_row][num_columns] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};


	return 0;
}
