#include <iostream>
using namespace std;

enum frtype
{
	apple,banana,cherry
};

class fruit
{
public:
	enum frtype
	{
		apple, banana, cherry
	};

	class innerclass
	{

	};
private:
	frtype m_type;

public:
	fruit(frtype type) :m_type(type)
	{}

	frtype gettype() { return m_type; }
};
int main()
{
	fruit ap(fruit::apple);

	if (ap.gettype() == fruit::apple)
	{
		cout << "apple" << endl;
	}
	return 0;
}
