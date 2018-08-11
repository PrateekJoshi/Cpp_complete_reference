/*
 * operator_friend_func.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

class location {
public:
	int latitute;
	int longitude;
public:
	location()	// needed to contruct temp obj
	{
		latitute = 0;
		longitude = 0;
	}

	location(int latitude, int longitude) {
		this->latitute = latitude;
		this->longitude = longitude;
	}

	void display() {
		cout << "latitude: " << latitute << " longitude: " << longitude << endl;

	}

	/* Overloading + using friend function */
	friend location operator +(location loc1, location loc2);
	/* Overloading ++ (prefix) using friend function */
	/* NOTE: Reference parameter is used here because in friend function values are passed by value & friend function does
	 not have this pointer in their scope*/
	friend location operator ++(location &loc);
	/* Overloading ++ (postfix) using friend function */
	friend location operator ++(location &loc, int x);
};

location operator+(location loc1, location loc2) {
	location loc;
	loc.latitute = loc1.latitute + loc2.latitute;
	loc.longitude = loc1.longitude + loc2.longitude;
	return loc;
}

location operator++(location &loc, int x) {
	loc.latitute++;
	loc.longitude++;
	return loc;
}

location operator ++(location &loc) {
	++loc.latitute;
	++loc.longitude;
	return loc;
}

int main(int argc, char **argv) {
	location loc1(1, 1), loc2(2, 2), loc;
	cout << "loc1: " << endl;
	loc1.display();
	cout << "loc2: " << endl;
	loc2.display();
	loc = loc1 + loc2;
	cout << "loc1 + loc2 " << endl;
	loc.display();

	loc1.latitute = 1;
	loc1.longitude = 1;
	loc2.latitute = 2;
	loc2.longitude = 2;
	loc.latitute = 0;
	loc.longitude = 0;
	cout << "loc = ++loc1" << endl;
	loc = ++loc1;
	loc.display();

	loc1.latitute = 1;
	loc1.longitude = 1;
	loc2.latitute = 2;
	loc2.longitude = 2;
	loc.latitute = 0;
	loc.longitude = 0;
	cout << "loc = loc1++" << endl;
	loc = loc1++;
	loc.display();

}

