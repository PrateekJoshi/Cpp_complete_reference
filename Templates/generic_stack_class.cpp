/*
 * generic_stack_class.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

const int SIZE = 10;

/* Create a generic stack class */
template<class T>
class stack {
	T array[SIZE];
	int top;

public:
	stack() {
		top = 0;
	}

	void push(T item);
	T pop();
};

/*		   template<class T>
 * Syntx : returnType className<T>::funcName(T args)	{ body }
 */
template<class T>
void stack<T>::push(T item)
{
	if( top == SIZE ){
		cout<<"Stack Full !!! "<<endl;
		return;
	}
	array[top] = item;
	top++;
}

/*
 * Pop an Object
 */
template<class T>
T stack<T>::pop(){
	return array[--top];
}

int main(int argc, char **argv) {
	stack<char> s1;	//create character stacks
	int i;

	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');
	s1.push('e');
	s1.push('f');

	for( i=0 ; i<6 ; i++){
		cout<<"Pop s1: "<<s1.pop()<< endl;
	}


}


