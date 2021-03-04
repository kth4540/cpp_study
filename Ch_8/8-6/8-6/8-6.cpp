
#include <iostream>
#include <vector>
using namespace std;

class simple
{
private:
	int m_id;
public:
	simple(const int& id_in)
		:m_id(id_in)
	{
		cout << "constructor" <<id_in<< endl;
	}
	~simple()
	{
		cout << "destructor" << m_id << endl;
	}
};

class intarr
{
private:
	int* m_arr = nullptr;
	int m_length = 0;
public:
	intarr(const int length)
	{
		m_length = length;
		m_arr = new int[m_length];

		cout << "constructor" << endl;
	}

	~intarr()
	{
		delete[] m_arr;
		cout << "delete" << endl;
	}

	int s() { return m_length; }
};
int main()
{
	//simple s1(0);
	//simple s2(1);

	//simple* s1 = new simple(0);
	//simple s2(1);
	//delete s1;

	while (true)
	{
		intarr my_int_arr(10000);
	}
	return 0;
}
