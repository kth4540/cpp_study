#include <iostream>
#include <string>
using namespace std;
void print(int x=1024)
{
	cout << x << endl;
}
int main()
{
	print(10);	//10
	print();	//1024
	return 0;
}
