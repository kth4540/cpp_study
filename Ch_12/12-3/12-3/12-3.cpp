#include <iostream>
using namespace std;
class A
{
public:
    void print(int x) { cout << "A" << endl; }
    virtual A* getThis()
    {
        cout << "A::getThis()" << endl;
        return this;
    }
};
class B :public A
{
public:
    void print(int x) { cout << "B" << endl; }
     virtual B* getThis()
    {
        cout << "B::getThis()" << endl;
        return this; 
    }

    //override: override 한다고 단언
    //final : 이 함수 밑으로는 override 하지 않음
};
class C :public B
{
public:
    void print() { cout << "B" << endl; }
};
int main()
{
    A a;
    B b;

    A& ref = b;
    //ref.print(1);   //parameter 가 다를경우 override 되지않음

    b.getThis()->print(1);
    ref.getThis()->print(1);

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;

    return 0;
}
