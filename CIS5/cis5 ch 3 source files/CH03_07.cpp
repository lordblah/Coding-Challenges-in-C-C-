//Programmer:               Jonathan Hernandez
//Assignment:                Programming Challenge
//                                   Chapter 3, Number 7
//
//Filename:                    CH03_PC07.CPP
//Creation Date:             Oct 8, 2016
//Description:                 The purpose of this programming is too
//                                   to convert U.S Dollar to the Euro and Yen
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
    double dollars,                 //To hold the Dollar value
                 euroToDollar,       //To hold the converted Dollar to Euro value
                 yenToDollar;        //To hold the converted Dollar to yen value
//Overview Statement
    cout << "-----------------Currency Convector-------------------" << endl;
 //Input - using prompt and response method
        cout << "Enter amount of U.S dollars you want converted to both Euro and Yen. "; //prompt
        cin >> dollars;   //Response
//Processing- Variable assignment statement using an experssion
    euroToDollar = 0.72 * dollars;
    yenToDollar = 101.65 * dollars;
//format the output
    cout << setprecision(2) << fixed;
//Output
     cout << endl;
     cout << "The U.S Dollar to the Euro is: " << euroToDollar << endl ;
     cout << "The U.S Dollar to the Yen is: " << yenToDollar << endl ;

     return 0;
}
