/*
 * map_using_objects.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 696
 */
#include <iostream>
#include <map>
#include <cstring>

class name {
	char str[40];

public:
	name()
	{
		std::strcpy(str,"");
	}

	name(char *s)
	{
		strcpy(str,s);
	}

	char* get()
	{
		return str;
	}

	/* must define less than relative to name objects*/
	friend bool operator < (name a, name b);
};

class phone_num{
	char str[80];

public:
	phone_num()
	{
		strcmp(str,"");
	}

	phone_num(char *s)
	{
		strcmp(str,s);
	}

	char* get()
	{
		return str;
	}
};

bool operator < (name a, name b)
{
	return strcmp(a.get(),b.get()) < 0;
}


int main(int argc, char **argv)
{
	std::map<name,phone_num> directory_map;

	/* Put names and numbers into map */
	directory_map.insert(std::pair<name,phone_num> (name("Tom"),phone_num("1234")));
	directory_map.insert(std::pair<name,phone_num> (name("Josh"),phone_num("5678")));
	directory_map.insert(std::pair<name,phone_num> (name("Prateek"),phone_num("9012")));
	directory_map.insert(std::pair<name,phone_num> (name("Rennald"),phone_num("3456")));

	/* Given a name, find number */
	char str[80];
	std::cout<<"Enter name: ";
	std::cin>> str;

	std::map<name,phone_num>::iterator itr;

	itr =directory_map.find(name(str));

	if( itr != directory_map.end() )
	{
		std::cout<<"Phone number: "<<itr->second.get();
	}
	else
	{
		std::cout<<"name not in directory"<<std::endl;
	}

	std::cout<<std::endl;

	return 0;
}





