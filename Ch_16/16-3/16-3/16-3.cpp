#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> cont;
	for (int i = 0; i < 10; ++i)
		cont.push_back(i);

	auto itr = min_element(cont.begin(), cont.end());
	cout << *itr << endl;

	itr = max_element(cont.begin(), cont.end());
	cout << *itr << endl;
	cout << endl;

	itr = find(cont.begin(), cont.end(), 3);
	cout << endl;

	sort(cont.begin(), cont.end());
	for (auto& e : cont)cout << e << " ";
	cout << endl;

	reverse(cont.begin(), cont.end());
	for (auto& e : cont)cout << e << " ";
	cout << endl;
	return 0;
}
