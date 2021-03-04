#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//event
	item1_flag = true;

	//die -> item2 lost
	item2_flag = false;

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	unsigned char items_flag = 0;
	cout << "no item" << bitset<8>(items_flag) << endl;

	//item0 on
	items_flag |= opt0;
	cout << "item0 obtained " << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3;
	cout << "item3 obtained " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;
	//00001001
	//11110111	->00000001
	cout << "item3 lost " << bitset<8>(items_flag) << endl;

	//check item1 ?
	if (items_flag & opt1)
		cout << "has item 1" << endl;
	else
		cout << "not have item 1" << endl;

	//check item0 ?
	if (items_flag & opt0)
		cout << "has item 0" << endl;
	else
		cout << "not have item 0" << endl;


	//obtain item 2, 3
	items_flag |= (opt2 | opt3);
	cout << "item 2,3 obtained " << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2; 
		items_flag ^= opt1;
	}
	const unsigned int red_mask = 0xff0000;
	const unsigned int green_mask = 0x00ff00;
	const unsigned int blue_mask = 0x0000ff;
	unsigned int pixel = 0xDAA520;

	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;

	cout << bitset<32>(pixel) << endl;

	unsigned char red, green, blue;
	blue = pixel & blue_mask;
	cout << "blue" << bitset<8>(blue) << endl;

	return 0;
}
