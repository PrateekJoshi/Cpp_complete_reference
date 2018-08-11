#include <iostream>

using namespace std;

class location {
public:
	int latitute;
	int longitude;
public:
	location()	// needed to contruct temp obj
	{

	}

	location(int latitude, int longitude) {
		this->latitute = latitude;
		this->longitude = longitude;
	}

	void display() {
		cout << "latitude: " << latitute << endl;
		cout << "longitude: " << longitude << endl;
	}

	/* Overloading + operator */
	location operator +(location loc2);
	/* Overloading + operator */
	location operator =(location loc2);
	/* Overloading ++ (prefix) operator */
	location operator ++();
	/* Overloading ++ (postfix) operator */
	location operator ++(int);
	/* Overloading += operator */
	location operator +=(location loc2);


};

location location::operator +(location loc2) {
	location temp;
	temp.latitute = latitute + loc2.latitute;
	temp.longitude = longitude + loc2.longitude;
	return temp;
}

location location::operator =(location loc2) {
	latitute = loc2.latitute;
	longitude = loc2.longitude;
	return *this;			//return object that generated call
}

location location::operator ++() {
	latitute++;
	longitude++;
	return *this;
}

location location::operator ++(int ) {
	latitute++;
	longitude++;
	return *this;
}


location location::operator +=(location loc2){
	latitute = latitute + loc2.latitute;
	longitude = longitude + loc2.longitude;
	return *this;
}

int main(int argc, char **argv) {
	location loc1(1, 1);
	location loc2(1, 2);

	/* Test overloaded + operator */
	location loc = loc1 + loc2;
	cout<<"loc1.latitude: "<< loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;
	cout<<"loc2.latitude: "<< loc2.latitute<<" loc2.longitude: "<<loc2.longitude<<endl;
	cout<<"loc = loc1 + loc2 |  loc.latitude: "<<loc.latitute<<" loc.longitude: "<<loc.longitude<<endl;

	loc1.latitute=1;
	loc1.longitude=1;
	loc2.latitute=2;
	loc2.longitude=2;
	/* Test overloaded = opeartor */
	loc = loc1;
	cout<<"loc1.latitude: "<< loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;
	cout<<"loc = loc1  |  loc.latitude: "<<loc.latitute<<" loc.longitude: "<<loc.longitude<<endl;


	loc1.latitute=1;
	loc1.longitude=1;
	loc2.latitute=2;
	loc2.longitude=2;
	/* Test overloaded ++ opeartor */
	cout<<"loc1.latitude: "<< loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;
	cout<<"++loc1  |  loc1.latitude: "<<(++loc1).latitute<<" loc1.longitude: "<<(++loc1).longitude<<endl;



	loc1.latitute=1;
	loc1.longitude=1;
	loc2.latitute=2;
	loc2.longitude=2;
	/* Test overloaded ++ opeartor */
	cout<<"loc1.latitude: "<< loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;++loc1;
	cout<<"loc1++  |  loc1.latitude: "<<(loc1++).latitute<<" loc1.longitude: "<<(loc1++).longitude<<endl;

	loc1.latitute=1;
	loc1.longitude=1;
	loc2.latitute=2;
	loc2.longitude=2;
	/* Test overloaded += opeartor */
	cout<<"loc1.latitude: "<< loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;
	cout<<"loc2.latitude: "<< loc2.latitute<<" loc2.longitude: "<<loc2.longitude<<endl;
	loc1 += loc2;
	cout<<"loc1 =+ loc1  |  loc1.latitude: "<<loc1.latitute<<" loc1.longitude: "<<loc1.longitude<<endl;

	return 0;
}
