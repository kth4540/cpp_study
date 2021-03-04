#include <iostream>
#include <string>
using namespace std;
//class something
//{
//public:
//	int m_val = 0;
//	something(const something& st_in)	//copy constructor
//	{
//		m_val = st_in.m_val;
//		cout << "copy constructor" << endl;
//	}
//
//	something()
//	{
//		cout << "constructor" << endl;
//	}
//
//	void setval(int val) { m_val = val; }
//	int getval() const	{ return m_val; }
//};
//
//void print(const something &st)
//{
//	cout << &st << endl;
//	cout << st.m_val << endl;
//}

class something
{
public:
	string m_val = "default";
	const string& getval() const { cout << "const ver" << endl; return m_val; }
	string& getval() { cout << "non-const ver" << endl; return m_val; }
};
int main()
{
	something s;
	s.getval();

	const something s2;
	s2.getval();
	//cout << &s << endl;
	//print(s);
	//s.setval(3);
//	cout << s.getval() << endl;
	return 0;
}
