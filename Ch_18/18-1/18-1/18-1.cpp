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
	//cin >> setw(5) >> buf;	//setw(a)->a��ŭ�� �Է¹���
	//cout << buf << endl;	//������ ���ڵ��� ���ۿ� ��������

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//char ch;
	////while (cin >> ch)	->cin�� ��ĭ�� �Է¹��� ����
	//while(cin.get(ch))
	//	cout << ch;	

	//char buf[5];
	////cin.get(buf, 5);
	////cout << cin.gcount() << " " << buf << endl;
	////cout << buf << endl;

	//cin.getline(buf, 5);	// getline�� ���� ��ü�� �о����
	//cout << cin.gcount() << " " << buf << endl;
	//cout << buf << endl;

	//string buf;
	//getline(cin, buf);
	//cout << cin.gcount() << " " << buf << endl;

	char buf[1024];
	//cin.ignore();	//ignore(a)->���� a���� ������ default 1��
	//cin >> buf;
	//cout << buf << endl;

//	cout << (char)cin.peek() << endl;	peek()-> ���ۿ��� ������ �ʰ� ���� Ȯ��

	cin >> buf;
	cout << buf << endl;
	
	cin.unget();	//unget()-> ������ ���ڸ� �ٽ� ���۷� ����
	cin.putback('a');//putback('a')->a�� �ٽ� ���ۿ� ����
	cin >> buf;
	cout << buf << endl;

	return 0;
}
