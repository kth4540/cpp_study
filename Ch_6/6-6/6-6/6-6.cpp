#include <iostream>
using namespace std;
int main()
{
	char mystring[255];
	//for (int i = 0; i < 7; ++i)
	//	cout << mystring[i] << endl;
	
//	cin >> mystring;
//	mystring[4] = '\0';

//	cout << mystring << endl;	//cout은 '\0'을 만나면 중단

	//cin.getline(mystring, 255);
	//int ix = 0;
	//while (true)
	//{
	//	if (mystring[ix] == '\0')
	//		break;
	//	cout << mystring[ix] << " " << (int)mystring[ix] << endl;
	//	++ix;
	//}


	char source[] = "copy this";
	char dest[50];
	strcpy_s(dest, 50/*dest size*/, source);

	//strcat(a,b)	-> a문자열 뒤에 b붙임
	//strcmp()	-> 두 문자열 비교	->같으면 0, 아니면 -1 return 
	cout << source << endl;
	cout << dest << endl;
	return 0;
}
