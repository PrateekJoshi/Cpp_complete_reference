/*
 * restrict_exception.cpp
 *
 *  Created on: Aug 12, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

/*
 * This function can only throw ints, chars and doubles.
 * Otherwise program will abruptly terminate.
 */
void Xhandler(int test) throw (int, char, double)
{
	if( test == 0 )
		throw test;			//throw int
	if( test == 1 )
		throw 'a';			//throw char
	if( test == 2 )
		throw 123.33;		//throw double
}

int main(int argc, char **argv)
{
	cout<<"Start "<<endl;
	try
	{
		Xhandler(0);
	}
	catch(int i)
	{
		"Caught an integer";
	}

	return 0;
}

