/*
 * class_type_exception.cpp
 *
 *  Created on: Aug 12, 2018
 *      Author: prateek
 */

#include <iostream>
#include <cstring>

using namespace std;

class MyException{
public:
	char str_what[80];
	int what;

	MyException()
	{
		*str_what = 0;
		what = 0;
	}

	MyException(char *s,int e)
	{
		strcpy(str_what,s);
		what = e;
	}
};


int main(int argc, char **argv) {
	int i;
	try
	{
		cout<<"Enter a positive number: ";
		cin >> i;
		if( i<0 )
		{
			throw MyException("Not positive",i);
		}
	}
	catch(MyException ex)
	{
		cout<<ex.str_what<<endl;
		cout<<ex.what<<endl;
	}
}



