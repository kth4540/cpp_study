#include <iostream>
#include <string>
#include <vector>
using namespace std;
class date
{
private:
	int m_month;
	int m_day;
	int m_year;
public:
	void setDate(const int& month, const int& day, const int& year)
	{
		m_month = month;
		m_year = year;
		m_day = day;
	}

	void setmonth(const int& month)
	{
		m_month = month;
	}

	const int& getday()
	{
		return m_day;
	}

	void copyfrom(const date& orig)
	{
		m_month = orig.m_month;
		m_day = orig.m_day;
		m_year = orig.m_year;
	}
};

int main()
{
	date today;
	today.setDate(8, 4, 2025);
	cout << today.getday() << endl;;

	date copy;
	copy.copyfrom(today);
	//copy와 today는 같은 다른 변수지만 같은 class이므로 접근 가능

	return 0;
}
