#include <iostream>
using namespace std;
class Base
{
public:
    Base() {}

    virtual std::ostream& print(std::ostream& out)const
    {
        out << "Base";
        return out;
    }

    friend std::ostream& operator << (std::ostream& out, const Base& b)
    {
        return b.print(out);
    }
 
};
class Derived :public Base
{
public:
    Derived() {}

    virtual std::ostream& print(std::ostream& out)const override
    {
        out << "derived";
        return out;
    }
};
int main()
{
    Base b;
    cout << b << '\n';

    Derived d;
    cout << d << '\n';

    Base& bref = d;
    cout << bref << '\n';

    return 0;
}