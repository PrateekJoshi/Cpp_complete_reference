/*
 * reverse_num_file.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 */
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv)
{
	if( argc!=3 )
	{
		std::cout<<"Usage: ./binary <filename> <num >"<<std::endl;
		return 1;
	}

	/* open read/write stream */
	std::fstream inout(argv[1], std::ios::in | std::ios::out | std::ios::binary);

	if( !inout )
	{
		std::cout<<"Canoot open input file "<<std::endl;
		return 1;
	}

	long offset, i,j;
	char c1,c2;
	offset = atol(argv[2]);

	for(i=0 , j=offset ; i<j ; i++, j--)
	{
		/* read first and last char */
		inout.seekg(i,std::ios::beg);	//put file get cursor to position i from beginning
		inout.get(c1);					//read char from file get cursor position
		inout.seekg(j,std::ios::beg);	//put file get cursor to positon j from beginning
		inout.get(c2);					//read char from file get cursor position

		/* replace first and last */
		inout.seekp(i,std::ios::beg); 	//put file put cursor to position i from beginning
		inout.put(c2);					//write char from file put cursor position
		inout.seekp(j,std::ios::beg);	//put file put cursor to positon j from beginning
		inout.get(c1);					//write char from file put cursor position
	}

	inout.close();
	return 0;

}




