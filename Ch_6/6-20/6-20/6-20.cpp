
#include <iostream>
using namespace std;
int main()
{
	//int* ptr = nullptr;
	//int** pptr = nullptr;

	//int val = 5;
	//ptr = &val;
	//pptr = &ptr;

	//cout << ptr << " " << *ptr << " " << &ptr << endl;
	//cout << pptr << " " << **pptr << " " << &pptr << endl;
	
	const int row = 3;
	const int col = 5;

	//int** rows = new int* [row];

	//for (int r = 0; r < row; ++r)
	//	rows[r] = new int[col];


	//int* r1 = new int[col] {1,2,3,4,5};
	//int* r2 = new int[col] {6,7,8,9,10};
	//int* r3 = new int[col] {11,12,13,14,15};


	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//		cout << rows[r][c] << " ";
	//	cout << endl;
	//}

	//for (int r = 0; r < row; ++r)
	//	delete[] rows[r];

	int* matrix = new int[row * col];
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[c + col * r] = c + r;
	return 0;
}
