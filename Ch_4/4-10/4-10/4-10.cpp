#include <iostream>
#include <string>
using namespace std;

struct person
{
	double height;
	float weight;
	int age;
	string name;

	void printperson()
	{
		cout << height << " " <<
			weight << " " <<
			age << " " <<
			name << endl;
	}
};


int main()
{
	person me{ 2.0,100.0,20,"hou" };

	me.printperson();

	person me2;
	me2 = me;

	return 0;
}
