#include <iostream>
#include "interpreter.h"

using namespace std;

int main()
{
	std::string line;
	Interpreter iP(false);

	while(true) {
		std::getline (std::cin, line);

		iP.execute(line);
		if(iP.is_done())
			break;
	}

	return 0;
}

