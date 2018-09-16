/*
 * string.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 720
 */
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string str1("Alpha");
	std::string str2("Beta");
	std::string str3("Omega");
	std::string str4;

	/* Assign a string */
	str4 = str1;
	std::cout<<str1 <<" \n "<<str3<<" \n";

	/* Concatenate two string */
	str4 = str1 + str2 ;
	std::cout<< str4 <<" \n";

	/* Concatnate a string with a C string */
	str4 = str1 +" to "+ str3;
	std::cout<< str4 <<" \n";

	/* Compare two string */
	if( str3 > str1 )
	{
		std::cout<< "str3 > str1 \n";
	}

	if( str3 == str1 + str2 )
	{
		std::cout<< "str3 == str1+str2 \n";
	}

	/* A string object can also be assigned a normal string */
	str1 = "This is a null-terminated string. \n";
	std::cout<<str1;

	/* Create a string object using another string object */
	std::string str5(str1);
	std::cout<<str5;

	return 0;

}





