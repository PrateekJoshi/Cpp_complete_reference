/*
 * generic_swap_function.cpp
 *
 *  Created on: Aug 9, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

template <class T>
void swapargs(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main(int argc, char **argv) {
	int n1 = 5, n2 =10;
	char c1='a', c2='b';

	cout<< "Before a: "<<n1 <<" b: "<<n2<<endl;
	swapargs(n1,n2);
	cout<< "After  a: "<<n1 <<" b: "<<n2<<endl;

	cout<< "Before c1: "<<c1 <<" c2: "<<c2<<endl;
	swapargs(c1,c2);
	cout<< "After  c1: "<<c1 <<" c2: "<<c2<<endl;

}

