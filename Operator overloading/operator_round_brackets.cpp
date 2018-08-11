/*
 * operator_round_brackets.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

class location {
	int latitude;
	int longitude;

public:
	location(int lat, int lon) {
		cout << "constaructor called" << endl;
		latitude = lat;
		longitude = lon;
	}

	/* Overloading () operator */
	location operator ()(int x, int y) {
		cout << "operator overloading () called " << endl;
		latitude = x;
		longitude = y;
		return *this;
	}

	/* Overloading << operator */
	friend ostream& operator <<(ostream &os, location &loc);

};

/* Overloading << operator */
ostream& operator <<(ostream &os, location &loc) {
	os << "latitude: " << loc.latitude << endl;
	os << "longitude: " << loc.longitude << endl;
	return os;
}

int main(int argc, char **argv) {
	location loc(2, 4);		//call constructor
	cout << loc;
	loc(3, 5);
	cout << loc;
}

