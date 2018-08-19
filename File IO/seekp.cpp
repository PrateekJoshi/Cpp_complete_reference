/*
 * seekp.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Desc:
 *      This program change the twelfth character of a file called TEST to a Z.
 *      There are two file pointers associated with a file:
 *      1) Get file pointer		: 	Position from which file characters is read (get)
 *      2) Put file pointer 	:	Position from which file characters are written (put)
 *
 */
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv)
{
	if(argc !=4 )
	{
		std::cout<<"Usage: seep.o <filename> <character pos> <char>"<<std::endl;
		return 1;
	}

	/* Open strream for read/write */
	std::fstream out(argv[1],std::ios::in | std::ios::out | std::ios::binary );
	if(!out)
	{
		std::cout<<"Cannot open file "<<std::endl;
		return 1;
	}

	/* It will put file pointer to 12th character from beginning */
	out.seekp(atoi(argv[2]),std::ios::beg);

	/* Put a character at current cursor position */
	out.put(*argv[3]);

	out.close();

	return 0;
}




