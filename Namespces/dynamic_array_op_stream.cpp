/*
 * dynamic_array_op_stream.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 658
 */
#include <iostream>
#include <strstream>


int main(int argc, char **argv) {
	char *str;

	/* Create dynamic allocate array */
	std::ostrstream outs;

	outs<<" C++ array based IO ";
	outs<< -10 << std::hex;
	outs.setf(std::ios::showbase);
	outs<< 100 <<std::ends;

	/* Freeze dynamic buffer and return pointer to it */
	str = outs.str();

	std::cout<< str;

	return 0;
}




