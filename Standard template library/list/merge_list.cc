/*
 * merge_list.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 687
 */
#include <iostream>
#include <list>

int main(int argc, char **argv)
{
	std::list<int> list1, list2;

	for( int i=0; i<10; i+=2)
	{
		list1.push_back(i);
	}

	for( int i=1; i<11; i+=2)
	{
		list2.push_back(i);
	}

	std::cout<<"Contents of list1: \n";
	std::list<int>::iterator itr = list1.begin();
	while( itr != list1.end() )
	{
		std::cout<<*itr <<" ";
		itr++;
	}

	std::cout<<std::endl<<std::endl;

	std::cout<<"Contents of list2: \n";
	itr = list2.begin();
	while( itr != list2.end() )
	{
		std::cout<<*itr <<" ";
		itr++;
	}
	std::cout<<std::endl<<std::endl;

	/* Now merge the two lists */
	list1.merge(list2);

	if( list2.empty() )
	{
		std::cout<<"list2 is now empty"<<std::endl;
	}

	std::cout<<"Contents of list1 after merge: \n";
	itr = list1.begin();

	while( itr != list1.end() )
	{
		std::cout<<*itr<<" ";
		itr++;
	}

	return 0;
}





