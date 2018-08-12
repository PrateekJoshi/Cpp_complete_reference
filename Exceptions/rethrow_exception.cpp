/*
 * rethrow_exception.cpp
 *
 *  Created on: Aug 12, 2018
 *      Author: prateek
 */
#include <iostream>

using namespace std;

void Xhandler()
{
	try
	{
		throw "Hello";		//throw a char*
	}
	catch(const char*)
	{
		cout<< "Caught char* inside Xhandler"<<endl;
		throw ;				//rethrow char* out of function
	}
}

int main(int argc, char **argv)
{
	cout<<"Start"<<endl;
	try
	{
		Xhandler();
	}
	catch(const char*)
	{
		cout<<"Caught char* inside main"<<endl;
	}
	cout<<"End"<<endl;

	return 0;
}





