/*
 * reinterpret_cast.cpp
 *
 *  Created on: Aug 23, 2018
 *      Author: prateek
 *      Refer: https://youtu.be/JBvEfB_F66o?list=PLk6CEY9XxSIC6I_HCjMTGf8eV2Ty0a19E
 */
#include <iostream>

typedef struct
{
	int x;
	int y;
	char c;
	bool b;
}myType;

int main(int argc, char **argv) {
	myType my_type;
	my_type.x=5; my_type.y=10; my_type.c ='a' ;  my_type.b = true;

	int *p = reinterpret_cast<int*> (&my_type);
	std::cout<< *p <<std::endl;
	p++;
	std::cout<< *p <<std::endl;
	p++;
	char *c = reinterpret_cast<char*> (p);
	std::cout<<*c<<std::endl;
	std::cout<<*( reinterpret_cast<bool*> (++c)) <<std::endl;

	return 0;
}



