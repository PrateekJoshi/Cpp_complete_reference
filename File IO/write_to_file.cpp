/*
 * write_to_file.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: prateek
 *      Pg : 577
 */
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::ofstream out("inventory.txt");		//output file

	/* Check if stream is openend for writing */
	if(!out)
	{
		std::cout<<"Cannot open inventory.txt file."<<std::endl;
		return 1;
	}

	out<< "Juicer "<< 39.95 << std::endl;
	out<< "Mixer "<< 39.95 << std::endl;
	out<< "Grinder "<< 39.95 << std::endl;

	out.close();

	return 0;
}




