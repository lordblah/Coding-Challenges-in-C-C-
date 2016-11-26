//Programmer:               Jonathan Hernandez
//Assignment:                Programming Challenge
//                                   Chapter 3, Number 10
//
//Filename:                    CH03_PC10.CPP
//Creation Date:             Oct 8, 2016
//Description:                 The purpose of this programming is too
//                                   to convert Celsius temperature to Fahrenheit
//

//Preprocessor Directive
#include <iostream>
#include <iomanip>
using namespace std;
//The next line of code begins a function called main
//All C++ programs begin with function main
int main()
{
//Variable Definition Statements(aka Variable Declaration Statements)
    double celsius,                 //To hold the Temperature in Celsius
                 fahrenheit;        //To hold the temperature in Fahrenheit
//Overview Statement
    cout << "-----------------Temperature Convector-------------------" << endl;
 //Input - using prompt and response method
        cout << "Enter Temperature value you want converted: "; //prompt
        cin >> celsius;   //Response
//Processing- Variable assignment statement using an expression
    fahrenheit = ((9.0/5.0 * celsius)) + 32;
//format the output
    cout << setprecision(1) << fixed;
//Output
     cout << endl;
     cout << celsius << " degrees Celsius is equal to " << endl ;
     cout << fahrenheit << " degrees Fahrenheit " << endl ;

     return 0;
}
