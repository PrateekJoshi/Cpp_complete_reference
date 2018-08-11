/*
 * operator_class_member_access.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */
#include <iostream>

using namespace std;

class MyClass{
	int someVar;

public:
	MyClass* operator -> (){
		return this;
	}

	void someFunc(){
		cout<< "called some function"<<endl;
	}
};


int main(int argc, char **argv) {
		MyClass obj;
		obj.someFunc();	// called with . operator as it is not a pointer
		obj->someFunc();	//called with -> insipte of the fact that obj is not a pointer
}




