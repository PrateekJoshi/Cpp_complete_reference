/*
 * terminate_handler.cpp
 *
 *  Created on: Aug 12, 2018
 *      Author: prateek
 */
#include <iostream>
#include <exception>

using namespace std;

void my_terminate_handler()
{
	cout<<"Inside new terminate handler"<<endl;
	abort();
}

int main(int argc, char **argv)
{
	//Set a new terminate handler
	set_terminate(my_terminate_handler);

	try
	{
		cout<<"Inside try block"<<endl;
		throw 100;			//thow an int error
	}
	catch(double ex)			//won't catch an int exception
	{
		cout<<"Catched double exception"<<endl;
	}

	return 0;
}





