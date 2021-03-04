#include "student.h"
#include "teacher.h"
using namespace std;
int main()
{
	student std("jack");
	teacher tch("dr.h");

	std.setName("dash");
	cout << std.getName() << endl;

	tch.setName("dr.k");
	cout << tch.getName() << endl;

	cout << tch.getName() << endl;
	return 0;
}
