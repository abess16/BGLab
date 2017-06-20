#include "interpreter.h"

Interpreter::Interpreter(bool done)
{
	this->done = done;
	this->name = "";
}

void Interpreter::execute(std::string line)
{
	std::vector<string> tokens;

	istringstream iss(line);

	copy(	istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(tokens));

	cout<<"Command: "<<tokens[0]<<endl;
  

	for(int i=1; i<tokens.size(); i++) {
		cout<<tokens[i]<<" ";
	}
	cout<<endl;

	if(tokens[0] == "name") {
		this->name = tokens[1];
	}

	if(tokens[0] == "hello") {
		if(this->name=="")
			cout<<"hello, world"<<endl;
		else
			cout<<"hello, "<<this->name<<endl;
	}

	if(tokens[0] == "bye") {
		done = true;

		if(this->name=="")
			cout<<"bye, world"<<endl;
		else
			cout<<"bye, "<<this->name<<endl;
	}
}

bool Interpreter::is_done()
{
	return done;
}
