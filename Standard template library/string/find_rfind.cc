/*
 * find_rfind.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 724
 */
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i;
	std::string s1 = "Quick of Mind, Strong of Body, Pure of Heart";
	std::string s2;

	i = s1.find("Quick");
	if( i != std::string::npos )
	{
		std::cout<<"Match found at "<< i <<std::endl;
		std::cout<<"remaining string is: \n";
		s2.assign(s1, i, s1.size());
		std::cout<<s2;
	}
	std::cout<<"\n\n";

	i = s1.find("Strong");
	if( i != std::string::npos )
	{
		std::cout<<"Match found at "<< i <<std::endl;
		std::cout<<"Remaining string is: \n";
		s2.assign(s1,i,s1.size());
		std::cout<<s2;
	}
	std::cout<<"\n\n";

	i = s1.find("Pure");
	if( i != std::string::npos )
	{
		std::cout<<"Match found at "<< i <<std::endl;
		std::cout<<"Remaining string is: \n";
		s2.assign(s1,i,s1.size());
		std::cout<<s2;
	}
	std::cout<<"\n\n";

	i = s1.rfind("of");
	if( i != std::string::npos )
	{
		std::cout<<"Match found at "<< i <<std::endl;
		std::cout<<"Remaining string is: \n";
		s2.assign(s1,i,s1.size());
		std::cout<<s2;
	}
	std::cout<<"\n\n";
}





