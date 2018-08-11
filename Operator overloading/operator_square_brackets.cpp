/*
 * overator_square_brackets.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */
#include <iostream>

using namespace std;

class MyClass{
	int a[3];
public:
	MyClass(int i,int j ,int k)
	{
		a[0]=i;
		a[1]=j;
		a[2]=k;
	}

	/* Overloading [] opeartor */
	int& operator [] (int index)
	{
		if( index<0 || index>2)
		{
			cout<<" Boundary error \n";
			exit (1);
		}
		return a[index];
	}
 };


int main(int argc, char **argv) {
	MyClass obj(1,2,3);

	cout<< "obj[1]: "<<obj[1] <<endl;

	obj[1] = 25;	// stores a[1] = 25
	cout<< "obj[1] : "<<obj[1]<<endl;

	obj[3]=44;		//generate out of range error
}



