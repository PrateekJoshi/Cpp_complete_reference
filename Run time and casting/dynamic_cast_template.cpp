/*
 * dynamic_cast_template.cpp
 *
 *  Created on: Aug 25, 2018
 *      Author: prateek
 *      Pg: 618
 */
#include <iostream>
#include <typeinfo>

/* template base class */
template <class T>
class Num
{
protected:
	T val;
public:
	Num(T x)
	{
		val = x;
	}

	virtual T get_value()
	{
		return val;
	}
};

/* template derived class */
template <class T>
class SquareNum : public Num<T>
{
public:
	SquareNum( T x) : Num<T> (x)
	{}

	T get_value()
	{
		/*
		 * Why used this to access val ?
		 * Refer: https://stackoverflow.com/questions/12032345/protected-member-is-not-declared-in-this-scope-in-derived-class
		 */
		return (this->val)*(this->val);
	}
};


int main(int argc, char **argv)
{
	Num<int> *base_ptr, num_int_obj(2);
	SquareNum<int> *derived_ptr, square_int_obj(3);
	Num<double> num_double_obj(3.3);

	base_ptr = dynamic_cast<Num<int> *> (&square_int_obj);
	if( base_ptr )
	{
		std::cout<< "Cast from SquareNum<int> * to Num<int> * OK "<<std::endl;
		std::cout<<"Value is "<<base_ptr->get_value()<<std::endl;
	}
	else
	{
		std::cout<<"Error"<<std::endl;
	}

	derived_ptr = dynamic_cast<SquareNum<int> *> (&num_int_obj);
	if(derived_ptr)
	{
		std::cout<<"Error"<<std::endl;
	}
	else
	{
		std::cout<<"Cast from Num<int>* to SquareNum<int>* not OK "<<std::endl;
		std::cout<<"Can't cast a pointer to a base object into Derived "<<std::endl;
	}

	base_ptr = dynamic_cast<Num<int> *> (&num_double_obj);
	if( base_ptr )
	{
		std::cout<<"Error"<<std::endl;
	}
	else
	{
		std::cout<<"Can't cast from Num<double>* to Num<int>*  "<<std::endl;
		std::cout<<"These are two different types "<<std::endl;
	}

	return 0;
}





