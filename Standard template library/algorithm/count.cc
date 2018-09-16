/*
 * count.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 702
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main(int argc, char **argv)
{
	std::vector<bool> v;
	srand(time(0));

	for(int i=0;i<10;i++)
	{
		if( rand() %2 )
		{
			v.push_back(true);
		}
		else
		{
			v.push_back(false);
		}
	}

	std::cout<<" Sequence: "<<std::endl;
	for(int i=0;i<v.size(); i++)
	{
		std::cout<<std::boolalpha<< v[i] <<" ";
	}
	std::cout<<std::endl;

	int c = std::count(v.begin(),v.end(),true);

	std::cout<< c <<" elements are true \n";

	return 0;
}




