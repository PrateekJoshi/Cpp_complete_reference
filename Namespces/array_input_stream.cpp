/*
 * array_input_stream.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 655
 */
#include <iostream>
#include <strstream>

int main(int argc, char **argv) {
	char input_src[] = "10 Hello 0x75 42.73";

	std::istrstream ins(input_src);

	int i;
	char str[80];
	float f;

	/* reading from array input stream */
	ins >> i;
	ins >> str;
	std::cout << i <<" "<<str<<std::endl;

	/* Reading 0x75 42.73 */
	ins >> std::hex >> i;
	ins >> f;

	std::cout<< std::hex << i <<" "<<f<<std::endl;

	return 0;
}





