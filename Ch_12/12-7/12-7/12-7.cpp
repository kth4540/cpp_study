#include <iostream>
#include <string>
using namespace std;
class Animal
{
protected:
	string m_name;
public:
	Animal(string name)
		:m_name(name) {}
	string getName() { return m_name; }
	
	virtual void speak()const = 0;	//pure virtual function
	//함수명 앞에 const : return 값이 상수임
	//함수명 뒤에 const : class 에서만 사용 가능, 멤버 변수의 값이 변하지 않음
};

class Dog :public Animal
{
public:
	Dog(string name)
		:Animal(name) {}

	void speak() const
	{
		cout << m_name << "woof" << endl;
	}
};

class Cow :public Animal
{
public:
	Cow(string name)
		:Animal(name) {}
	void speak() const
	{
		cout << "mooo" << endl;
	}

};

int main()
{
//	Animal ani("HI"); class에 순수 가상 함수가 있으면 변수를 만들 수 없음
	Cow cow("hello");
	cow.speak();
	return 0;
}
