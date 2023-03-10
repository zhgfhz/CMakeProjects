#include <iostream>
#include <map>
#include <string>
class TestSession
{
public:
	TestSession(){}
	int getTime() { return 1; }
};

typedef std::map<std::string, TestSession*>		sessionMap;

int main(int argc, char* argv[])
{
	sessionMap testmap;
	if (argc > 1)
		return 1;
	int test = testmap["1"]->getTime();
	std::cout << "Hello World!" << std::endl;

	return 0;
}