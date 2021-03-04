#include <iostream>
#include <string>
using namespace std;
class animal
{
protected:
    string m_name;
public:
    animal(std::string name)
        :m_name(name) {}

    string getName() { return m_name; }

    virtual void speak() const
    {
        cout << m_name << " ??? " << endl;
    }
};
class cat :public animal
{
public:
    cat(string name)
        :animal(name) {}

    void speak()const
    {
        cout << m_name << "meow" << endl;
    }
};

class dog :public animal
{
public:
    dog(string name)
        :animal(name) {}
    void speak()const
    {
        cout << m_name << "woof" << endl;
    }
};
int main()
{
    //animal a("my animal");
    //cat c("my cat");
    //dog d("my dog");

    //a.speak();
    //c.speak();
    //d.speak();

    //animal* ptr_animal1 = &c;  
    //animal* ptr_animal2 = &d;
    //ptr_animal1->speak();
    //ptr_animal2->speak();
    //�ڽ� Ŭ������ �θ� Ŭ���� �����ͷ� ĳ�����ؼ� ȣ���ϸ� �θ� Ŭ����ó�� Ȱ���

    cat cats[] = { cat("c1"),cat("c2"), cat("c3"), cat("c4"), cat("c5") };
    dog dogs[] = { dog("d1"),dog("d2") };

    animal* my_animals[] = { &cats[0],&cats[1], &cats[2], &cats[3], &cats[4],
    &dogs[0],&dogs[1] };

    for (int i = 0; i < 7; ++i)
        my_animals[i]->speak();
}
