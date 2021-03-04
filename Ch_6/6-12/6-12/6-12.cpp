#include <iostream>
using namespace std;
int main()
{
	int* ptr = new int{ 7 };
	cout << *ptr << endl;
	cout << ptr << endl;

	delete ptr;
	ptr = nullptr;
	cout << "after del" << endl;
	if (ptr != nullptr)
	{
		cout << *ptr << endl;
		cout << ptr << endl;
	}
	else
		cout << "could not allocate" << endl;

	////////////
	while (true)	//memory leak
	{
		int* ptr = new int;
		cout << ptr << endl;
		//delete ptr;
	}
	return 0;

}
