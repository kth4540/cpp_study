#include <iostream>
using namespace std;

class mother
{
protected:
    int m_i;
public:
    mother(const int& i_in = 0)
        :m_i(i_in)
    {
        cout << "mother construction" << endl;
    }
    ~mother()
    {
        cout << "mother destruction" << endl;
    }
};

class child:public mother
{
    double m_d;
public:
    child()
        :m_d(1.0), mother(1024) 
    {
        cout << "child construction" << endl;
    }
    ~child()
    {
        cout << "child destruction" << endl;
    }
};
int main()
{
    child c1;

    cout << sizeof(mother) << endl;
    cout << sizeof(child) << endl;  //
    return 0;
}
