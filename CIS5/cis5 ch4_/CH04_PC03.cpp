//Programmer:		Jonathan Hernadnez
//Assiggment:		Programming Challage-Time Calculator
//					Chapter 4, Number 3
//FileNmae:			CH04_PC03.CPP
//Creation Date:	11/07/2016
//Description:		Write aporgram that asks the user to enter a month (in numeric form),
//					a day, and a two - digit year.The program should then determine
//					whether the month times the day is equal to the year
//					

//Pre-Processor Directive
//This next line of code causes the contents of another file to be 
//inserted into the program.
#include<iostream>
#include <iomanip>
using namespace std;

//The next line of code begins functions main whcih is the beginning of thwe program
int main()
{
	//Variables - definition statements
	int month; //To hold a month date
	int day; //To hold a calendar day 
	int year; //To hold a number of the year
	int magic; //To hold magic

	//Overview Statement
	cout << "-----------------Magic Dates-------------------" << endl;
	
	//Input - using prompt and response method with user Validation, qith user validation
	cout << "Please enter a numeric month date: "; //prompt
	cin >> month;  //Response
	while (month > 12 || month > 1) {
		cout << "PLease enter a month number between 1 - 12: " << endl;
		cin >> month;
	}
	while (cin.fail())
	{
		cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
		cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
		cin.ignore(); //skips to the next newline (to ignore anything else on the 
					  //same line as the non-number so that it does not cause another parse failure
		cin >> month;
	}
	
	cout << "Please enter a numeric day date: "; //prompt
	cin >> day;  //Response
	
	while (day > 31  || day < 1 ) {
		cout << "PLease enter a day date between 1 - 31: " << endl;
		cin >> day;
	}

	while (cin.fail())
	{
		cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
		cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
		cin.ignore(); //skips to the next newline (to ignore anything else on the 
					  //same line as the non-number so that it does not cause another parse failure
		
		cin >> day;
		
	}
	
	cout << "Please enter a numeric year date, only last two numbers of the year please: "; //prompt
	cin >> year;  //Response
	
	while (year > 99 || year < 00) {
		cout << "PLease enter a year number between 00 - 99: " << endl;
		cin >> year;
	}

	while (cin.fail())
	{
		cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
		cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
		cin.ignore(); //skips to the next newline (to ignore anything else on the 
					  //same line as the non-number so that it does not cause another parse failure

		cin >> year;
	}
	
	//Determing
	magic = month * day;
	if (magic == year)
	{
		cout << "the date is magic." << endl;
	}
	else
	{
		cout << "the date is not magic." << endl;
	}

	return 0;

}