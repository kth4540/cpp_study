#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

unsigned int prng()
{
	static unsigned  int seed = 5523;
	seed = 98574345 * seed + 209384;
	return seed % 32768;
}

int getrandomnumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}
int main()
{
	//srand(static_cast<unsigned int>(time(0)));	//seed
	//for (int count = 1; count <= 100; ++count)
	//	cout << getrandomnumber(3,8) << "\t";

	random_device rd;
	mt19937_64 ms(rd());	//create a mesenne twister, 
	uniform_int_distribution<>dice(1, 6);

	for (int count = 1; count <= 20; ++count)
		cout << dice(ms) << endl;
	return 0;
}
