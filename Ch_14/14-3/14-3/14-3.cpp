#include <iostream>
using namespace std;
class MyArray
{
private:
	int m_data[5];
public:
	int& operator [](const int& idx)
	{
		if (idx < 0 || idx >= 5)throw - 1;
		return m_data[idx];
	}
};

void dosome()
{
	MyArray my_arr;
	try
	{
		my_arr[100];
	}
	catch (const int& x)
	{
		cerr << "exception" << x << endl;
	}
}
int main()
{
	dosome();

	return 0;
}

