/*
 * nested_namespace.cpp
 *
 *  Created on: Sep 5, 2018
 *      Author: prateek
 *      Pg: 634
 */
#include <iostream>

namespace NS1{
	int i;

	namespace NS2{
		int j;
	}
}

int main(int argc, char **argv) {

	NS1::i = 10;

	//NS2::j = 10 ;	Error, NS2 is not in view

	NS1::NS2::j = 10;	// this is right

	std::cout<<NS1::i<<" "<<NS1::NS2::j<<std::endl;

	using namespace NS1;

	/* Now that NS1 is in view, NS2 can be used to refer to j */
	std::cout<< i * NS2::j;


}




