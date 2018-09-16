/*
 * sort_list.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 687
 */
#include <iostream>
#include <list>

int main(int argc, char **argv)
{
	std::list<int> list;
	int i;

	/* Create a list of random integers */
	for(int i=0;i<10;i++)
	{
		list.push_back(rand()%100);
	}

	std::cout<<"Original contents: "<<std::endl;
	std::list<int>::iterator itr = list.begin();

	while( itr != list.end() )
	{
		std::cout<<*itr<<" ";
		itr++;
	}

	std::cout<<"\n\n";

	/* Sort the list */
	list.sort();

	std::cout<<"Sorted contents: "<<std::endl;
	itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<<*itr <<" ";
		itr++;
	}

	return 0;
}






