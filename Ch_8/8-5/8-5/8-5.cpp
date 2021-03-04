#include <iostream>
using namespace std;
class student
{
private:
	int m_id;
	string m_name;
public:
	student(const string& name_in)	
		//parameter 가 m_name 하나일 때 m_id 설정방법
		//위임 생성자
		:student(0, name_in)
	{}

	student(const int& id_in, const string& name_in)
		:m_id(id_in), m_name(name_in)
	{}
	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};
int main()
{
	student st1(0, "jack jack");
	st1.print();

	student st2("dash");
	st2.print();
	return 0;
}
