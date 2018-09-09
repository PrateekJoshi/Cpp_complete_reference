/*
 * array_input_op_stream.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 657
 */
#include <iostream>
#include <strstream>

int main(int argc, char **argv)
{
	char iostr[80];

	/* create i/n o/p array stream */
	std::strstream strio(iostr, sizeof(iostr), std::ios::in | std::ios::in);

	int a,b;
	char str[80];

	strio << "10 20 testing";
	strio>> a >> b >> str;
	std::cout<< a << " "<< b<< str<< std::endl;

	return 0;
}





