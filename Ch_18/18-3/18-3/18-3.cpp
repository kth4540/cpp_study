#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	stringstream os;

	//os << "hello world";	//insertion operator, >>:extraction operator
	////os.str("hello, world");	-> 기존 내용을 비우고 채움	
	//os << "hello, world2";
	//string str;
	//str = os.str();
	//cout << str << endl;
	int i = 12345;
	double d = 67.89;
	os << "12345 67.89";

	//os.str(); os 비우기

	//string str1;
	//string str2;
	//os >> str1 >> str2;
	//cout << str1 << "|" << str2 << endl;

	int i2;
	double d2;

	os >> i2 >> d2;
	cout << i2<<"|" << d2 << endl;
	
}
