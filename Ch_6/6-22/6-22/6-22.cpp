#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr;

	vector<int>arr2 = { 1,2,3,4,5 };
	cout << arr2.size() << endl;

	for (auto& itr : arr2)
		cout << itr << " ";
	cout << endl;

	return 0;
}
