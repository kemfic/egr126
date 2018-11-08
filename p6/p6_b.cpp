/*
 * 2018, Kemal Ficic
 *  Project 6, EGR-126
 *
 *    Program B.
 *      Develop a program that will sort a 1D int array *LIST* of dim *N*.
 *      Use either bubble sort or selection sort in your program.
 *      Keep track of the iterations in each case for the algorithm.
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int selectionSort(int list[], int size){
  int minIdx, tmp;
  int counter = 0;
  for (int i=0; i<(size-1); i++){
      minIdx = i;
      for(int j=i+1; j<size; j++){
        if(list[j] < list[minIdx]){
          minIdx = j;
        }
      }
      if(minIdx != i){
        tmp = list[i];
        list[i] = list[minIdx];
        list[minIdx] = tmp;
      }
      counter++;
    }
  cout << "# of Iterations: " << counter << endl;
  }

int main(){
  int size=0;
  cout << "Enter array size" << endl;
  cin >> size;

  int list[size];

  cout << "Enter elements for array" << endl;
  for(int i=0; i<size; i++){
    cin >> list[i];
  }

  
  cout << "Original Array: [ ";
  for(int i=0; i<size; i++){
    cout << list[i] << " ";
  }
  cout << "]" << endl;
  
  selectionSort(list, size);
  
  cout << "Sorted Array: [ ";
  for(int i=0; i<size; i++){
    cout << list[i] << " ";
  }
  cout << "]" << endl;
  return 0;
}
