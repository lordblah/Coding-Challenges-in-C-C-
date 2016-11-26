//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					        Chapter2, Number 5
//
//Filename:			CH02_PC05.cpp
//Creation Date:	9/28/2016
//Description:		The purpose of this program is...
//					        to calculates the Average of five numbers, then
//					        prints out the result.
//

//Preprocessor Directive
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
	//the next line of code begins a function(module) call main
	//All C++ programs begin with this line of code
int main()
{
	//Variable definition Statements (aka Variable Declaration statements)
	const int size = 5;         //Holds the size of the array
	float values[size] = { 28.0, 32.0, 37.0, 24.0, 33.0 };  //Holds the five numbers
	float sum;                      //Holds the sum of the five numbers
	float temp = 0;              //Holds the temporary sum of the numbers as it adds each number to it


	//processing
	//Loop will run 5 times then will exit the for loop.
	for (int i = 0; i < 5; i++)
	{
		temp = temp + values[i]; //Adds array values with temp.
	}
	sum = temp / 5; // temp holds the sum of all five numbers, then divides it.

	//output
	cout << round(sum)<< endl;
	return 0;
}
