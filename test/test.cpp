#include "cxxtelebot.h"
#include <iostream>
#include <sstream>
#include <algorithm>

// validate the content print by cxxtelebot::foo() function
int main()
{
	std::ostringstream stdoutBuffer;
	auto originalStdcoutBuffer = std::cout.rdbuf();

	std::cout.rdbuf(stdoutBuffer.rdbuf());

	// text printed onto stdoutBuffer
	cxxtelebot::foo();

	std::string foundStr = stdoutBuffer.str();
	foundStr.erase(std::remove_if(foundStr.begin(), foundStr.end(), [](unsigned char x) { return x == '\r' || x == '\n'; }), foundStr.end());

	bool result = foundStr == "cxxtelebot hello world";

	// restore original buffer pointer back to std::cout
	std::cout.rdbuf(originalStdcoutBuffer);

	// these two lines will appear in meson-logs/testlog.txt 
	std::cout << "Found: " << foundStr << std::endl;
	std::cout << "Expect: cxxtelebot hello world" << std::endl;

	return result == true ? 0 : 1;
}
