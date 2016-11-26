//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					Chapter 02, Number 17
//Filename:			CH02_N17
//Creation Date:	9/26/2016
//Description:		The/ purpose of this program is...
//					calculates the number of acres in a tract of land
//


//Preprocessor Directive
//the next line of code cause the contents of another file to be 
//instructed into the program
#include <iostream>
#include <iomanip>
#include<string>
#include <windows.h>
using namespace std;
//Defines Const varaible 
#define ACRESQTFT  43560.00
//the next line of code begins a function(module) call main
//All C++ programs begin with this line of code
int main()
{
	//Variable definition Statements (aka Variable Declaration statements)
	float user_input;	//user input of sqt ft
	float arches_result;	//result of sqt ft to aches converaion
	int count;
	//Outout
	cout << "------------------Sqt ft convetor into Aches-------------"<< endl;
	cout << "PLease enter amount of Sqt ft"<<endl;
	//Input
	cin >> user_input; //user input of sqt ft
	//Variable Assignment Statements
	arches_result = user_input / ACRESQTFT;
	count = 0;

	//OutPut
	// Cool loader spinner
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
	cout << fixed << showpoint << setprecision(1); //sets floating point placement
	cout << "Here's your result: " << arches_result<< " Acres" << endl; 
	return 0;
}