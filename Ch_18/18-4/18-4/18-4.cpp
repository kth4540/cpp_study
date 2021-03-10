#include <iostream>
#include <cctype>
#include <string>
#include <bitset>
using namespace std;
void printStates(const ios& stream)
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}
void printCharacterClassification(const int& i)
{
	cout << boolalpha;
	cout << "isalnum " << bool(isalnum(i)) << endl;
	cout << "isblank " << bool(isblank(i)) << endl;
	cout << "isdigit " << bool(isdigit(i)) << endl;
	cout << "islower " << bool(islower(i)) << endl;
	cout << "isupper " << bool(isupper(i)) << endl;
}

bool isAllDigit(const string& str)
{
	bool ok_flag = true;
	for(auto e:str)
		if (!isdigit(e))
		{
			ok_flag = false;
			break;
		}
	return ok_flag;
}

void classifyCharacters(const string& s)
{
	for (auto e : s)
	{
		cout << e << endl;
		cout << "isdigit" << isdigit(e) << endl;
		cout << "isblank" << isblank(e) << endl;
		cout << "isalpha" << isalpha(e) << endl;
	}
}

int main()
{
	//int i;
	//cin >> i;

	//cin.clear();
	//cin.ignore(1024, '\n');
	//cout << endl;
	//printStates(cin);

	//char i;
	//cin >> i;
	//printCharacterClassification(i);

	cout << boolalpha;
	//cout << isAllDigit("1234") << endl;
	//cout << isAllDigit("a1234") << endl;

	classifyCharacters("1234");
	classifyCharacters("a1234");


}
