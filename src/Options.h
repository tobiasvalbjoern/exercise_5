/*
 * Options.h
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_
#include <string>
//always remember to use this.
using namespace std;
class Options
{
public:
	//default constructor
	Options();
	//explicit constructor
	Options(int argc, const char **argv);

	//copy constructor
	Options(const Options &rhs);

	//destructor
	~Options();

	//This is used to copy the validoptions to our class
	void setOptstring(string validopt);

	//returns the found valid options
	int getopt(void);

	//counts the number of valid options
	int numopt(void);

private:
	int argC,count;
	char **argV;
	string optstring;
};

#endif /* OPTIONS_H_ */
