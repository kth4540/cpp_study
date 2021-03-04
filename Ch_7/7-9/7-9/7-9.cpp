#include <iostream>
#include <array>
#include <functional>
using namespace std;
int func()
{
    return 5;
}

int goo()
{
    return 10;
}

bool isodd(const int& num)
{
    if (num % 2 != 0)
        return true;
    else
        return false;
}
bool iseven(const int& num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}
void printnum(const array<int, 10>& arr,bool(*check)(const int&))
{
    for (auto element : arr)
        if (check(element) == true)
            cout << element << endl;
}
int main()
{
    //int (*fcnptr)() = func;
    //cout << fcnptr() << endl;
    //fcnptr = goo;
    //cout << fcnptr() << endl;

    array<int, 10>my_arr = { 1,2,3,4,5,6,7,8,9,10 };
   

    function<bool(const int&)> fcnptr=iseven;

    printnum(my_arr,iseven);
    printnum(my_arr, isodd);
    return 0;
}
