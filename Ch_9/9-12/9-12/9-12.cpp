#include <iostream>
#include <cassert>
#include <initializer_list>
using namespace std;

class intarr
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr;

public:
	intarr(unsigned length)
		:
		m_length(length)
	{
		m_data = new int[length];
	}

	intarr(const initializer_list<int>& list)
		:intarr(list.size())
	{
		int cnt = 0;
		for (auto& element : list)
		{
			m_data[cnt] = element;
			++cnt;
		}
	}

	friend ostream& operator <<(ostream& out, const intarr& arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

	intarr& operator =(const intarr& arr)
	{
		if (m_data != nullptr)
		{
			m_length = arr.m_length;
			m_data = new int[m_length];
			for (int i = 0; i < m_length; ++i)
				m_data[i] = arr.m_data[i];
		}
		return*this;
	}

	~intarr()
	{
		delete[] this->m_data;
	}
};
int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto i1 = { 10,20,30 };

	intarr int_array{ 1,2,3,4,5 };
	cout << int_array << endl;

	intarr tmp(5);
	tmp = int_array;
	cout << tmp << endl;

	return 0;
}
