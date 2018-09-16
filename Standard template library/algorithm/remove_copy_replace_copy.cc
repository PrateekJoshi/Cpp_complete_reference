/*
 * remove_copy_replace_copy.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 704
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
	char str[] = "The STL is power programming";
	std::vector<char> v, v2(30);
	unsigned int i;

	for( i=0 ; str[i] ;i++)
	{
		v.push_back(str[i]);
	}

	/* Demonstrate remove_copy */
	std::cout<<"Input sequence : \n";
	for(i=0; i<v.size() ;i++)
	{
		std::cout<<v[i];
	}
	std::cout<<std::endl<<std::endl;

	/* Remove all spaces */
	std::remove_copy(v.begin(),v.end(), v2.begin(), ' ');

	std::cout<<"Result after removing spaces: \n";
	for(i=0 ;i<v2.size(); i++)
	{
		std::cout<< v2[i];
	}
	std::cout<<std::endl<<std::endl;

	/* Demonstrate replace_copy */
	std::cout << "Input sequence : \n";
	for (i = 0; i < v.size(); i++) {
		std::cout << v[i];
	}
	std::cout << std::endl << std::endl;

	/* Replace space with colons */
	std::replace_copy(v.begin(), v.end(), v2.begin(), ' ',':');

	std::cout << "Result after replacing spaces with colons: \n";
	for (i = 0; i < v2.size(); i++) {
		std::cout << v2[i];
	}
	std::cout << std::endl << std::endl;

	return 0;
}






