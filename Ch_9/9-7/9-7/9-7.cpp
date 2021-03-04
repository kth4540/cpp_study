#include <iostream>
using namespace std;
class accum
{
private:
	int m_cnt = 0;
public:
	int operator()(int i) { return (m_cnt+=i); }
};
int main()
{
	accum acc;
	cout << acc(10) << endl;
	cout << acc(20) << endl;
	return 0;
}
