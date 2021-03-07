#include <iostream>
using namespace std;
class Exception
{
public:
	void report()
	{
		cerr << "exception report" << endl;
	}
};
class ArrayException :public Exception
{
public:
	void report()
	{
		cout << "Array exception" << endl;
	}
};
class MyArray
{
private:
	int m_data[5];
public:
	int& operator [](const int& idx)
	{
		if (idx < 0 || idx >= 5)throw ArrayException();

		return m_data[idx];
	}
};

void dosome()
{
	MyArray my_arr;
	try
	{
		my_arr[100];
	}
	catch (const int& x)
	{
		cerr << "exception" << x << endl;
	}
	//catch (ArrayException& e)
	//{
	//	cout << "dosome" << endl;
	//	e.report();
	//	throw e;
	//}
	catch (Exception& e)
	{
		cout << "dosome" << endl;

		e.report();
		throw;
	}
}
int main()
{
	try
	{
		dosome();
	}
	catch(ArrayException& e)
	{
		cout << "main()" << endl;
		e.report();
	}
	catch (Exception& e)
	{
		cout << "main()" << endl;
		e.report();
	}
	return 0;
}

