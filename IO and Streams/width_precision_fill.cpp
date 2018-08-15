/*
 * width_precision_fill.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 555
 *
 */

#include <iostream>

int main(int argc, char **argv)
{
	std::cout.precision(4);
	std::cout.width(10);

	std::cout<<10.12345<<std::endl;			//displays 10.12

	std::cout.fill('*');

	std::cout.width(10);
	std::cout<<10.12345<<std::endl;			//displays *****10.12

	//filed width applies to strings too
	std::cout.width(10);
	std::cout<<"Hi "<<std::endl;
	std::cout.width(10);
	std::cout.setf(std::ios::left);			//left justify
	std::cout<<10.12345;					//displays 10.12*****

	return 0;
}




