#include <iostream>
using namespace std;

void dosomething(int scr[])
{
	cout << scr[0] << endl;
	cout << scr[1] << endl;
	cout << scr[2] << endl;

	cout << sizeof(scr) << endl;
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5 };

	cout << &students_scores << endl;
	cout << &(students_scores[0]) << endl;
	cout << &(students_scores[1]) << endl;
	cout << &(students_scores[2]) << endl;
	cout << &(students_scores[3]) << endl;

	cout << sizeof(&students_scores) << endl;

	dosomething(students_scores);

	return 0;
}
