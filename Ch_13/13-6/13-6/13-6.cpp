#include <iostream>
using namespace std;

template<class T, int size>
class StaticArray_BASE
{
private:
    T m_arr[size];
public:
    T* getArray() { return m_arr; }
    T& operator[](int idx)
    {
        return m_arr[idx];
    }

    void print()
    {
        for (int cnt = 0; cnt < size; ++cnt)
            std::cout << (*this)[cnt] << ' ';
        cout << endl;
    }
};  // member function 을 특수화 하고싶을땐 상속을 이용

template<class T, int size>
class StaticArray :public StaticArray_BASE<T,size>
{}; // 상속을 한 후

template<int size>
class StaticArray<char, size> :public StaticArray_BASE<char, size>
{
public:
    void print()
    {
        for (int cnt = 0; cnt < size; ++cnt)
            std::cout << (*this)[cnt];
        cout << endl;
    }
};  //member function 특수화

//template<int size>
//void print(StaticArray<char, size>& array)
//{
//    for (int cnt = 0; cnt < size; ++cnt)
//        std::cout << array[cnt];
//    cout << endl;
//}   // template 부분 특수화

int main()
{
    StaticArray<int, 4>int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;
    int4.print();

    StaticArray<char, 14>char14;
    strcpy_s(char14.getArray(), 14, "hello, world");

    char14.print();
}