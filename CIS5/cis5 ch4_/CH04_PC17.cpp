
//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					Chapter 04, Number 17
//Filename:			CH04_N17
//Creation Date:	10/5/2016
//Description:		The/ purpose of this program is...
//					asks for the wavelength of an electromagnetic
//					wave in meters and then displays what that wave is
//


//Preprocessor Directive
//the next line of code cause the contents of another file to be 
//instructed into the program
#include <iostream>
#include <iomanip>
#include<string>
#include <windows.h>

#define RADIOWAVES  1.0e-2
#define	MICROWAVES  1.0e-3
#define INFRAED  7.0e-7
#define VISABLELIGHT  4.0e-7
#define ULTRAVIOLET  1.0e-8
#define XRAYS  1.0e-11
using namespace std;
//the next line of code begins a function(module) call main
//All C++ programs begin with this line of code
int main()
{
	//Variable definition Statements (aka Variable Declaration statements)
	double userIput;
	int count = 0;;
	//Input 
	cin >> userIput; //user input of sqt ft
	//Input valadation
	//Nurmeric Input validation
	if (!cin.eof())
	{
		int peeked = cin.peek();
		if (peeked == 10 && cin.good())	//checks to make sure in scientific notation
		{
			if (userIput > (double)RADIOWAVES)
				cout << (double)RADIOWAVES;
		}
		else
		{
			cout << "Invalid value, try again." << endl;
			cout << "with scientific notation ex 1.0e-2" << endl;
			
			cin >> userIput;
		}
		
	}

	//if statment 
	//Variable Assignment Statements
	
	//OutPut
	// Cool loader spinner
	std::cout << '-' << std::flush;
	while (count != 500) {
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
	cout << fixed << showpoint << setprecision(1); //sets floating point placement

	return 0;
}