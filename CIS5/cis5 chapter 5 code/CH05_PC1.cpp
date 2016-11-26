//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					        Chapter5, Number 1
//
//Filename:			CH05_PC1
//Creation Date:	11/13/2016
//Description:		The purpose of this program is...
//      			        asks the user for a positive integer value
//                         The program should use a loop to get the sum of all
//                          the integers from 1 up to the number entered.



//Preprocessor Directive
//the next line of code cause the contents of another file to be
//instructed into the program
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>   //used for numberic limits
#include<windows.h>
#include <string>


using namespace std;
int input_validation(int input)
{
    //loops forever, so you need to have break
	for (;;) {

		if (cin >> input) {
			break;
		}
		else {
			cout << "Please enter a valid integer" << endl;
			cin.clear();    //repair the instream
			cin.ignore(numeric_limits<int>::max(), '\n'); //clears the buffer
		}
	}
	return input;

}

int main()
{
    //Variable declaration
    int basenumber = 0;
    char userchoice;
    int total = 0;
    int count  = 0;
    //Overview Statement
	cout << "-----------------Sum of Numbers---------------"<<endl;
	do{

   //Input - using prompt and response method with user Validation
    cout << "Enter a positive integer value: ";
    do
    {
        basenumber=input_validation(basenumber);
    }while(basenumber < 0);//user validation that requires the number to be greater then Zero
    //For loop sums up numbers from 1 to users intput -basenumber-
    for(int i = 0; i <= basenumber; i++)
    {
        total =total + i;
    }
    //Output
    cout << "The sum of the number is " << total<<endl;
    cout << endl;
    //Ask user if they want to run program again
    cout << "would you like to run the program again? ";
    cin >> userchoice;
    total = 0;
    }while (userchoice ==  'y'  ||  userchoice  ==  'Y');
    return 0;
}
