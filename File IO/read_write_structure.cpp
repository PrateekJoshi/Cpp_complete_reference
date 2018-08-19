/*
 * read_write_structure.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: prateek
 */
#include <iostream>
#include <fstream>
#include <cstring>

typedef struct{
	char name[80];
	double balance;
	unsigned long account_num;
}status;

int main(int argc, char **argv)
{
	status acc_status;

	strcpy(acc_status.name,"Prateek Joshi");
	acc_status.balance = 9999.99;
	acc_status.account_num = 12345678;

	/* Open stream */
	std::ofstream outbal("balance",std::ios::out | std::ios::binary);
	if (!outbal )
	{
		std::cout<<"Cannot open file "<<std::endl;
		return 1;
	}

	/* write data */
	outbal.write((char*) &acc_status , sizeof(status) );
	outbal.close();

	/* Now read back */
	std::ifstream inbal("balance", std::ios::in | std::ios::binary );
	if( !inbal )
	{
		std::cout<<"Cannot open file "<<std::endl;
		return 1;
	}

	inbal.read((char*) &acc_status,sizeof(status));

	std::cout<<acc_status.name<<std::endl;
	std::cout<<"Account : "<<acc_status.account_num<<std::endl;
	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);
	std::cout<<"Balance: "<<acc_status.balance<<std::endl;

	inbal.close();
	return 0;
}




