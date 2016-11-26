//Programmer:		Jonathan Hernandez
//Assignment:		Pointers
//					Chapter11 number 8
//Filename:			
//Creation Date:	9/21/2016
//Description:		The purpose of this program is...
//					to demonstrate a function that uses a
//					pointer to a structure variable as a parameter


//Preprocessor Directive
//the next line of code cause the contents of another file to be 
//instructed into the program
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
//the next line of code begins a function(module) call struct student

struct student
{
	string studentName;
	int idNum;
	int creditHours;
	double gpa;
};


//functionm prototype
void getData(student *);
//All C++ programs begin with this line of code
int main()
{
	//Variable definition Statements (aka Variable Declaration statements)
	student freshman;



	
	//Variable Assignment Statements
	cout << "Enter the following student data: \n";
	getData(&freshman);
	cout << "\nHere is the student data you entered: \n";
	
	cout << setprecision(3);
	cout << "Name: " << freshman.studentName << endl;
	cout << "ID Numbers: " << freshman.idNum << endl;
	cout << "Credit Hours: " << freshman.creditHours << endl;
	cout << "GPA: " << freshman.gpa << endl;
	
	return 0;
}

void getData(student *s)
{
	//get the student name
	cout << "Student name: ";
	getline(cin, s->studentName);

	//get the student ID number
	cout << "Student ID Number: ";
	cin >> s->idNum;

	//Get the credit hours enrolled
	cout << "Credit hours Enrolled: ";
	cin >> s->creditHours;
	
	//Get the gpa
	cout << "Current GPA: ";
	cin >> s->gpa;

}
