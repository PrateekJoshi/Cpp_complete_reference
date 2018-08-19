/*
 * write_char.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: prateek
 *      Pg: 581
 */
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	int i;
	std::ofstream out("random_file.txt",std::ios::binary | std::ios::out);

	if( !out )
	{
		std::cout<<"Cannot open output file "<<std::endl;
		return 1;
	}

	/* Write all characters to disk */
	for( i=0 ; i<256 ; i++ )
	{
		out.put((char)i);
	}

	out.close();

	return 0;
}



