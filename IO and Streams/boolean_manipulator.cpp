/*
 * boolean_manipulator.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: prateek
 *      Description : Stream manipulators - boolean
 */

#include <iostream>
#include <iomanip> //must include for manipulators

using namespace std;

int main(int argc, char **argv) {
	/* boolean is set default to 1/0 formatting */
	cout<<"noboolalpha - default (10==10): "<<(10==10)<<endl;
	cout<<"noboolalpha - default (10==20): "<<(10==20)<<endl;

	/* Set to true/false formatting */
	cout<<boolalpha;
	cout<<"boolalpha -  (10==10): "<<(10==10)<<endl;
	cout<<"boolalpha -  (10==20): "<<(10==20)<<endl;

	/* Toggle to 0/1 */
	cout<< noboolalpha;
	cout<<"noboolalpha -  (10==10): "<<(10==10)<<endl;
	cout<<"noboolalpha -  (10==20): "<<(10==20)<<endl;

	/* Set back to true/false using setf method */
	cout.setf(ios::boolalpha);
	cout<<"boolalpha - setf (10==10): "<<(10==10)<<endl;
	cout<<"boolalpha - setf (10==20): "<<(10==20)<<endl;

	/* Reset to default which is 0/1 */
	cout<<resetiosflags(ios::boolalpha);
	cout<<" default (10==10): "<<(10==10)<<endl;
	cout<<" default (10==10): "<<(10==20)<<endl;

	return 0;
}





