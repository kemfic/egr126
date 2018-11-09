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
int idx = -1;

bool binSearch(int list[], int n, int key){
  int min = 0;
  int max = n-1;
  int mid = n/2;
  int counter = 0;
  while(max >= min){
    counter++;
    mid = min + ((max-min)/2);

    if(list[mid] == key){
      idx = mid;
      cout << "Comparisons made: " << counter << endl;
      return true;
    }else if(list[mid] > key){
      max = mid - 1;
    }else if(list[mid] < key){
      min = mid + 1;
    }
  }
  return false;
}

int main(){
  int n;
  int key;
  cout << "input list size" << endl;
  cin >> n;

  int list[n];
  cout << "Enter elements into list in ascending order. " << endl;
  for(int i =0; i<n;i++){
    cin >> list[i];
  }
  
  cout << "Enter key to search in list" << endl;
  cin >> key;

  bool search;
  search = binSearch(list, n, key);
  if(search == true){
    cout << "key found at index: " << idx << endl;
  }else{
    cout << "key not found" << endl;
  }

  return 0;
}
