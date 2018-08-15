/*
 * setiosflags.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 559
 *      The manipulator setiosflags( ) performs the same function as the member function
 	 	 setf( ).
 *
 */
#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
	std::cout << std::setiosflags(std::ios::showpos);
	std::cout << std::setiosflags(std::ios::showbase);
	std::cout << 123 <<" " << std::hex <<123;

	return 0;
}

