#include <iostream>
#include <string>
using namespace std;

enum color	//user-defined data types
{
	color_black = -3,
	color_red,
	color_blue,
	color_green
};
int main()
{
	color paint = color_black;
	color house(color_blue);
	color apple{ color_red };

	int color_id = color_red;
	//color my_color = 3;	-> 불가능
	color my_color = static_cast<color>(3);	//-> 가능

	string str_input;
	getline(cin, str_input);
	if (str_input == "color_black")
		my_color = static_cast<color>(0);

	return 0;
}