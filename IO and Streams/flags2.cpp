/*
 * flags2.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 554
 *      Desc:
 This program illustrates another version of flags( ). It first constructs a flag mask
 that turns on showpos, showbase, oct, and right. All other flags are off. It then uses
 flags( ) to set the format flags associated with cout to these settings. The function
 showflags( ) verifies that the flags are set as indicated. (It is the same function used
 in the previous program.)
 *
 */
#include <iostream>

void showflags();


int main(int argc, char **argv) {
	/* Show default condition of prev flags */
	showflags();

	/* showpos, showbase, oct , right are on , others off */
	std::ios::fmtflags flags= std::ios::showpos | std::ios::showbase | std::ios::oct | std::ios::right;

	std::cout.flags(flags);	//set flags

	showflags();

	return 0;
}


/* Displays status of format flags */
void showflags()
{
 std::ios::fmtflags flags;
 long i;

 flags = std::cout.flags();	//get flag settings

 /* Check each flag */
 for( i=0x400 ; i ; i=i>>1 )
 {
	 if( i & flags )
	 {
		 std::cout<<"1 ";
	 }
	 else
	 {
		 std::cout<<"0 ";
	 }
 }
 std::cout<<std::endl;
}


