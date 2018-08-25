/*
 * static_cast2.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: prateek
 *      Desc: To show static_cast is more restrictive than C style cast.
 *      Refer: https://youtu.be/HlNVgmvX1EI?list=PLk6CEY9XxSIC6I_HCjMTGf8eV2Ty0a19E
 */
#include <iostream>

int main(int argc, char **argv) {
	char ch;				//1 byte data
	int *p = (int*) &ch;	//4 byte data pointer p to a 1 byte data ch , coz its of type int

	/* Now when to write to this pointer p, it will write data to 4 bytes address (but we have 1 byte actually),
	 * ie it will corrupt memory by writing data to address which we dont have access.
	 */
	*p = 5 ;				// PASS at compile time (C style casting) and might or might not fail at run time.

	/* Proper way to do this */
	int *ip = static_cast<int*> (&ch);	//FAIL, compile time error, because they are not compatible pointer types

	return 0;
}




