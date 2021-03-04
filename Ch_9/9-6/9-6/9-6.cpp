#include <iostream>
#include <cassert>
using namespace std;

class intlist
{
private:
    int m_list[10] = { 0,1,2,3,4,5,6,7,8,9 };

public:
    void setItem(int idx, int val)
    {
        m_list[idx] = val;
    }

    int getItem(int idx)
    {
        return m_list[idx];
    }

    int* getList()
    {
        return m_list;
    }

    int& operator [](const int idx)
    {
        assert(idx >= 0);
        assert(idx < 10);
        return m_list[idx];
    }
};
int main()
{
//    intlist my_list;
//    my_list[3] = 10;
//    cout << my_list[3] << endl;
    //my_list.setItem(3, 1);
    //cout << my_list.getItem(3) << endl;
    //my_list.getList()[3] = 10;
    //cout << my_list.getList()[3] << endl;

    intlist* list = new intlist;
  
  //  list[3] = 10; -> not ok
    (*list)[3] = 10;    //ok

    return 0;
}
