//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					        Chapter2, Number 10
//
//Filename:			CH02_PC10
//Creation Date:	9/28/2016
//Description:		The purpose of this program is...
//      					to calculates the number of MPG a user will get for his/her vehicle.
//


//Preprocessor Directive
//the next line of code cause the contents of another file to be
//instructed into the program
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
//the next line of code begins a function(module) call main
//All C++ programs begin with this line of code
int main()
{
	//Variable definition Statements (aka Variable Declaration statements)
	int milesTravaled;          //To hold the amount of miles travailed
	int gallonsGasUsed;       //To hold the amount of gas used
	int mpg;                        //To hold the result of the MPG formula

	//Overview Statement
	cout << "------------------MPG calculator---------------"<<endl;
	//Input- Using prompt and Responsive Method
	cout << "PLease enter Max amount of gasoline your car can carry: " ;        //Prompt
	cin >> gallonsGasUsed;                                                                            //Responsive
	cout << "Please enter miles traveled: ";                                                    //Prompt
	cin >> milesTravaled;                                                                               //Responsive


	//Processing- Variable assignment statement using an expression
	//MPG formula
	mpg = milesTravaled / gallonsGasUsed;

	//Output
	cout<< "Your cars miles MPG is: " << mpg << endl;



	return 0;
}
