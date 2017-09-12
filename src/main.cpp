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

	Options *obj;
	obj=new Options(argc,(const char**) argv);
	opt=*obj;

	opt.setOptstring(validOpt);
	cout << "Number of valid options on command line: " << opt.numopt()
			<< endl;
	int cnt = opt.numopt();
	for (int i = 0; i < cnt; i++)
	{
		cout << "Found match: -" << (char) opt.getopt() << endl;
	}

	return 0;
}
