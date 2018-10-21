/******************************************************************************
2018, Kemal Ficici
Project 3, EGR-126

	Develop and run a C++ program to perform the following:

	A.  Present the user with a menu to select one of the following options:

		1.  Convert from Celsius to Fahrenheit  
		2.  Convert from Fahrenheit to Celsius 
		3.  Convert from pounds to kilograms
		4.  Convert from kilograms to pounds

		9.  EXIT   

	B.  Use the code you already developed in LAB 1 and LAB 2 to perform the conversions and present output to the user. 

	C.  Use a loop (do...while) to repeat the menu and computation until the user selects "9" to exit.

	Present the source code and evidence of output.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;


float kKgToLb = 2.205;


int main()
{
    int option = 0;
    float input = 0;
    float output = 0;
    

    
    do{
        cout << "Conversion Program. Please Select a choice:" << endl
            << "    1) Celsius to Farenheit" << endl
            << "    2) Farenheit to Celsius" << endl
            << "    3) Pounds to Kilograms" << endl
            << "    4) Kilograms to Pounds" << endl
            << "    9) Exit" << endl;
            
        cin >> option;
        if (option == 1 || option == 2 || option == 3 || option == 4 ){
            cout << "Input value: " << endl;
            cin >> input;
        }
        
    	switch(option) {
    		case 1:
    			output = (input * 9.0 / 5.0) + 32;
    			cout << input << " Celsius converts to " << output << " Farenheit." << endl;
    			break;
    		case 2:
    			output = (input - 32) * 5.0 / 9.0;
    			cout << input << " Farenheit converts to " << output << " Celsius." << endl;
    			break;
    		case 3:
    			output = input / kKgToLb;
    			cout << input << " Pounds converts to " << output << " Kilograms." << endl;
    			break;
    		case 4:
    			output = input * kKgToLb;
    			cout << input << " Kilograms converts to " << output << " Pounds." << endl;			
    			break;
    		case 9:
    		    cout << "exiting..." << endl;
    		    break;
    		default :
    			cout << "Invalid Option. Try again." << endl;
    			break;
    	}


    }while(option != 9);
	return 0;
}

