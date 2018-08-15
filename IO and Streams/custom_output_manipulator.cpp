/*
 * custom_manipulator.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      As a simple first example, the following program creates a manipulator called
 sethex( ), which turns on the showbase flag and sets output to hexadecimal.
 *
 */
#include <iostream>

/* A simple output manipulator */
std::ostream& set_hex(std::ostream &stream)
{
	stream.setf(std::ios::showbase);
	stream.setf(std::ios::hex,std::ios::basefield);
	return stream;
}

/* Right arrow stream manipulator */
std::ostream& right_arrow(std::ostream &stream)
{
	stream << "---->";
	return stream;
}

/* Left arrow stream manipulator */
std::ostream& left_arrow(std::ostream &stream)
{
	stream << "<----";
	return stream;
}




int main(int argc, char **argv) {
	std::cout<< 256 << " "<< set_hex <<256<<std::endl;

	std::cout<<"Left arrow is : "<<left_arrow<<std::endl;

	std::cout<<"Right arrow is : "<<right_arrow<<std::endl;

	return 0;
}

