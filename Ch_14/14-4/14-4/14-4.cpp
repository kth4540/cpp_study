#include <iostream>
#include <exception>
#include <string>
using namespace std;
class CustomException :public exception
{
public:
	const char* what() const noexcept override
	{
		return "custom exception";
	}
};
int main()
{
	try
	{
		//string s;
		//s.resize(-1);
		throw runtime_error("badthing happend");
	}
	catch (length_error& exc)
	{
		cerr << "length_error" << endl;
	}
	catch (exception& exc)
	{
		cout << typeid(exc).name() << endl;
		cerr << exc.what() << endl;
	}
	return 0;
}
