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
	//	ifs.seekg(5);	//파일 처음에서 5byte 이동
	//	cout << (char)ifs.get() << endl; 

	//	ifs.seekg(5, ios::cur);	//현재 위치에서 5byte 이동
	//	cout << (char)ifs.get() << endl;

	//	ifs.seekg(0, ios::end);
	//	cout << ifs.tellg() << endl;	//tellg()->현재위치
	//}

	fstream iofs(filename);

	iofs.seekg(5);
	cout << (char)iofs.get() << endl;	//read

	iofs.seekg(5);
	iofs.put('A');
}
