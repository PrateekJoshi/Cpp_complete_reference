/*
 * declaraing_namespace.cpp
 *
 *  Created on: Sep 5, 2018
 *      Author: prateek
 *      Pg: 628
 */

#include <iostream>

/* Declare a namespace and declare classes and variables inside this namespace scope */
namespace CounterNameSpace	{

int upperbound;
int lowerbound;

class Counter{
	int count;
public:
	Counter( int n )
	{
		if( n <= upperbound )
		{
			count =n;
		}
	}


	int run()
	{
			return count;
	}

};
}

int main(int argc, char **argv) {
	CounterNameSpace::upperbound = 100;
	CounterNameSpace::lowerbound = 0;

	CounterNameSpace::Counter obj(10);

	std::cout<<obj.run()<<std::endl;
}



