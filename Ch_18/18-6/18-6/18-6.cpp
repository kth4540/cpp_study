#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  //exit()
#include <sstream>
using namespace std;
int main()
{
	//writing
	if (true)
	{
		ofstream ofs("my_first_file.dat"); //ios::app, ios::binary

		if (!ofs)
		{
			cerr << "coudln't open file" << endl;
			exit(1);
		}
		//ofs << "line 1" << endl;
		//ofs << "line 2" << endl;

		const unsigned num_data = 10;
		ofs.write((char*)&num_data, sizeof(num_data));

		for (int i = 0; i < num_data; ++i)
			ofs.write((char*)&i, sizeof(i));
	}
	
	//reading
	if (true)
	{
		ifstream ifs("my_first_file.dat");

		if (!ifs)
		{
			cout << "cannot open file" << endl;
			exit(1);
		}

		//while (ifs)
		//{
		//	string str;
		//	getline(ifs, str);
		//	cout << str << endl;
		//}

		unsigned num_data = 0;
		ifs.read((char*)&num_data, sizeof(num_data));

		for (unsigned i = 0; i < 11; ++i)
		{
			int num;
			ifs.read((char*)&num, sizeof(num));
			cout << num << endl;
		}
	}
}
