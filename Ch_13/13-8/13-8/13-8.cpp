#include <iostream>
using namespace std;
template <class T>
class A
{
private:
    T m_val;
public:
    A(const T& input) :m_val(input) {}
    template <typename TT>
    void dosome(const TT& type)
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_val << endl;
    }
    void print() { cout << m_val << endl; }
};


int main()
{
    A<char> a_int('A');
    a_int.print();

    a_int.dosome(int());
    return 0;
}
