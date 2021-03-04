#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])	//
{
	for (int cnt = 0; cnt < argc; ++cnt)
	{
		string argv_single = argv[cnt];

		if (cnt == 1)
		{
			int input = stoi(argv_single);
			cout << input + 1 << endl;
		}
		else
			cout << argv_single << endl;
		cout << argv[cnt] << endl;
	}
	return 0;
}
