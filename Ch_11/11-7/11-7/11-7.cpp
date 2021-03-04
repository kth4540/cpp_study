#include <iostream>
using namespace std;

class base
{
protected:
    int m_i;
public:
    base(int val)
        :m_i(val) {}

    void print()
    {
        cout << "i'm base" << endl;
    }
    friend std::ostream& operator<<(std::ostream& out, const base& b)
    {
        cout << "this is base output" << endl;
        return out;
    }
};

class derived : public base
{
private:
    double m_d;
public:
    derived(int val)
        :base(val) {}

    void print()
    {
        base::print();
        cout << "i'm derived" << endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const derived& b)
    {
        cout << static_cast<base>(b);
        out << "this is derived output" << endl;
        return out;
    }
};
int main()
{
    base b(5);
    cout << b;
//
    derived d(7);
    cout << d;
//
    return 0;
}
