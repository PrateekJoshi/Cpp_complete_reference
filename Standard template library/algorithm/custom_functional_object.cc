/*
 * custom_functional_object.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 713
 */
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>

/* A simple function object */
class reciprocal : std::unary_function<double,double>
{
public:
	result_type operator() (argument_type i)
	{
		return ( static_cast<result_type> (1.0)/i );
	}
};

int main(int argc, char **argv)
{
	std::list<double> list;
	int i;

	/* Put values in list */
	for(i=1 ; i<10; i++)
	{
		list.push_back((double) i);
	}

	std::cout<<"Original contents of list: \n";
	std::list<double>::iterator itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<< *itr <<" ";
		itr++;
	}
	std::cout<<std::endl;

	/* Use reciprocal function object */
	itr = std::transform(list.begin(), list.end(), list.begin(), reciprocal());

	std::cout<<"Transformed contents of list: \n";
	itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<< *itr <<" ";
		itr++;
	}
	std::cout<<std::endl;

	return 0;
}




