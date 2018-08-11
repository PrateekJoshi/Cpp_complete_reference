/*
 * generic_bubble_sort.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: prateek
 */

#include <iostream>

using namespace std;

/* Define geneic bubble sort
 *  X *items : pointer to array to be sorted
 *  int count : number of items in array
 * */
template<class X>
void bubbleSort(X *items, int count) {
	int a, b;
	X temp;

	for (a = 1; a < count; a++ ) {
		for (b = count-1; b >=a ; b--) {
			if (items[b] < items[b - 1]) {
				temp = items[b];
				items[b] = items[b - 1];
				items[b - 1] = temp;
			}
		}
	}
}

int main(int argc, char **argv) {
	int iarray[7] = { 7, 5, 4, 3, 9, 8, 6 };
	double darray[5] = { 4.3, 2.5, -0.9, 100.2, 3.0 };
	int i;
	cout << "Here is unsorted integer array: ";
	for (i = 0; i < 7; i++)
		cout << iarray[i] << ' ';
	cout << endl;
	cout << "Here is unsorted double array: ";
	for (i = 0; i < 5; i++)
		cout << darray[i] << ' ';
	cout << endl;
	bubbleSort(iarray, 7);
	bubbleSort(darray, 5);
	cout << "Here is sorted integer array: ";
	for (i = 0; i < 7; i++)
		cout << iarray[i] << ' ';
	cout << endl;
	cout << "Here is sorted double array: ";
	for (i = 0; i < 5; i++)
		cout << darray[i] << ' ';
	cout << endl;
	return 0;

}

