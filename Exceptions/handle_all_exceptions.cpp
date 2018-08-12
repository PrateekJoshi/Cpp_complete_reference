#include <iostream>

using namespace std;

void Xhandler(int test)
{
	try
	{
		if( test == 0 )
			throw test;			//throw int
		if( test == 1 )
			throw 'a';			//throw char
		if( test ==2 )
			throw 123.33;		//throw double
	}
	catch(...)					//catch all exceptions
	{
		cout<<"Caught One !"<<endl;
	}
}


int main(int argc, char **argv) {
	cout<<"Start "<<endl;
	Xhandler(0);
	Xhandler(1);
	Xhandler(2);
	cout<<"End "<<endl;
	return 0;
}
