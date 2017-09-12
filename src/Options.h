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
	Options();
	Options(int argc, const char **argv);
	Options(const Options &rhs);
	~Options();
	void setOptstring(string validopt);
	int getopt(void);
	int numopt(void);

private:
	int argC,count;
	char **argV;
	string optstring;
};

#endif /* OPTIONS_H_ */
