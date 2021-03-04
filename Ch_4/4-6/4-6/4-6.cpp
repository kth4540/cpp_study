#include <iostream>
#include <string>
using namespace std;

int main()
{
	//const char my_strs[] = "hello world";
	//const string my_hello = "hello world";
	//string my_id = "123";
	//cout << my_hello << endl;

	//cout << "your age?: ";
	//int age;
	//cin >> age;	// cin은 공백을 만나면 끝남

	//cin.ignore(32767, '\n');	//'\n'을 만날때까지 혹은 32767개의 글자를 무시하라

	//cout << "your name?: ";
	//string name;
	//getline(cin, name);

	//cout << name << " " << age << endl;

	string a("hello, ");
	string b("world ");
	string hw = a + b;	//append
	hw += "i'm good";

	cout << hw << endl;

	cout << hw.length() << endl;
	return 0;
}
