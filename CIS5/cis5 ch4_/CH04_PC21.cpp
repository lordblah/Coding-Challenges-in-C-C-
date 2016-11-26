//Programmer:               Jonathan Hernandez
//Assignment:               Programming Challenge
//                                  Chapter 4, Number 21
//
//Filename:                  CH04_PC021.CPP
//Creation Date:            Nov 09, 2016
//Description:              The purpose of this programming is too
//                          asks which which geometric shape to calculate for a
//                           area of an circle,
//							 area of an rectangle,
//							 area of an triangle.

//Preprocessor Directive
#include <iostream>
#include <iomanip>
#include <ostream>
#include <cmath>	//sqrt
#include <limits>
#include<windows.h>
using namespace std;
//The next line of code begins a function called main
//All C++ programs begin with function main
//Function
//Calculates the area of a circle
//user input validation
double input_validation(double input)
{
    //loops forever, so you need to have break
	for (;;) {

		if (cin >> input) {
			break;
		}
		else {
			cout << "Please enter a valid integer" << endl;
			cin.clear();    //repair the instream
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
		}
	}
	return input;

}

double circle_area_cal(double r)
{
	const double PI = 3.14159;
	double area;
	area = (PI * pow(r, 2));
	return area;
}
//Calculates the area of a rectangle
double rec_area_cal(double x, double y)
{
	double area;
	area = x * y;
	return area;
}
//calculates the area of an triangle
double triangle_area_cal(double base, double height)
{
	double area;
	area = base * height * .5;
	return area;
}
//clears the screen
void ClearScreen()
    {

    cout << string(50, '\n');

    }

int main()
{
	//Variable Definition Statements(aka Variable Declaration Statements)
	int choice = 0,count = 0; //Hold users menu choice
	char again;		// To hold Y or N input
	double width_of_rec = 0.0,      //width of rectangle
		length_of_rec = 0.0,        //length of rectangle
		r= 0.0,     //to hold users input of radius
		base = 0.0, //holds user input of triangles base
		height= 0.0;       //holds user input of triangles height

		double area;
	do

	{

		// Display the menu.
		cout << "-----------------Geometry Calculator-------------------" << endl
			<< "1. Calculate the Area of a Circle\n"
			<< "2. Calculate the Area of a Rectangle\n"
			<< "3. Calculate the Area of a Triangle\n"
			<< "4. Quit\n"

			<< "Enter your choice: ";
		choice = input_validation(choice);
		//validate menu

		switch (choice)
		{
		case 1:
		    //Input - using prompt and response method with user Validation
			cout << "Enter the Radius of the circle: "; //prompt

								   //User Validation
            r = input_validation(r);

			area = circle_area_cal(r);
                std::cout << '-' << std::flush;
            while(count != 500){
                Sleep(1);
                std::cout << "\b\\" << std::flush;
                Sleep(1);
                std::cout << "\b|" << std::flush;
                Sleep(1);
                std::cout << "\b/" << std::flush;
                Sleep(1);
                std::cout << "\b-" << std::flush;
                count++;
            }
            cout << "The area is ";
			cout<< setprecision(4) << area << endl;
			break;


		case 2:
		    //Input - using prompt and response method with user Validation
			cout << "Enter the width of Rectangle: "; //prompt

								   //User Validation
			width_of_rec=input_validation(width_of_rec);

			cout << "Enter the length of first Rectanlge: "; //prompt

									//User Validation
			length_of_rec=input_validation(length_of_rec);

			area = rec_area_cal(width_of_rec, length_of_rec);
			std::cout << '-' << std::flush;
            while(count != 500){
                Sleep(1);
                std::cout << "\b\\" << std::flush;
                Sleep(1);
                std::cout << "\b|" << std::flush;
                Sleep(1);
                std::cout << "\b/" << std::flush;
                Sleep(1);
                std::cout << "\b-" << std::flush;
                count++;
            }
            cout << "The area is ";
			cout<< setprecision(4) << area << endl;
			break;


		case 3:
		    //Input - using prompt and response method with user Validation

			cout << "Enter the base value of the triangle: "; //prompt


								   //User Validation
			base= input_validation(base);
			cout << "Enter the height value of the triangle: "; //prompt


								   //User Validation

            height = input_validation(height);

			area = triangle_area_cal(base, height);
			std::cout << '-' << std::flush;
            while(count != 500){
                Sleep(1);
                std::cout << "\b\\" << std::flush;
                Sleep(1);
                std::cout << "\b|" << std::flush;
                Sleep(1);
                std::cout << "\b/" << std::flush;
                Sleep(1);
                std::cout << "\b-" << std::flush;
                count++;
            }
            cout << "The area is ";
			cout<< setprecision(4) << area << endl;
			break;
        //breaks out of switch statement loop, user chose quit
		case 4:	break;

		default:	break;
		}
        //Ask user if they want to run program again
		cout << "Do you want to Run again: (Y/N)" << endl;
		cin >> again;
         ClearScreen();
	} while (again == 'Y' || again == 'y');
	return 0;
}
