/*
2018, Kemal Ficici
  Project 5, EGR-126

    Program B.
      Develop a C++ program that will add the corresponding elements of two 
      2-dimensional arrays X and Y to produce the 2-dimensional array Z.  
      Arrays X, Y, Z have the same dimension [M] [N] (i.e. M rows and N columns).   

    NOTE: In the above programs, you will need to have the user input the dimensions of the respective arrays before execution of the functions.


*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int M, N;
  
  cout << "Enter the rows of your arrays" << endl;
  cin >> M;
  cout << "Enter the columns of your arrays" << endl;
  cin >> N;

  int x[M][N], y[M][N], z[M][N];

  cout << "Enter the elements for the first array, x." << endl;
  
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << "[ " << i << ", " << j << " ]" << endl;
      cin >> x[i][j];
    }
  }


  cout << "Enter the elements for the second array, y." << endl;
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << "[ " << i << ", " << j << " ]" << endl;
      cin >> y[i][j];
    }
  }
  

  //sum x and y
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      z[i][j] = x[i][j] + y[i][j];
    }
  }


  //output x
  cout << "x + y = [ " << endl;
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << z[i][j] << " ";
    }
    cout << endl;
  }
  cout << " ]" << endl;

  // output y
  cout << "y = [ " << endl;
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << z[i][j] << " ";
    }
    cout << endl;
  }
  cout << " ]" << endl;
  
  //output sum
  cout << "x + y = [ " << endl;
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << z[i][j] << " ";
    }
    cout << endl;
  }
  cout << " ]" << endl;

  return 0;
  }

