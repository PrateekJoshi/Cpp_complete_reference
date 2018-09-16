/*
 * vector.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 672
 */

#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	std::vector<char> v(10);	//create vector of lenght 10
	unsigned int i;

	//display original size of v
	std::cout<<"Size: "<<v.size() <<std::endl;

	//assign elements of the vector some values
	for(int i=0;i<10; i++)
	{
		v[i] = i+'a';
	}

	//display contenets of vector
	std::cout<<"Current contents : "<<std::endl;
	for( i=0;i<v.size(); i++)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl<<std::endl;

	std::cout<<"Expanding vector: "<<std::endl;
	// Put more values in end, it will grow as needed
	for(i=0; i<10; i++)
	{
		v.push_back(i+10+'a');
	}

	//display current size of v
	std::cout<<"Size: "<<v.size()<<std::endl;

	//display contents of vector
	std::cout<<"Current contents: "<<std::endl;
	for( i=0; i<v.size();i++)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl<<std::endl;

	//change contents of vector
	for(i=0; i<v.size(); i++ )
	{
		v[i] = toupper(v[i]);
	}
	std::cout<<"Modified contents: "<<std::endl;
	for(i=0; i<v.size(); i++)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl;

	return 0;
}






