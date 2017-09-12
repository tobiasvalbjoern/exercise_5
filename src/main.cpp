//============================================================================
// Name        : Exercise4.cpp
// Author      : Tobias Valbjørn
// Version     :
// Copyright   : Free for all
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Options.h"

using namespace std;

Options opt;
int main(int argc, char** argv)
{
	string validOpt = "abo";

	//create a pointer to an object
	Options *obj;

	//Allocate memory in the heap and make obj point to it.
	obj=new Options(argc,(const char**) argv);

	//copy the dynamic object to the global object, so we can use the global
	//object in a greater scope.
	opt=*obj;

	//send the information about valid options
	opt.setOptstring(validOpt);
	cout << "Number of valid options on command line: " << opt.numopt()
			<< endl;

	//we save the number of valid options on the command line here,
	//so we don't have to run through numopt in every iteration in our for
	//loop
	int cnt = opt.numopt();

	//
	for (int i = 0; i < cnt; i++)
	{
		//prints the matches.
		cout << "Found match: -" << (char) opt.getopt() << endl;
	}

	return 0;
}
