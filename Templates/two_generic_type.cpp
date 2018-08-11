/*
 * two_generic_type.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

template <class T1, class T2>
void display_generic(T1 a, T2 b)
{
	cout<< "Type T1 value is "<<a<<endl;
	cout<< "Type T2 value is "<<b<<endl;
}

int main(int argc, char **argv) {
	display_generic(1,"a");
	display_generic("A random string", 22.7);
	display_generic('a',3L);

}




