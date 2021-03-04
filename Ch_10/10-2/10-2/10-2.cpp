#include <iostream>
#include "monster.h"
using namespace std;
int main()
{
	monster mon1("sanson", position2D(0, 0));
	cout << mon1 << endl;
	//mon1.locatio	-> name 등의 변수와는 별개

	monster mon2("parsival", position2D(0, 0));

	//while (1)//game loop
	{
		mon1.moveTo(position2D(1, 1));
		cout << mon1 << endl;
	}
	return 0;
}
