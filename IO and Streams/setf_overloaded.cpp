/*
 * setf_overloaded.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 550
 */
#include <iostream>

int main(int argc, char **argv) {
	/*
	 * fmtflags setf(fmtflags flags1, fmtflags flags2);
	 *
	 * In this version, only the flags specified by flags2 are affected. They are first cleared and
	 then set according to the flags specified by flags1. Note that even if flags1 contains other
	 flags, only those specified by flags2 will be affected. The previous flags setting is returned.
	 *
	 */
	std::cout.setf(std::ios::showpoint | std::ios::showpos , std::ios::showpoint);

	std::cout<< 100.0 ; // diplays 100.000 not +100.000

	return 0;
}

