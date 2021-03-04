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
	//�Լ��� �տ� const : return ���� �����
	//�Լ��� �ڿ� const : class ������ ��� ����, ��� ������ ���� ������ ����
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
//	Animal ani("HI"); class�� ���� ���� �Լ��� ������ ������ ���� �� ����
	Cow cow("hello");
	cow.speak();
	return 0;
}
