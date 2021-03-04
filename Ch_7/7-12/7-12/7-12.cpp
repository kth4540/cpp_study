#include <iostream>
using namespace std;

void countdown(int cnt)
{
	cout << cnt << endl;
	if(cnt>0)
		countdown(cnt - 1);
}

int sumto(int num)
{
	if (num <= 0)
		return 0;
	else if (num <= 1)
		return 1;
	else
		return sumto(num - 1) + num;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return fib(n - 2) + fib(n - 1);
}
int main()
{
	countdown(5);
	cout << sumto(10) << endl;
	cout << fib(6) << endl;
	return 0;
}
