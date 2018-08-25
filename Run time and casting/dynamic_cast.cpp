/*
 * dynamic_cast.cpp
 *
 *  Created on: Aug 21, 2018
 *      Author: prateek
 *      Refer: https://youtu.be/wE4beL95pIo?list=PLk6CEY9XxSIC6I_HCjMTGf8eV2Ty0a19E
 *
 *      Syntax: dynamic_cast< new_type > (expression)
 *      Dynamic cast is used at run time to find out correct down cast.
 *
 *      ->Need at least one virtual function in base class
 *      ->If the cast is successful, dynamic_cast returns a value of type new_type
 *      ->If the cast fails and new_type is a pointer type, it returns a null pointer to that type
 *      ->If the cast fails and new_type is a reference type, it throws an exception that matches a handler of type
 *      std::bad_cast
 */

#include <iostream>

class Base{
	virtual void print()
	{
		std::cout<<"Base"<<std::endl;
	}
};

class Derived1 : public Base{
	void print()
	{
		std::cout<<"Derived1"<<std::endl;
	}
};

class Derived2 : public Base{
	void print()
	{
		std::cout<<"Derived2"<<std::endl;
	}
};

int main(int argc, char **argv)
{
	Derived1 derived1;

	Base *base = dynamic_cast<Base*> (&derived1);			//correct casting

	Derived2 *derived2 = dynamic_cast<Derived2*> (base);	//incorrect down cast, should retun NULL

	if( derived2 == nullptr )
	{
		std::cout<<"incorrect down cast, NULL returned "<<std::endl;
	}

	return 0;
}





