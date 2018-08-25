/*
 * const_cast.cpp
 *
 *  Created on: Aug 21, 2018
 *      Author: prateek
 *      Refer:	https://youtu.be/2_-BS9UI0po?list=PLk6CEY9XxSIC6I_HCjMTGf8eV2Ty0a19E
 *      Desc: The expression const_cast<T> (v) can be used to change the const or volatile qualifier of pointers or reference.
 *      where T must be a pointer, reference or pointer-to-member type.
 */
#include <iostream>


int main(int argc, char **argv)
{
	const int a1 = 10;					//const variable
	const int *b1 = &a1;				//const pointer to a const variable
	int *d1 = const_cast<int*> (b1);	//removed const type from pointer b1 (not from variable a1 which its points to)
	*d1 = 15;							//changing const variable (a1) , undefined behavior

	int a2 = 20;						//variable
	const int *b2 = &a2;				//const pointer to a variable
	int *d2 = const_cast<int*> (b2);	//removed const type from pointer b2
	*d2 = 30;							//valid because a2 is not a const variable

	return 0;
}



