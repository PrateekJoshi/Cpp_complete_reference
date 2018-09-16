/*
 * insert_erase_replace.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 723
 */
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string str1("String handling C++ style.");
	std::string str2("STL power");

	std::cout<<"Initial strings: \n";
	std::cout<<"str1: "<<str1<<std::endl;
	std::cout<<"str2: "<<str2<<std::endl;

	/* Demonstate insert */
	std::cout<<"Insert str2 into str1 :\n";
	str1.insert(6,str2);
	std::cout<< str1 <<"\n\n";

	/* Demonstrate erase */
	std::cout<<"remove 9 characters from str1: \n";
	str1.erase(6,9);
	std::cout<<str1<<"\n\n";

	/* Demonstarte replace */
	std::cout<<"Replace 8 characters in str1 with str2: \n";
	str1.replace(7,8,str2);
	std::cout<< str1 <<std::endl;

	return 0;
}





