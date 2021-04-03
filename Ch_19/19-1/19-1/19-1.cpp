#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Object
{
public:
    void hello(const string& s)
    {
        cout << "hello " << s << endl;
    }
};
void goodbye(const string& s)
{
    cout << "goodbye " << s << endl;
}
int main()
{
    //lambda-introducer
    //lambda-parameter-declaration
    //lambda-return-type-clause
    //compound-statement
    auto func = [](const int& i)->void {cout << "hello world" << endl; };

    func(123);
    [](const int& i)->void {cout << "hello world" << endl; }(1234);

    {
        string name = "jackjack";
        [&]() {cout << name << endl; }();
        // [] 안에 &-> reference, = -> copy
    }
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    auto func2 = [](int val) {cout << val << endl; };
    for_each(v.begin(), v.end(), func2);

    cout << []()->int {return 1; }() << endl;

    function<void(int)> func3 = func2;
    func3(123);

    function<void()>func4 = bind(func3, 456);//-> parameter를 456으로 고정
    func4();

    {
        Object instance;
        auto f = bind(&Object::hello, &instance, placeholders::_1);

        f("world");

        auto f2 = bind(&goodbye, &instance, placeholders::_1);
    }
}
