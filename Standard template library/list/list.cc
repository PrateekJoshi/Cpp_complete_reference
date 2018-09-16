/*
 * list.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 684
 */
#include <iostream>
#include <list>

int main(int argc, char **argv){
	std::list<int> list;
	int i;

	for( int i=0; i<10; i++)
	{
		list.push_back(i);
	}

	std::cout<<"List printed forwards: "<<std::endl;
	std::list<int>::iterator itr = list.begin();

	while( itr != list.end() )
	{
		std::cout<< *itr <<" ";
		itr++;
	}

	std::cout<<"\n\n";

	std::cout<<"List printed backwards: "<<std::endl;
	itr = list.end();
	while( itr != list.begin() )
	{
		itr --; 	//decrement pointer before using
		std::cout<< *itr <<" ";
	}

	return 0;
}





