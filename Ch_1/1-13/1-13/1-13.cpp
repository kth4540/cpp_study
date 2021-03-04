#include <iostream>
using namespace std;

namespace myspace1
{
    int dosomething(int a, int b)
    {
        return a + b;
    }
}
int dosomething(int a, int b)
{
    return a * b;
}

int main()
{
    cout << dosomething(3, 4) << endl;
    cout << myspace1::dosomething(3, 4) << endl;
    return 0;
}
