/*
 * integer_manipulation.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Description : Stream manipulators - integer
 */

#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	int num {255};

	/* Displaying using different bases */
	std::cout<<"\n--------------------Displaying using different bases ------------------------------\n"<<std::endl;
	std::cout<<std::dec<<num<<std::endl;
	std::cout<<std::hex<<num<<std::endl;
	std::cout<<std::oct<<num<<std::endl;

	/* Displaying with showing base */
	std::cout<<"\n----------------------Displaying with showing base----------------------------\n"<<std::endl;
	std::cout<<std::showbase;
	std::cout<<std::dec<<num<<std::endl;
	std::cout<<std::hex<<num<<std::endl;
	std::cout<<std::oct<<num<<std::endl;

	/* Dispalying hex values in uppercase */
	std::cout<<"\n-----------------------Displaying hex values in uppercase--------------------------\n"<<std::endl;
	std::cout<< std::showbase<< std::uppercase;
	std::cout<<std::hex<<num<<std::endl;

	/* Displaying the +sign in front of base 10 numbers */
	std::cout<<"\n----------------------Displaying the +sign in front of base 10 numbers---------------------\n"<<std::endl;
	std::cout<<std::showpos;
	std::cout<<std::dec<<num<<std::endl;
	std::cout<<std::hex<<num<<std::endl;
	std::cout<<std::oct<<num<<std::endl;

	/* Alternate way: setting using the set method */
	std::cout.setf(std::ios::showbase);
	std::cout.setf(std::ios::uppercase);
	std::cout.setf(std::ios::showpos);

	/* Reseting to defaults */
	std::cout<<std::resetiosflags(std::ios::basefield);		//decimal
	std::cout<<std::resetiosflags(std::ios::showbase);		//do not show base
	std::cout<<std::resetiosflags(std::ios::showpos);		//do not show +ve sign
	std::cout<<std::resetiosflags(std::ios::uppercase);		//do not show uppercase hex digits

	std::cout<<"\n--------------------Displaying after reseting to defaults ------------------------------\n"<<std::endl;
	std::cout<<std::dec<<num<<std::endl;
	std::cout<<std::hex<<num<<std::endl;
	std::cout<<std::oct<<num<<std::endl;
	return 0;
}





