/*
 * opeartor_comma.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

class location {
	int latitude, longitude;

public:
	location() {
		latitude = 0;
		longitude = 0;
	}

	location(int lg, int lt) {
		longitude = lg;
		latitude = lt;
	}
	void show() {
		cout << longitude << " ";
		cout << latitude << "\n";
	}

	location operator+(location op2);

	/* Overloading , operator */
	location operator,(location op2);

};

// Overload + for location
location location::operator+(location op2) {
	location temp;
	temp.longitude = op2.longitude + longitude;
	temp.latitude = op2.latitude + latitude;
	return temp;
}

//overload , for location
// op1 , op2 => copy values of op2 in op1
location location::operator ,(location op2){
	location temp;
	temp.longitude = op2.longitude;
	temp.latitude = op2.latitude;
	return temp;
}

int main(int argc, char **argv) {
	location ob1(10, 20), ob2( 5, 30), ob3(1, 1);

	ob1 = (ob1, ob2+ob2, ob3);

	ob1.show();
}

