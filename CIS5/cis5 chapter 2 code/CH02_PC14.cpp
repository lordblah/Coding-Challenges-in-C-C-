//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//				        	Chapter2, Number 14
//
//Filename:			CH02_PC14.CPP
//Creation Date:	9/26/2016
//Description:		The purpose of this program is...
//					        to displays the my information.
//
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
	string name;                    //Holds my first and last name
	string streetName;          //Holds my street address
	string city;                      //Holds the name of the city
	string state;                   //Holds the name of the state
	string collegeMajor;        //Holds my college major
	int addressNum;             //Holds address number
	long long telphone;       //Holds my telephone number
	int zip;                           //Holds my zip number

	//Variable Assignment Statements
	name = "Jonathan Hernadnez";
	streetName = "fir";
	city = "Moreno Valley";
	state = "CA";
	collegeMajor = "Computer Engineering & Aerospace ";
	addressNum = 26236;
	telphone = 9515636322;
	zip = 92555;

	//Output to the screen
	cout << name << endl;
	cout << addressNum << " " << streetName << endl;
	cout << city << " " << state << " " << zip << endl;
	cout << telphone << endl;
	cout << collegeMajor << endl;

	return 0;
}
