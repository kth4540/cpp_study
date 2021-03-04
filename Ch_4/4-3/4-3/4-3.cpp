#include <iostream>
using namespace std;
namespace a
{
	int my_var(10);
}

namespace b
{
	int my_var(20);
}
int main()
{
	using namespace a;
	using namespace b;

	cout << a::my_var << endl;
	cout << b::my_var << endl;


	return 0;
}
