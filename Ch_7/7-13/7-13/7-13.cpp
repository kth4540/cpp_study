#include <iostream>
using namespace std;
int main()
{
	//syntax error -> int x -> ';' ����

	//semantic errors(�� ����)
	int x;
	cin >> x;
	if (x >= 5)
		cout << "x is greater than 5" << endl;

	//violated assumption
	string hello = "hello, my name is jack jack";
	int ix;
	cout << "input from 0 to " << hello.size() - 1 << endl;
	cin >> ix;
	if (ix >= 0 && ix <= hello.size() - 1)	// ����� ���α׷���
		cout << hello[ix] << endl;
	else
		cout << "please try again" << endl;
	return 0;
}
