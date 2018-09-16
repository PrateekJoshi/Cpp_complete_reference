/*
 * storing_class_objects.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: prateek
 *      Pg: 677
 */
#include <iostream>
#include <vector>
#include <cstdlib>

class DailyTemp{
	int temp;
public:
	DailyTemp(){
		temp = 0;
	}

	DailyTemp(int x){
		temp =x;
	}

	double get_temp()
	{
		return temp;
	}

	DailyTemp& operator=(int x){
		temp = x;
		return *this;
	}
};

bool operator < (DailyTemp a, DailyTemp b){
	return a.get_temp() < b.get_temp();
}

bool operator == (DailyTemp a, DailyTemp b){
	return a.get_temp() == b.get_temp();
}

int main(int argc, char **argv)
{
	std::vector<DailyTemp> v;
	unsigned int i;

	/* insert temp */
	for(i=10; i<20; i++)
	{
		v.push_back(DailyTemp(i+60));
	}

	/* get temp */
	for(i=0; i<v.size(); i++)
	{
		std::cout<<v[i].get_temp()<<" ";
	}

	/* convert fahrenite temp to centigrade */
	for( i=0; i<v.size(); i++)
	{
		v[i] = (int) (v[i].get_temp() - 32) * (5/9);
	}

	/* get cent temp */
	for(i=0; i<v.size(); i++)
	{
		std::cout<<v[i].get_temp()<<" ";
	}

	return 0;
}





