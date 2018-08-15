/*
 * unsetf.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 549
 */
#include <iostream>

int main(int argc, char **argv) {
	/* set scientific and uppercase display flag */
	std::cout.setf(std::ios::uppercase | std::ios::scientific);
	std::cout << 100.12<<std::endl;

	/* Unset scientific and uppercase display flag */
	std::cout.unsetf(std::ios::uppercase | std::ios::scientific);
	std::cout<<100.12<<std::endl;

	return 0;
}




