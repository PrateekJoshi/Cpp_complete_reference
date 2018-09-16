/*
 * maps.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 695
 */
#include <iostream>
#include <map>

int main(int argc, char **argv)
{
	std::map<char,int> map;

	/* Put pairs into map */
	for(int i=0;i<36; i++)
	{
		map.insert(std::pair<char,int> ('A'+i,65+i));
	}

	char ch;
	std::cout<<"Enter key: ";
	std::cin >> ch;

	std::map<char,int>::iterator itr;

	/* Find value in given map */
	itr = map.find(ch);
	if( itr != map.end() )
	{
		std::cout<<"Its ASCII value is "<< itr->second;
	}
	else
	{
		std::cout<<"Key not in map \n";
	}

	std::cout<<std::endl;

	return 0;
}






