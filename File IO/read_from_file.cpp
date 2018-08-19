/*
 * read_from_file.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: prateek
 *      Pg: 577
 */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream in("inventory.txt");	//input
	char item[20];
	float cost;

	/* Check if stream is opened */
	if(!in)
	{
		std::cout<<"Cannot open inventory file "<<std::endl;
		return 1;
	}

	/* Read from stream */
	in >> item >> cost;
	std::cout << item <<" "<< cost <<std::endl;
	in >> item >> cost;
	std::cout << item <<" "<< cost <<std::endl;
	in >> item >> cost;
	std::cout << item <<" "<< cost <<std::endl;

	/* close stream */
	in.close();

	return 0;

}





