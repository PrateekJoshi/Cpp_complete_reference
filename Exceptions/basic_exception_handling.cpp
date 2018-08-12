/*
 * basic_exception_handling.cpp
 *
 *  Created on: Aug 12, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	cout<< "Start" <<endl;
	try
	{
		cout<<"Inside try block"<<endl;
		throw 100;
		cout <<"This will not execute"<<endl;
	}
	catch(int i)
	{
		cout<<" Caught an exception, value is "<<i<<endl;
	}

	cout<<"End"<<endl;
	return 0;
}



