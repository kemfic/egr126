/*
		C++ program to convert from Celsius to Fahrenheit    
    and from Fahrenheit to Celsius
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  double Celsius;
  double Fahrenheit;
    
  cout << "Hello. Welcome to the Temperature Conversion program" << endl;
  cout << "Please enter the degrees in Celsius and press ENTER: " << endl;
  cin >> Celsius;
  
  Fahrenheit = ((9.0/5)*Celsius) + 32;
  
  cout << " Degrees Fahrenheit = " << Fahrenheit << endl;
  
  cout << "Please enter the degrees in Fahrenheit and press ENTER: " << endl;
  cin >> Fahrenheit;
 
  Celsius = (5.0/9) * (Fahrenheit - 32);
  
  cout << " Degrees Celsius = " << Celsius << endl;
  
  // cout << "Please enter 0 (zero) and press ENTER to exit program" << endl;
  // system("PAUSE"); //only works on windows
  
  system("read -p 'Press Enter to continue...' var"); // works in Linux sh
  
  /* old code
  int test;
  cout << "Press Enter to continue..." << endl;
  cin >> test;
  */
  return 0;
}
