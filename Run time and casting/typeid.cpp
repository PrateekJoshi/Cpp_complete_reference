/*
 * typeid.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Pg : 603
 *      Get the type of object or variable at run time and compare their types.
 */

#include <iostream>
#include <typeinfo>

class myclass1{

};

class myclass2{

};

int main(int argc, char **argv)
{
	int i,j;
	float f;
	char *p;
	myclass1 obj1;
	myclass2 obj2;

	std::cout<<"The type of i is: "<<  typeid(i).name();			// i : int , *i : Pi
	std::cout<<std::endl;
	std::cout<<"The type of f is: "<<  typeid(f).name();
	std::cout<<std::endl;
	std::cout<<"The type of p is: "<<  typeid(p).name();
	std::cout<<std::endl;

	std::cout<<"The type of obj1 is: "<<  typeid(obj1).name();
	std::cout<<std::endl;
	std::cout<<"The type of obj2 is: "<<  typeid(obj2).name();
	std::cout<<std::endl;

	if( typeid(i) == typeid(j)  )
	{
		std::cout<<"the types of i and j are same "<<std::endl;
	}

	if( typeid(i) != typeid(f) )
	{
		std::cout<<"the types of i and f are not same"<<std::endl;
	}

	if( typeid(obj1) != typeid(obj2) )
	{
		std::cout<<"obj1 and obj2 are of diffreent types "<<std::endl;
	}

	return 0;
}





