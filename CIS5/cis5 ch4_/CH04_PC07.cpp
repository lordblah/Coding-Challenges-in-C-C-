//Programmer:		Jonathan Hernadnez
//Assiggment:		Programming Challage-Time Calculator
//					Chapter 4, Number 7
//FileNmae:			CH04_PC07.CPP
//Creation Date:	11/07/2016
//Description:		Write aporgram that asks the user to enter a number of seconds.
//					Secounds will be converted to seconds,mintutes, hours and days
//					See page 211 in 7th edition for details

//Pre-Processor Directive
//This next line of code causes the contents of another file to be 
//inserted into the program.
#include<iostream>
using namespace std;

//The next line of code begins functions main whcih is the beginning of thwe program
int main()
{
	//Constants- Definition statements
	const int SECONDS_PER_MINUTE = 60; //Seconds in a minute
	const int SECONDS_PER_HOUR = 3600; //Seconds in a hour
	const int SECONDS_PER_DAY = 86400; //Seconds in a day

	//Variables - definition statements
	double seconds; //To hold a number of seconds
	double minutes; //To hold a number of minutes
	double hours; //To hold a number of hours
	double days; //To hold a number of days

	//Get a number of seconds
	cout << "Enter a number of seconds: ";
	cin >> seconds;

	//Display the number of minutes in that many seconds.
	if (seconds >= SECONDS_PER_MINUTE)
	{
		minutes = seconds / SECONDS_PER_MINUTE;
		cout << "There are " << minutes
			<< "minutes in " << seconds
			<< "seconds.\n";
	}

	//Display the number of hours in that many seconds.
	if (seconds >= SECONDS_PER_HOUR)
	{
		hours = seconds / SECONDS_PER_HOUR;
		cout << "There are " << hours
			<< "hours in " << seconds
			<< "seconds.\n";
	}

	//Display the number of days in that many seconds.
	if (seconds >= SECONDS_PER_DAY)
	{
		days = seconds / SECONDS_PER_DAY;
		cout << "There are " << days
			<< "days in " << seconds
			<< "seconds.\n";
	}
	return 0;

}