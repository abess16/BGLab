#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector> 
#include <iterator>

using namespace std;

class Interpreter {
public:
	Interpreter::Interpreter(bool done);
	void execute(std::string line);
	bool is_done();

private:
	bool done;
	string name;
};
