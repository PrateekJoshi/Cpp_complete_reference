/*
 * insertion_operator_oevrload.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 */
#include <iostream>
#include <cstring>

class person{
public:
	char first_name[20];
	char last_name[20];

	person(char *fname , char *lname)
	{
		strcpy(first_name,fname);
		strcpy(last_name,lname);
	}
};

/* Display first name & last name for type person */
std::ostream& operator << (std::ostream &stream, person p)
{
	stream << "fisrt name: "<<p.first_name<< std::endl;
	stream << "last name: "<<p.last_name<< std::endl;
	return stream;
}

int main(int argc, char **argv) {
	person p1("prateek" , "joshi");
	person p2("batman" , "robin");

	std::cout<< p1<<p2;

	return 0;
}



