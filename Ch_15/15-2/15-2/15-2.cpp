#include <iostream>
using namespace std;
int getResult()
{
	return 100 * 100;
}

void dosome(int& lref)
{
	cout << "l-value ref" << endl;
}
void dosome(int&& ref)
{
	cout << "r-value ref" << endl;
}
int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	//L-value references

	int& lr1 = x;			//modifiable L-values
	//int &lr2=cx;			//non-modifiable L-values
	//int &lr3=5;			//R-values 

	const int& lr4 = x;		//modifiable L-values
	const int& lr5 = cx;	//non-modifiable L-values
	const int& lr6 = 5;		//R-values 

	//R-value references

	//int &&rr1=x;			//modifiable L-values
	//int &&rr2=cx;			//non-modifiable L-values
	int&& rr3 = 5;			//R-values 

	cout << rr3 << endl;
	rr3 = 10;
	cout << rr3 << endl;

	//const int&& rr4 = x;	//modifiable L-values
	//const&& rr5 = cx;		//non-modifiable L-values
	const int&& rr6 = 5;	//R-values 

	//L/R-value reference parameters
	dosome(x);	//l-value
	dosome(5);	//r-value
	dosome(getResult());//r-value
	return 0;
}
