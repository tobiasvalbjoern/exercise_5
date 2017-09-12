/*
 * Options.cpp
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#include "Options.h"
#include <string>
#include <cstring>
#include <stdio.h>

Options::Options()
{
	argC=0;
	argV=NULL;
	optstring = "";
	count = 1;
}

Options::Options(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
	optstring = "";
	count = 1;
}

Options::Options(const Options &rhs)
{
	argC=rhs.argC;
	argV=rhs.argV;
	optstring=rhs.optstring;
	count=rhs.count;
}

Options::~Options()
{
}

void Options::setOptstring(string validopt)
{
	optstring = validopt;
}

int Options::getopt(void)
{

	for (; count < argC; count++)
	{
		for (size_t j = 0; j < optstring.size(); j++)
		{
			if (argV[count][0] == '-' && strlen(argV[count])==2 )
			{
			if(argV[count][1]==optstring[j])
					{
				count++;
				return optstring[j];
					}
				}

			}
		}

	return 0;
}

int Options::numopt(void)
{
	int number = 0;

	for (int i = 1; i < argC; i++)
	{
		for (size_t j = 0; j < optstring.size(); j++)
		{
			if (argV[i][0] == '-' && strlen(argV[i])==2 )
			{
			if(argV[i][1]==optstring[j])
					{
				number++;
					}
				}

			}
		}

		return number;
	}
