#include <iostream>
using namespace std;

class some
{
public:
    static const int m_val=1;
};

//int some::m_val = 1;

int main()
{
    cout << &some::m_val << " " << some::m_val << endl;

    some st1;
    some st2;
 //   st1.m_val = 2;
    cout << &st1.m_val << " " << st1.m_val << endl;
    cout << &st2.m_val << " " << st2.m_val << endl;

    return 0;
}
