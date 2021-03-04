#include <iostream>
using namespace std;

#define MY_NUMBER 9
#define MAX(a,b) (a>b)?a:b
#define LIKE_APPLE
int main()
{
#ifdef  LIKE_APPLE
	cout << "apple" << endl;
#else
	cout << "orange" << endl;
#endif //  LIKE_APPLE


	return 0;
}
