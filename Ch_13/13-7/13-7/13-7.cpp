#include <iostream>
using namespace std;
template <class T>
class A
{
private:
    T m_val;
public:
    A(const T& input) :m_val(input) {}
    void print() { cout << m_val << endl; }
};

template <class T>
class A<T*>
{
private:
    T* m_val;
public:
    A(T* input) :m_val(input) {}
    void print() { cout << *m_val << endl; }
};

int main()
{
    A<int> a_int(123);
    a_int.print();

    int tmp = 456;

    A<int*> a_int_ptr(&tmp);
    a_int_ptr.print();

    double dtmp = 3.14;
    A<double*> a_double_ptr(&dtmp);
    a_double_ptr.print();
}
