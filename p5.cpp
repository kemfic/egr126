/*
2018, Kemal Ficici
  Project 5, EGR-126

    Program A.
      Develop a program containing 4 separate C++ functions to perform the following
      on a one-dimensional integer array LIST of dimension N:

        1. Determine (i.e. “return”) the highest value in LIST.
        2. Determine (i.e. “return”) the lowest value in LIST.
        3. Determine (i.e. “return”) the sum of all the items in LIST.
        4. Determine (i.e. “return”) the average of the values in LIST after 
           eliminating the lowest and the highest values. This function should
           invoke some or all of the other 3 functions.

   
    Program B.
      Develop a C++ program that will add the corresponding elements of two 
      2-dimensional arrays X and Y to produce the 2-dimensional array Z.  
      Arrays X, Y, Z have the same dimension [M] [N] (i.e. M rows and N columns).   

    NOTE: In the above programs, you will need to have the user input the dimensions of the respective arrays before execution of the functions.


*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int getMax(int array[], int size){
	/*
		returns max of array
	*/

	int max = array[0];

	for (int i = 1; i<size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	return max;
}

int getMin(int array[], int size){
	/*
		returns min of array
	*/
	int min = array[0];

	for (int i = 1; i<size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	return min;
}

int getSum(int array[], int size){
	/*
		returns sum of elements in array
	*/

	int sum = 0;

	for (int i=0; i < size; i++){
		sum += array[i];
	}
	
	return sum;
}

float getMeanElim(int array[], int size){
	/*
		removes min and max values from array, and returns mean.
	*/
	int min = getMin(array, size);
	int max = getMax(array, size);
	int sum = getSum(array, size);

	float mean = 0.0;

	mean = (sum-(min + max));
	mean /= (size-2);

	return mean;
}

int main(){
	int array[] = {0, 1, 2, 3, 4, 5, 6};
	int size = sizeof(array)/sizeof(int);

	int min = getMin(array, size);
	int max = getMax(array, size);
	int sum = getSum(array, size);
	float meanElim = getMeanElim(array, size);
	cout << "Min: " << min << endl
			<< "Max: " << max << endl
			<< "Sum: " << sum << endl
			<< "Mean ( excluding min and max values ): " << meanElim << endl;
  return 0;
}
