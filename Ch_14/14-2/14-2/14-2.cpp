
#include <iostream>
using namespace std;

void first();
void second();
void third();
void last();
int main()
{
	cout << "start" << endl;
	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caught int exception" << endl;
	}
	catch (...)//catch all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "end main" << endl;
	return 0;
}


void first()
{
	cout << "first" << endl;
	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}
	cout << "end first" << endl;
}
void second()
{
	cout << "second" << endl;
	try
	{
		third();
	}
	catch (double)
	{
		cerr << "first caught double exception" << endl;
	}
	cout << "end second" << endl;
}

void third()
{
	cout << "third" << endl;
	last();
	cout << "end third" << endl;
}
void last()
{
	cout << "last" << endl;
	cout << "throw exception" << endl;
	throw - 1;	// throw를 만나면 아래 내용은 전부 건너뜀
	cout << "end last" << endl;
}