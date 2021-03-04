
#include <iostream>
#include <cassert>
using namespace std;

class mystring
{
public:
	char* m_data = nullptr;
	int m_length = 0;

public:
	mystring(const char* source="")
	{
		assert(source);

		m_length = strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	mystring(const mystring& source)	//copy constructor
	{
		cout << "copy constructor" << endl;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];

			m_data[m_length - 1] = '\0';
		}
		else
			m_data = nullptr;
	}

	mystring& operator =(const mystring& source)	//대입 연산자
	{
		//shallow copy
		/*this->m_data=source.m_data;
		* this->m_length=source.m_length;
		*/

		cout << "assignment operator" << endl;

		if (this == &source)	//prevent self-assignment
			return *this;
		delete[] m_data;

		m_length = source.m_length;
		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}


	~mystring()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};
int main()
{
	mystring hello("hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		mystring copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;

		// copy에서 주소까지 같이 복사됨
		// scope에서 나갈 때 소멸자 호출 -> 할당된 메모리도 없어짐
	}

	cout << hello.getString() << endl;
	//없어진 메모리를 호출 -> 에러 발생

	mystring st1 = hello;	// copy constructor
	mystring st2;
	st2 = hello;	//assignment operator
	return 0;
}

