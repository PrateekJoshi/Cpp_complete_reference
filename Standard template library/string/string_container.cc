/*
 * string_container.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 727
 */
#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
	std::string str1("Strings handling is easy in C++");
	std::string::iterator itr;
	unsigned int i;

	/* Use size() */
	for( i=0; i<str1.size(); i++)
	{
		std::cout<< str1[i];
	}
	std::cout<<std::endl;

	/* Use iterator */
	itr = str1.begin();
	while( itr != str1.end() )
	{
		std::cout<<*itr++;
	}
	std::cout<<std::endl;

	/* Use count algorithm */
	i = std::count( str1.begin(), str1.end(), 'i');
	std::cout<<"There are "<<i<<" i's in str1 \n";

	/* Use transform() to upper case the string */
	std::transform(str1.begin(), str1.end(), str1.begin(), toupper);

	itr = str1.begin();
	while( itr != str1.end() )
	{
		std::cout<<*itr++;
	}
	std::cout<<std::endl;

	return 0;
}





