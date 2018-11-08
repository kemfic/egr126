/*
 * 2018, Kemal Ficici
 *  Project 6, EGR-126
 *
 *    Program A.
 *      Develop a program to perform a binary search on a 1D int array *LIST* 
 *      of dimension *N*. Assume the array is in ascending order, and that
 *      there are no duplicate entries.
 *
 *       - Create a function called binSearch
 *          - Accepts a search key param and returns a bool(success)
 *       - Keep track of comparisons
 */
#include <iostream>
#include <stdlib.h>
using namespace std;


bool binSearch(int list[], int size, int key){
  int min = 0, max = size, mid = (size/2);
  counter = 0;
  while(max >= min){
    counter++;
    mid = (min + (max-min))/2;

    if(list[mid] == key){
      key = mid;
      cout << counter;
      return true;
    }else if(list[mid] > x){
      max = mid - 1;
    }else if(list[mid] < x){
      min = mid + 1;
    }
  }
  return false;
}

int main(){
  int list[] = {1, 2,3,4,5,6,7,8,9,10,11};
  int size = sizeof(list)/sizeof(int);
  int key = 10;
  cout << "key " <<endl;
  bool search = binSearch(list, size, key);
  if(search == true){
    cout << list[key] << "found at index: " << key << endl;
  }else{
    cout << "key not found" << endl;
  }

  return 0;
}
