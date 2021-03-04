#include <iostream>
#include <string>
using namespace std;

class ErrorLog	// 인터페이스 함수 : class 내부의 함수가 전부 pure virtual func
{
public:
	virtual bool reportError(const char* errorMessage) = 0;

	virtual ~ErrorLog(){}
};

class FileErrorLog :public ErrorLog
{
public:
	bool reportError(const char* errorMessage)override
	{
		cout << "writing error to a file" << endl;
		return true;
	}
};
class ConsoleErrorLog :public ErrorLog
{
public:
	bool reportError(const char* errorMessage)override
	{
		cout << "writing error to a console" << endl;
		return true;
	}
};

void dosome(ErrorLog& log)
{
	log.reportError("runtime error");
}
int main()
{
	FileErrorLog f;
	ConsoleErrorLog c;
	dosome(f);
	dosome(c);
	return 0;
}