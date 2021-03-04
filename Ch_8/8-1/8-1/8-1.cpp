#include <iostream>
#include <string>
#include <vector>
using namespace std;
class fr
{
public:	//access specifier(public, private, protected)
	string name;
	string address;
	int age;
	double height;
	double weight;
	
	void print()
	{
		cout << address << " " << age << " " << height << " "
			<< name << " " << weight << endl;
	}

};


int main()
{
	fr jj{ "jack jack","uptown",2,30,10 };	
	//instanciation(실질적으로 메모리를 확보)
	jj.print();
	vector<fr>my_friends;
	my_friends.resize(2);

	for (auto& elem : my_friends)
		elem.print();

	//vector<string> name_vec;
	//vector<string>addr_vec;
	//vector<int> age_vec;
	//vector<double>height_vec;
	//vector<double>weight_vec;

	return 0;
}
