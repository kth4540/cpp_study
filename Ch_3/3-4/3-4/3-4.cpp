#include <iostream>
using namespace std;

int main()
{
	float a = 4;
	sizeof(float);
	sizeof(a);

	int x = 3;
	int y = 10;
	int z = (++x, ++y);	//->++x; ++y; int z=y; ¿Í °°À½

	int b;
	z = a, b;
	cout << z << endl;

	//conditional operator
	bool sale = true;
	const int price = (sale == true) ? 10 : 100;

	return 0;
}
