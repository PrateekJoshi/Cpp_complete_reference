/*
 * linkage_specification.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 652
 */
#include <iostream>

extern "C" void my_C_func();

int main(int argc, char **argv) {
	my_C_func();
	return 0;
}

/* This will link as a C function */
void my_C_func()
{
	std::cout<<"This links as a C function"<<std::endl;
}



