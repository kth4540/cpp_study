#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	const string filename = "my_file.txt";

	//{
	//	ofstream ofs(filename);
	//	for (char i = 'a'; i <= 'z'; ++i)
	//		ofs << i;
	//	ofs << endl;
	//}
	//{
	//	ifstream ifs(filename);
	//	ifs.seekg(5);	//���� ó������ 5byte �̵�
	//	cout << (char)ifs.get() << endl; 

	//	ifs.seekg(5, ios::cur);	//���� ��ġ���� 5byte �̵�
	//	cout << (char)ifs.get() << endl;

	//	ifs.seekg(0, ios::end);
	//	cout << ifs.tellg() << endl;	//tellg()->������ġ
	//}

	fstream iofs(filename);

	iofs.seekg(5);
	cout << (char)iofs.get() << endl;	//read

	iofs.seekg(5);
	iofs.put('A');
}
