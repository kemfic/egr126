/*
2018, Kemal Ficici
Project 4, EGR-126
	Develop and run a C++ program to satisfy the following need:

		A landscaping company sends employees to various sites 
		(e.g. parks, school grounds, golf courses, etc).
		These sites will contain a variable number of land
		segments (plots) having one of 4 shapes:  
				Square, rectangle, triangle, or circle

		There may be more than one plot of the same shape, and
		the plots vary in size. Employees will need to run a 
		program (the one you are writing) on a portable computer
		as they survey the site and perform determine the total
		area of all the plots at the site. The result will be 
		used to determine the amount of soil, mulch, grass seed,
		and other landscaping materials that will be needed to
		maintain the site.  The program should adhere to the 
		following characteristics:

		 - Use functions throughout

		 - The user should be presented with a menu of choices
			 (including an exit)

		 - The user should be prompted to input the necessary
			 dimensions of the respective geometric shape in 
			 question.

	Present the source code and evidence of output.
*/

#define _USE_MATH_DEFINES
 
#include <cmath>
#include <iostream>
#include <stdlib.h>
using namespace std;

float getRect(){
    float side1 = 0,
            side2 = 0,
            area = 0;
    cout << "Rectangular Plot. " << endl;
    cout << "Enter length of Side 1 in Meters: " << endl;
    cin >> side1;
    cout << "Enter lenght of Side 2 in meters: " << endl;
    cin >> side2;
    
    area = side1 * side2;
    cout << "Area of Current Plot: " << area << endl;
    return area;
}
float getTriangle(){
    float base = 0, height=0, area = 0;
    cout << "Triangular Plot. " << endl;
    cout << "Enter length of base in Meters: " << endl;
    cin >> base;
    cout << "Enter height in meters: " << endl;
    cin >> height;
    
    area = (base * height) / 2.;
    
    cout << "Area of Current Plot: " << area << endl;
    return area;
}
float getSquare(){
    float side = 0, area = 0;
    cout << "Square Plot. " << endl;
    cout << "Enter side length in Meters: " << endl;
    cin >> side;
    
    area = side * side;
    
    cout << "Area of Current Plot: " << area << endl;
    return area;
}
float getCircle(){
    float radius = 0, area = 0;
    cout << "Circular Plot. " << endl;
    cout << "Enter radius in Meters: " << endl;
    cin >> radius;
    
    area = M_PI * (radius * radius);
    
    cout << "Area of Current Plot: " << area << endl;
    return area;
}

int main()
{
    bool cont = true;
    int option = 5;
    float total = 0.0;
    
    cout << "Plot Area Calculator" << endl;
    
    do{
        cout << "    Please pick an option: " << endl
            << "        1. Add Square Plot" << endl
            << "        2. Add Rectangle Plot" << endl
            << "        3. Add Triangle Plot" << endl
            << "        4. Add Circle Plot" << endl
            << "        5. Exit" << endl;
        
        cin >> option;
        
        switch(option){
            case 1:
                total += getSquare();
                break;
            case 2:
                total += getRect();
                break;
            case 3:
                total += getTriangle();
                break;
            case 4:
                total += getCircle();
                break;
            case 5:
                cont = false;
                break;
            default:
                cout << "Invalid Option. Try again." << endl;
                break;
        }
        
        cout << endl << "Total Area: " << total << " square meters." << endl;
        
        
    } while(cont == true);

    return 0;
}
