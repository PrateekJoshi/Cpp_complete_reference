/*
 * conversion_operator_constructor.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 */
#include <iostream>

class my_class{
	int x;

public:
	//conversion constructor
	my_class(int a=0): x{a}{
		std::cout<<"Conversion constructor called"<<std::endl;
	}

	//Conversion operator
	operator std::string(){
		std::cout<<"Conversion operator called"<<std::endl;
		return std::to_string(x);
	}
};

int main(int argc, char **argv) {
	my_class obj(3);			//conversion constructor called

	std::string str = obj;		//conversion operator called (BAD PROGRAMMING PRATICE )
	obj = 20;					//conversion constructor called  (BAD PROGRAMMING PRATICE )

	/* We will do same thing as above */

	std::string str2 = static_cast<std::string> (obj);	//conversion operator called (GOOD PROGRAMMING PRATICE )
	obj = static_cast<my_class>(20);					//conversion constructor called  (GOOD PROGRAMMING PRATICE )

	return 0;
}




