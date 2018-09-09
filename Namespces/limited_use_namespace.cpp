/*
 * limited_use_namespace.cpp
 *
 *  Created on: Sep 5, 2018
 *      Author: prateek
 *      Pg: 636
 */

#include <iostream>

/* Gain access to cout, cin  */
using std::cout;
using std::cin;

int main(int argc, char **argv) {
	int val;
	cout<<"Enter a number: ";
	cin>>val;
	cout<<std::endl<<"This is your number in hex: ";
	cout<<std::hex<<val<<std::endl;
	return 0;
}





