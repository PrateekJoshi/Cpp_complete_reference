/*
 * count_if.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 703
 */
#include <iostream>
#include <vector>
#include <algorithm>

/* This is a unary predicate that determines if number is divisible by 3 */
bool divisible_by_3(int i)
{
	if( (i%3) == 0 )
	{
		return true;
	}
	return false;
}

int main(int argc, char **argv)
{
	std::vector<int> v;
	int i;

	for( i=1; i<20; i++)
	{
		v.push_back(i);
	}

	std::cout<<"Sequence: \n";
	for( i=0; i<v.size(); i++)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl;

	i = std::count_if(v.begin(),v.end(), divisible_by_3);

	std::cout<< i <<" numbers are divisible by 3 \n";

	return 0;
}




