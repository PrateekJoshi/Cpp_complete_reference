/*
 * conversion_function.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 638
 */
#include <iostream>

const int SIZE = 100;

class stack{
	int stck[SIZE];
	int top;
public:
	stack(){
		top =0;
	}
	void push(int x);
	/* Conversion of stack to int */
	operator int()
	{
		return top;
	}

};

void stack::push(int x)
{
	if( top == SIZE )
	{
		std::cout<<"Stack is full"<<std::endl;
		return;
	}
	stck[top] =x;
	top++;
}

int main(int argc, char **argv)
{
	stack stck;
	for(int i=0;i<20;i++)
	{
		stck.push(i);
	}

	/* convert stack type to integer */
	int no_of_items = stck;

	std::cout<<"No of items in stack : "<<no_of_items<<std::endl;

	return 0;
}




