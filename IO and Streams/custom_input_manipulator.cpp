/*
 * custom_input_manipulator.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Description:
 The following program creates the getpass( ) input manipulator, which rings the
 bell and then prompts for a password:
 *
 */
#include <iostream>
#include <cstring>

/* A simple input manipulator */
std::istream& get_pass(std::istream &stream)
{
	std::cout<<'\a';	//sound a bell
	std::cout<<"Enter password: ";
	return stream;
}


int main(int argc, char **argv) {
	char pwd[80];
	do
	{
		std::cin >> get_pass >>pwd;
	}while(strcmp(pwd,"password"));

	std::cout<<" Logon complete "<<std::endl;

	return 0;
}


