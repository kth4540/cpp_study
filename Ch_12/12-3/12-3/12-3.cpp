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

    //override: override �Ѵٰ� �ܾ�
    //final : �� �Լ� �����δ� override ���� ����
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
    //ref.print(1);   //parameter �� �ٸ���� override ��������

    b.getThis()->print(1);
    ref.getThis()->print(1);

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;

    return 0;
}
