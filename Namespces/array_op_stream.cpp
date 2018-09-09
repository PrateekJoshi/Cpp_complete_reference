/*
 * array_op_stream.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 653
 */
#include <iostream>
#include <strstream>

int main(int argc, char **argv)
{
	char str[80];

	std::ostrstream outs(str,sizeof(str));

	outs<<"C++ array based I/O";
	outs<<std::hex;
	outs.setf(std::ios::showbase);
	outs<<100<<" "<<99.78<<std::ends;

	std::cout<<str<<std::endl;
	std::cout<<outs.pcount()<<std::endl;	//display no of chars in outs stream
	return 0;
}




