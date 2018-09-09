/*
 * mutable.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 642
 */
#include <iostream>

class Demo{
	mutable int i;
	int j;
public:
	int geti() const{
		return i;		//compile
	}

	void setj(int x) const{
	//	j = x;		//wont compile
	}

	void seti(int x) const{
		i = x;		//compile
	}
};


int main(int argc, char **argv)
{
	Demo obj;

	obj.seti(10);

	obj.setj(2);

	std::cout<<"Value of i : "<<obj.geti()<<std::endl;

	return 0;
}





