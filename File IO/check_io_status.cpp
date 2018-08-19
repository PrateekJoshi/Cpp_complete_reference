/*
 * check_io_status.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Pg: 596
 *      Desc:
 *      The following program illustrates rdstate( ). It displays the contents of a text file.
		If an error occurs, the program reports it, using checkstatus( ).
 *
 */
#include <iostream>
#include <fstream>

void checkstatus(std::ifstream &in)
{
	std::ios::iostate state;

	state = in.rdstate();		//read io state

	if( state & std::ios::eofbit )
	{
		std::cout<<"EOF encountered" <<std::endl;
	}
	else if( state & std::ios::failbit )
	{
		std::cout<<"Non-fatal I/O error "<<std::endl;
	}
	else if ( state & std::ios::badbit )
	{
		std::cout<<"Fatal I/O error "<<std::endl;
	}
}

int main(int argc, char **argv)
{
	if( argc!=2 )
	{
		std::cout<<"Usage: ./binary <filename> "<<std::endl;
		return 1;
	}

	std::ifstream in(argv[1]);

	if( !in )
	{
		std::cout<<"Cannot open input file "<<std::endl;
		return 1;
	}

	char ch;

	/* read chars from file and check io state */
	while( in.get(ch) )
	{
		if(in)
			std::cout<<ch;
		checkstatus(in);
	}

	checkstatus(in);		//check final status

	in.close();

	return 0;
}





