#include <iostream>
using namespace std;
int main()
{
	char mystring[255];
	//for (int i = 0; i < 7; ++i)
	//	cout << mystring[i] << endl;
	
//	cin >> mystring;
//	mystring[4] = '\0';

//	cout << mystring << endl;	//cout�� '\0'�� ������ �ߴ�

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

	//strcat(a,b)	-> a���ڿ� �ڿ� b����
	//strcmp()	-> �� ���ڿ� ��	->������ 0, �ƴϸ� -1 return 
	cout << source << endl;
	cout << dest << endl;
	return 0;
}
