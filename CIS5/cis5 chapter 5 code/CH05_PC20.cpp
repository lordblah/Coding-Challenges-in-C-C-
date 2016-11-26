//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					        Chapter5, Number 20
//
//Filename:			CH05_PC20
//Creation Date:	11/10/2016
//Description:		The purpose of this program is...
//      			that generates a random number and asks the user to guess what the
//                  number is.



//Preprocessor Directive
//the next line of code cause the contents of another file to be
//instructed into the program
#include <cstdlib>
#include <iostream>
#include <limits>   //used for numberic limits
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

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
//clears the screen
void ClearScreen()
    {

    cout << string(50, '\n');

    }

int main()
{
    //Variable definition Statements (aka Variable Declaration statements)
    srand(time(NULL));
    int randomValue =rand() %10  + 1;
    int userchoice = 0;

    //Overview Statement
	cout << "------------------Random Number Guessing Game---------------"<<endl;
    do{
    cout << "Guess a number between 0 and 10: ";

    //Input - using prompt and response method with user Validation
   userchoice = input_validation(userchoice);

   //loop
   if(userchoice > randomValue)
   {
       cout<<"Guess is too high try again"<<endl;
   }else if(userchoice < randomValue)
   {
       cout <<"Guess is too low try again"<< endl;
   }else
   {
   cout << "Congratulations!"<< endl;

    }

    }while (userchoice != randomValue);
    return 0;
}
