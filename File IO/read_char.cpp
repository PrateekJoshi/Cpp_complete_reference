/*
 * read_char.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: prateek
 *      Pg: 581
 */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	char ch;

	if( argc !=2 )
	{
		std::cout<<"Enter a filename to read "<<std::endl;
	}

	/* Open stream to read file in binary mode */
	std::ifstream in(argv[1],std::ios::in | std::ios::binary);

	/* Read till EOF is reached */
	while( in.get(ch) )
	{
		std::cout<<ch;
	}

	return 0;
}




