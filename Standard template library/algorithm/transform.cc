/*
 * transform.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 707
 */
#include <iostream>
#include <list>
#include <algorithm>

/* A simple transformation function */
double reciprocal(double i)
{
	return (1.0/i);		//return reciprocal
}


int main(int argc, char **argv)
{
	std::list<double> list;
	int i;

	/* Put values into list */
	for(i=1 ; i<10; i++)
	{
		list.push_back((double)i);
	}

	std::cout<<"Original contents of list: \n";
	std::list<double>::iterator itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<<*itr<<" ";
		itr++;
	}

	std::cout<<std::endl;

	/* Transform values */
	itr = std::transform(list.begin(),list.end(),list.begin(),reciprocal);

	std::cout<<"Transformed contents of list: \n";
	itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<<*itr<<" ";
		itr++;
	}
	std::cout<<std::endl;

	return 0;
}




