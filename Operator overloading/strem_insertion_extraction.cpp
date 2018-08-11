/*
 * strem_insertion_extraction.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 *      Refer: https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
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

	friend ostream& operator << (ostream &ostream, location &loc);
	friend istream& operator >> (istream &ostream, location &loc);
};


ostream& operator << (ostream &os, location &loc)
{
	os << "latitude: " <<loc.latitute << endl;
	os << "longitude: " <<loc.longitude << endl;
	return os;
}

istream& operator >> (istream &is, location &loc)
{
	is >> loc.latitute >> loc.longitude;
	return is;
}


int main(int argc, char **argv) {
	location loc;
	cin >> loc;
	cout << loc;
	return 0;
}



