#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
	set/*list*//*vector*/<int> cont;
	for (int i = 0; i < 10; ++i)
		cont.insert/*push_back*/(i);

	set/*list*//*vector*/<int>::const_iterator itr;
	itr = cont.begin();
	while (itr != cont.end())
	{
		cout << *itr << " ";
		++itr;
	}
	cout << endl;

	for (auto& e : cont)
		cout << e << " ";
	cout << endl;
	return 0;
}
