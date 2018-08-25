/*
 * typeid_template.cpp
 *
 *  Created on: Aug 25, 2018
 *      Author: prateek
 *      Pg: 610
 *      Desc:
 *      Two instances of the same template class that are created using different data are therefore different types.
 *
 */
#include <iostream>
#include <typeinfo>

/* A generic template class */
template<class T>
class myclass
{
	T a;
public:
	myclass(T i)
	{
		a=i;
	}
};


int main(int argc, char **argv)
{
	myclass<int> obj1(10), obj2(8);
	myclass<double> obj3(7.2);

	std::cout<<"Type of obj1 is "<<std::endl;
	std::cout<<typeid(obj1).name() <<std::endl;

	std::cout<<"Type of obj2 is "<<std::endl;
	std::cout<<typeid(obj2).name() <<std::endl;

	std::cout<<"Type of obj3 is "<<std::endl;
	std::cout<<typeid(obj3).name() <<std::endl;

	if( typeid(obj1) == typeid(obj2) )
	{
		std::cout<<"obj1 and obj2 are same type"<<std::endl;
	}

	if( typeid(obj1) == typeid(obj3) )
	{
		std::cout<<"obj1 and obj2 are of same type"<<std::endl;
	}
	else
	{
		std::cout<<"obj1 and obj3 are of different types"<<std::endl;
	}

	return 0;
}



