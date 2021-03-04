#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int width;
};

enum studentname
{
	jack,
	dash,
	violet
};
int main()
{
	//int one_score;
	//int students_score[5];
	//cout << sizeof(one_score) << endl;
	//cout << sizeof(students_score) << endl;

	//students_score[0] = 100;
	//students_score[1] = 80;
	//students_score[2] = 90;
	//students_score[3] = 50;
	//students_score[4] = 50;

	//cout << students_score[0] << endl;
	//cout << students_score[1] << endl;

	//cout << sizeof(rectangle) << endl;
	//
	//rectangle rect_arr[10];
	//cout << sizeof(rect_arr) << endl;

	//rect_arr[0].length = 1;
	//rect_arr[1].width = 5;

	int num_students = 0;
	cin >> num_students;	//-> runtime에 결정됨(실행을 시켜야 결정됨)

//	int students_scores[num_students];	
	//-> compile에 결정됨(실행시키기 전에 결정됨)

	return 0;
}
