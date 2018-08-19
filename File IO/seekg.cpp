/*
 * seekg.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Desc:
 *      This program uses seekg( ). It displays the contents of a file beginning with the
		location you specify on the command line.
 *
 */
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv) {
	char ch;

	if( argc !=3 )
	{
		std::cout<<"Cannot open file"<<std::endl;
		return 1;
	}

	/* Open stream for read/write */
	std::ifstream in(argv[1], std::ios::in | std::ios::binary );
	if(!in)
	{
		std::cout<<"Cannot open file"<<std::endl;
		return 1;
	}

	/* Put get file pointer at specified position from beginning */
	in.seekg(atoi(argv[2]),std::ios::beg);

	/* Print till EOF from current cursor position */
	while(in.get(ch))
	{
		std::cout<<ch;
	}

	return 0;
}




