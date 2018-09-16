/*
 * binders.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 714
 */
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>

int main(int argc, char **argv)
{
	std::list<int> list;
	std::list<int>::iterator itr , endp;

	int i;

	for(i=1; i<20; i++)
	{
		list.push_back(i);
	}

	std::cout<<"Original sequence: \n";
	itr = list.begin();
	while( itr != list.end() )
	{
		std::cout<< *itr <<" ";
		itr++;
	}
	std::cout<<std::endl;

	endp = std::remove_if(list.begin(),list.end(),std::bind2nd(std::greater<int>(),8));

	std::cout<<"Resulting sequence: \n";
	itr = list.begin();
	while( itr != endp )
	{
		std::cout<< *itr <<" ";
		itr++;
	}

	return 0;
}






