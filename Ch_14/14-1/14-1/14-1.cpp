#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int findFirstChar(const char* string, char ch)
{
	for (size_t idx = 0; idx < strlen(string); ++idx)
		if (string[idx] == ch)
			return idx;

	return -1;	//no match
}

double divide(int x, int y, bool& success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success =true;
	return static_cast<double>(x) / y;
}
int main()
{
	//bool success;
	//double result = divide(5, 3, success);

	//if (!success)
	//	cerr << "an error occurred" << endl;
	//else
	//	cout << "result is " << result << endl;
	// 
	//ifstream input_file("tmp.txt");
	//if (!input_file)
	//	cerr << "cannot open file" << endl;

	//try, catch, throw
	double x;
	cin >> x;
	try
	{
		if (x < 0.0) throw "negative input";
		cout << sqrt(x) << endl;
	}
	catch (string error_message)
	{
		//do something to respond
		cout << error_message << endl;
	}
	catch (int x)
	{
		cout << "catch int " << x << endl;
	}
	catch (const char* error_message)
	{
		cout << "catch char* " << error_message << endl;
	}
	return 0;
}
