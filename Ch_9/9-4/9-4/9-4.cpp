#include <iostream>
#include <vector>
#include <random>
using namespace std;
class cents
{
private:
	int m_cents;
public:
	cents(int cents = 0) { m_cents = cents; }
	int getCents()const { return m_cents; }
	int& getCents() { return m_cents; }

	friend ostream& operator <<(ostream& out, const cents& c)
	{
		out << c.m_cents;
		return out;
	}

	friend bool operator ==(const cents& c1, const cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator < (const cents& c1, const cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}
};
int main()
{
	//cents cents1(6);
	//cents cents2(6);

	//if (cents1 == cents2)
	//	cout << "equal" << endl;

	vector<cents> arr(20);
	for (unsigned int i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	random_device rd;
	mt19937 g(rd());
	shuffle(arr.begin(), arr.end(), g);

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	sort(begin(arr), end(arr));
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
