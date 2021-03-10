#include <iostream>
#include <string>
#include <iomanip>	// input,output manipulators
using namespace std;
int main()
{
	//cout << "enter a number" << endl;
	//int i;
	//cin >> i;
	//cout << i << endl;

	//char buf[10];
	//cin >> setw(5) >> buf;	//setw(a)->a만큼만 입력받음
	//cout << buf << endl;	//나머지 글자들은 버퍼에 남아있음

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//char ch;
	////while (cin >> ch)	->cin은 빈칸은 입력받지 않음
	//while(cin.get(ch))
	//	cout << ch;	

	//char buf[5];
	////cin.get(buf, 5);
	////cout << cin.gcount() << " " << buf << endl;
	////cout << buf << endl;

	//cin.getline(buf, 5);	// getline은 라인 전체를 읽어들임
	//cout << cin.gcount() << " " << buf << endl;
	//cout << buf << endl;

	//string buf;
	//getline(cin, buf);
	//cout << cin.gcount() << " " << buf << endl;

	char buf[1024];
	//cin.ignore();	//ignore(a)->글자 a개를 무시함 default 1개
	//cin >> buf;
	//cout << buf << endl;

//	cout << (char)cin.peek() << endl;	peek()-> 버퍼에서 꺼내지 않고 글자 확인

	cin >> buf;
	cout << buf << endl;
	
	cin.unget();	//unget()-> 마지막 글자를 다시 버퍼로 넣음
	cin.putback('a');//putback('a')->a를 다시 버퍼에 넣음
	cin >> buf;
	cout << buf << endl;

	return 0;
}
