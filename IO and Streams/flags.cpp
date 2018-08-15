/*
 * flags.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Pg: 552
 *      Desc: Examining the formatting flags
 */
#include <iostream>

void showflags();

int main(int argc, char **argv) {
	/* Show default condition of format flags */
	std::cout<<"Intial io flags setting: "<<std::endl;
	showflags();

	std::cout.setf(std::ios::right | std::ios::showpoint | std::ios::fixed );

	std::cout<<"New io flags setting: "<<std::endl;
	showflags();
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





