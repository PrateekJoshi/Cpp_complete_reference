/*
 * static_cast.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Refer: https://www.youtube.com/watch?v=HlNVgmvX1EI&t=0s&index=2&list=PLk6CEY9XxSIC6I_HCjMTGf8eV2Ty0a19E
 */

#include <iostream>

int main(int argc, char **argv)
{
	float a=3.5;
	int b;

	/* -> Type casting float to int
	 * -> Done automatically by compiler at compile time
	 * -> BAD PROGRAMMING PRACTICE coz its hard to debug
	 */
	b = a;

	/* -> Type casting float to int
	 * -> Done automatically by compiler at compile time
	 * -> GOOD PROGRAMMING PRACTICE coz its gives description to reviewer that a static cast is happening at compile time
	 */
	b = static_cast<int> (a);

	return 0;
}


