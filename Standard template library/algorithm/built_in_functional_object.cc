/*
 * built_in_functional_object.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 711
 */
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>

int main(int argc, char **argv)
{
	std::list<double> list1;
	std::list<double> list2;
	int i;

	/* Put values into list */
	for(i=10; i<100 ; i+=10)
	{
		list1.push_back((double)i);
	}

	for(i=1; i<10; i++)
	{
		list2.push_back(3.0);
	}

	std::cout<<"Original contents of list1: \n";
	std::list<double>::iterator itr = list1.begin();

	while( itr != list1.end() )
	{
		std::cout<<*itr<<" ";
		itr++;
	}

	std::cout<<std::endl;

	/* Transform values */
	itr = std::transform(list1.begin(), list1.end(), list2.begin(), list1.begin(), std::divides<double>());	//call functional object

	std::cout<<"Divided contents of list1: \n";
	itr = list1.begin();
	while( itr != list1.end() )
	{
		std::cout<< *itr <<" ";
		itr++;
	}

	return 0;
}




