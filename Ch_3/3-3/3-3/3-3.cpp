#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 6, y = 6;
    cout << x << " " << y << endl;
    cout << x++ << " " << y++ << endl;
    cout << --x << " " << --y << endl;

    return 0;
}
