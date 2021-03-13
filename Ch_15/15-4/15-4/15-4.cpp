#include <iostream>
#include <vector>
#include <string>
#include "AutoPtr.h"
#include "Resource.h"
using namespace std;

template <class T>
void MySwap(T& a, T& b)
{
	//T tmp = a;
	//a = b;
	//b = tmp;

	T tmp{ move(a) };
	a = move(b);
	b = move(tmp);
}

int main()
{
	//AutoPtr<Resource> res1(new Resource(1000));

	//cout << res1.m_ptr << endl;

	//AutoPtr<Resource> res2 = move(res1);
	////move-> l-value를 r-value로 리턴해줌

	//cout << res1.m_ptr << endl;
	//cout << res2.m_ptr << endl;

	//////////////////////////

	//AutoPtr<Resource> res1(new Resource(3));
	//res1->setAll(3);

	//AutoPtr<Resource> res2(new Resource(3));
	//res2->setAll(5);

	//res1->print();
	//res2->print();

	//MySwap(res1, res2);

	//res1->print();
	//res2->print();

	vector<string> v;
	string str = "hello";

	v.push_back(str);	//copy
	cout << str << endl;
	cout << v[0] << endl;

	v.push_back(move(str));	//move

	cout << str << endl;
	cout << v[0] << " " << v[1] << endl;
}
