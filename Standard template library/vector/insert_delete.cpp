/*
 * insert_delete.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 675
 */
#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	std::vector<char> v(10);
	std::vector<char> v2;

	char str[] = "<Vector>";
	unsigned int i;

	/* Initialize v */
	for( i =0 ; i<10 ; i++)
	{
		v[i] = i + 'a';
	}

	/* Copy characters in str into v2 */
	for( i=0; str[i]; i++)
	{
		v2.push_back(str[i]);
	}

	/* Display original contents of vector */
	std::cout<<" Original contents of vector: "<<std::endl;
	for( i=0; i<v.size(); i++)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<"\n\n";

	std::vector<char>::iterator vector_itr = v.begin();
	vector_itr += 2;	//point to 3rd element

	/* Insert 10 X's into v */
	v.insert(vector_itr, 10, 'X');

	/* Display contents of vector */
	std::cout << "Size after inserting X's: " << v.size() <<std::endl;
	std::cout<<" Contents of vector: "<<std::endl;
	for (i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	std::cout<<"\n\n";

	/* Remove those elemnets */
	vector_itr = v.begin();
	vector_itr += 2;						//point to 3rd elemnt
	v.erase(vector_itr,vector_itr+10);		//remove next 10 elements

	/* Display contents of vector */
	std::cout << "Size after erase: " << v.size() <<std::endl;
	std::cout<<" Contents of vector: "<<std::endl;
	for (i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	std::cout<<"\n\n";

	return 0;
}


