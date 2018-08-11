/*
 * generic_safe_array_type.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;


template<class T, int size>
class MyClass {
	T array[size];
public:
	MyClass() {
		array[size]={0};
	}

	/* Overload operator [] */
	T& operator [] (int index);
};

/* Overloaded operator (provides range checking for array) */
template <class T, int size>
T& MyClass<T,size>::operator [] (int index)
{
	if(index< 0 || index > size-1 ){
		cout<<"Array index out of bound"<<endl;
		exit(1);
	}
	return array[index];
}

int main()
{
	MyClass<int,10> int_arr;			//int array
	MyClass<double,20> double_arr;		//double array

	int_arr[12] = 100;			//generates runtime error

	return 0;
}

