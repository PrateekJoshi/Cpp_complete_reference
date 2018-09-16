/*
 * vector_iterator.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 673
 */
#include <iostream>
#include <vector>
#include <cctype>

int main(int argc, char **argv)
{
	/* Create a vector of length 10 */
	std::vector<char> v(10);
	/* Create an iterator */
	std::vector<char>::iterator vector_itr;
	int i;

	/* Assign elements in vector a value */
	vector_itr = v.begin();
	i = 0;
	while( vector_itr != v.end() )
	{
		*vector_itr = i +'a';	//asssign value to vector using iterator
		vector_itr++;
		i++;
	}

	/* Display contents of vector */
	std::cout<<"Original contents : "<<std::endl;
	vector_itr = v.begin();
	while( vector_itr != v.end() )
	{
		std::cout<< *vector_itr <<" ";
		vector_itr++;
	}
	std::cout<<std::endl<<std::endl;

	/* Change contents of vector using iterator */
	vector_itr = v.begin();
	while( vector_itr != v.end() )
	{
		*vector_itr = toupper(*vector_itr);
		vector_itr++;
	}

	/* Display contents of vector */
	std::cout<<"Modified contents: "<<std::endl;
	vector_itr = v.begin();
	while( vector_itr != v.end() )
	{
		std::cout<<*vector_itr<<" ";
		vector_itr++;
	}

	std::cout<<std::endl;
	return 0;
}





