#include <iostream>
using namespace std;


int main()
{
	enum class color
	{
		red,
		blue
	};

	enum class fruit
	{
		banana,
		apple
	};

	color cl = color::red;
	fruit fr = fruit::banana;

	color c1 = color::blue;
	color c2 = color::blue;
	if (c1 == c2)
		cout << "same color" << endl;

	return 0;
}
