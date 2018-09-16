/*
 * object_list.cc
 *
 *  Created on: Sep 16, 2018
 *      Author: prateek
 *      Pg: 689
 *      Desc:
 *      The STL uses these functions to determine the ordering and equality of
		objects in a container. Even though a list is not an ordered container, it still needs a way
		to compare elements when searching, sorting, or merging.
 *
 */
#include <iostream>
#include <list>

class MyClass{
	int a, b;
	int sum;

public:
	MyClass()
	{
		a=b=sum=0;
	}

	MyClass(int i, int j)
	{
		a = i;
		b = j;
		sum =a+b;
	}

	int get_sum()
	{
		return sum;
	}

	friend bool operator < (const MyClass &obj1, const MyClass &obj2);

	friend bool operator > (const MyClass &obj1, const MyClass &obj2);

	friend bool operator == (const MyClass &obj1, const MyClass &obj2);

	friend bool operator != (const MyClass &obj1, const MyClass &obj2);

};

bool operator < (const MyClass &obj1, const MyClass &obj2)
{
	return obj1.sum < obj2.sum;
}

bool operator > (const MyClass &obj1, const MyClass &obj2)
{
	return obj1.sum > obj2.sum;
}

bool operator == (const MyClass &obj1, const MyClass &obj2)
{
	return obj1.sum == obj2.sum;
}

bool operator != (const MyClass &obj1, const MyClass &obj2)
{
	return obj1.sum != obj2.sum;
}

int main(int argc, char **argv)
{
	/* create first list */
	std::list<MyClass> list1;
	for(int i=0; i<10; i++)
	{
		list1.push_back(MyClass(i,i));
	}

	std::cout<<"First list: ";
	std::list<MyClass>::iterator itr = list1.begin();

	while( itr != list1.end() )
	{
		std::cout<<itr->get_sum()<<" ";
		itr++;
	}
	std::cout<<std::endl;

	/* create second list */
	std::list<MyClass> list2;
	for(int i=0;i<10;i++)
	{
		list2.push_back(MyClass(i*2,i*3));
	}

	std::cout<<"Second list: ";
	itr = list2.begin();

	while( itr != list2.end() )
	{
		std::cout<<itr->get_sum()<<" ";
		itr++;
	}
	std::cout<<std::endl;

	/* Merge list1 and list2 */
	list1.merge(list2);

	/* Display merged list */
	std::cout<<"Merged list: "<<std::endl;
	itr = list1.begin();
	while( itr != list1.end() )
	{
		std::cout<<itr->get_sum()<<" ";
		itr++;
	}

	return 0;
}







