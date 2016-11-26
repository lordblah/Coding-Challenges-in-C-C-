//Programmer:               Jonathan Hernandez
//Assignment:               Programming Challenge
//                          Chapter 3, Number 7
//
//Filename:                 CH04_PC01.CPP
//Creation Date:             Oct 21, 2016
//Description:               The purpose of this programming is too
//                           asks the user to enter two numbers and
//                          determine which number is the smaller and which is the larger

//Preprocessor Directive
#include <iostream>
#include <iomanip>
using namespace std;
//The next line of code begins a function called main
//All C++ programs begin with function main
int main()
{
//Variable Definition Statements(aka Variable Declaration Statements)
    int min,            //Smailler number
        max,            //Larger number
        FInput,         //First user input
        LInput;         //Seound user input
//Overview Statement
    cout << "-----------------Le Minimum and le Maximum-------------------" << endl;
 //Input - using prompt and response method with user Validation
        cout << "Please enter two numbers x and y to determine \nwhich is Larger and smaller."; //prompt
        cin >> FInput >> LInput;   //Response
//User Validation 
        while(cin.fail())
        {
            cout << "HEY! I why you no enter Integer? Plase enter an Integer:"<< endl;
            cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
            cin.ignore(); //skips to the next newline (to ignore anything else on the 
                          //same line as the non-number so that it does not cause another parse failure
            cin >> FInput >> LInput;
        }        
//Processing- Variable assignment statement using an experssion
    (FInput > LInput) ? max = FInput: min =FInput; //condiion operator form if() then x else y;
    (FInput < LInput) ? max = LInput: min =LInput;

//Output
     cout << endl;
     cout << "The largest number is: " << max << endl ;
     cout << "The smalleset number is: " << min << endl ;

     return 0;
}