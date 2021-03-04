#include <iostream>
#include <vector>
#include <string>
#include"lecture.h"
using namespace std;
int main()
{
	Student std1("jack", 0);
	Student std2("dash", 1);
	Student std3("violet", 2);

	Teacher tch1("hong");
	Teacher tch2("good");

	Lecture lec1("computer program");
	lec1.assignTeacher(&tch1);
	//lec1.assignTeacher(Teacher("hong"));
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("computational think");
	lec2.assignTeacher(&tch2);
	//lec2.assignTeacher(Teacher("good"));
	lec2.registerStudent(&std1);


	//test
	cout << lec1 << endl;
	cout << lec2 << endl;

	lec2.study();

	cout << lec1 << endl;
	cout << lec2 << endl;

	return 0;
}
