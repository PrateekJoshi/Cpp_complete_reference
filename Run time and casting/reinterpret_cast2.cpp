/*
 * reinterpret_cast2.cpp
 *
 *  Created on: Aug 25, 2018
 *      Author: prateek
 *      Pg: 622
 *      Desc:
 *      The reinterpret_cast operator converts one type into a fundamentally different type.
		For example, it can change a pointer into an integer and an integer into a pointer. It
		can also be used for casting inherently incompatible pointer types.
 */
#include <iostream>

int main(int argc, char **argv)
{
	int i;
	char *ptr = "This is a string";

	/* Cast pointer to integer */
	i = reinterpret_cast<int> (ptr);

	std::cout<<i;

	return 0;
}





