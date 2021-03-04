#include <iostream>
#include <vector>
using namespace std;
void printstack(const vector<int>& v)
{
	for (auto& e : v)
		cout << e << " ";
	cout << endl;
}
int main()
{
	//vector<int> v{ 1,2,3 };

	////size,capacity

	//for (auto& elem : v)
	//{
	//	cout << elem << " ";
	//	cout << endl;
	//}
	//cout << v.size() <<" "<<v.capacity()<<endl;

	//cout << v.at(2) << endl;
	//int* ptr = v.data();
	//cout << ptr[2] << endl;

	vector<int> stack;
	stack.push_back(3);
	printstack(stack);

	stack.push_back(5);
	printstack(stack);

	stack.push_back(7);
	printstack(stack);

	stack.pop_back();
	printstack(stack);

	stack.pop_back();
	printstack(stack);

	stack.pop_back();
	printstack(stack);

	return 0;
}
