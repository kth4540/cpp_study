#include <iostream>
#include <array>
#include "Storage.h"
using namespace std;

template <typename T>
class A
{
public:
    A(const T& input) {}
    void dosome()
    {
        cout << typeid(T).name() << endl;
    }
    void test() {}
};

template<>
class A<char>
{
public:
    A(const char& input) {}
    void dosome()
    {
        cout << "char type specialization" << endl;
    }
};  //class specialization
int main()
{
    //A<int> a_int(1);
    //A<double> a_double(3.14);
    //A<char> a_char('a');

    //a_int.dosome();
    //a_double.dosome();
    //a_char.dosome();

 //   a_char.test();    -> 사실상 다른 class임

    Storage8<int> intStorage;

    for (int cnt = 0; cnt < 8; ++cnt)
        intStorage.set(cnt, cnt);

    for (int cnt = 0; cnt < 8; ++cnt)
        std::cout << intStorage.get(cnt) << std::endl;

    cout << "sizeof Storage8<int> " << sizeof(Storage8<int>);

    Storage8<bool> boolStorage;
    for (int cnt = 0; cnt < 8; ++cnt)
        boolStorage.set(cnt, false);

    for (int cnt = 0; cnt < 8; ++cnt)
        std::cout <<boolalpha<< boolStorage.get(cnt) << std::endl;

    cout << "sizeof Storage8<bool> " << sizeof(Storage8<bool>);


    return 0;
}
