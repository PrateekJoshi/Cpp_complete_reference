/*
 * setf.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 */
#include <iostream>

int main(int argc, char **argv) {
	std::cout.setf(std::ios::showpoint);		//show decimal
	std::cout.setf(std::ios::showpos);			//show + or - sign
	std::cout<<100.0<<std::endl;
	return 0;
}




