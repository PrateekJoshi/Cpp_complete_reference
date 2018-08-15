/*
 * setf_overloaded2.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 551
 */
#include <iostream>

int main(int argc, char **argv) {
	/*
	 * Here, the basefield flags (i.,e., dec, oct, and hex) are first cleared and then the hex flag
	 is set.
	 *
	 */
	std::cout.setf(std::ios::hex,std::ios::basefield);
	std::cout<<100; //diplays 64
	std::cout<<sizeof(long);
	return 0;
}

