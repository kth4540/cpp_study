#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;

    /*logical and*/

    //cout << (x && y) << endl;

    //bool hit = true;
    //int health = 10;

    //if (hit == true && health < 20)
    //    cout << "die" << endl;
    //else
    //    health -= 20;

    /*logical or*/

    //cout << (x || y) << endl;

    //int a = 5;
    //int b = 7;
    //if (!(x == y))
    //    cout << "x does not equal y" << endl;
    //else
    //    cout << "x equals y" << endl;

    //if (a == 4 && b++ == 7) // ������ false�� �������� ��� ���� �Ѿ
    //{

    //}
    //cout << b << endl;

    /* de morgan's law*/
    !(x && y);  // !x||!y;

    /*XOR*/
    //false false -> false
    //false true -> true
    //true false -> true
    //true true -> false


    return 0;
}