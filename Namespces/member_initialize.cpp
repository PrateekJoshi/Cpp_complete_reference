/*
 * member_initialize.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 649
 */
#include <iostream>

class IntPair{
public:
	int a;
	int b;

	IntPair(int i,int j) : a(i), b(j)
	{

	}
};

class MyClass{
	IntPair nums;
public:
	/* Initialize num object using initialization syntax */
	MyClass(int x,int y) : nums(x,y) {}

	int getNumA()
	{
		return nums.a;
	}

	int getNumB()
	{
		return nums.b;
	}

};

int main(int argc, char **argv)
{
	MyClass obj1(7,9), obj2(5,2);

	std::cout<<"Values in obj1 are "<<obj1.getNumB() << " and "<<obj1.getNumA()<<std::endl;

	std::cout<<"Values in obj2 are "<<obj2.getNumB() << " and "<<obj2.getNumA()<<std::endl;

	return 0;
}





