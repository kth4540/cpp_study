#include <iostream>
using namespace std;

struct person
{
    int age;
    double weight;
};

int main()
{
    person p;
    p.age = 5;
    p.weight = 30;

    person& ref = p;
    ref.age = 15;

    person* ptr = &p;
    ptr->age = 30;
    (*ptr).age = 20;

    cout << &p << endl;
    cout << &ref << endl;

    return 0;
}
