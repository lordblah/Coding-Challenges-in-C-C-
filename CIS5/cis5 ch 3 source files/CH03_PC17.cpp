//Programmer:               Jonathan Hernandez
//Assignment:                Programming Challenge
//                                   Chapter 3, Number 17
//
//Filename:                    CH03_PC17.CPP
//Creation Date:             Oct 8, 2016
//Description:                 The purpose of this programming is too
//                                   Calculate a monthly payment on a loan
//

//Preprocessor Directive
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//The next line of code begins a function called main
//All C++ programs begin with function main
int main()
{
//Variable Definition Statements(aka Variable Declaration Statements)
        int         numTimesCompound;    //To hold the number of times the users interest is compounded
        double  userPrincipal,               //To hold the balance in the user account
                      userInterestRate,        //To hold the annual interest rate of the user
                      interestAmount,          //To hold the user total interest amount
                      finalBalance;               //To hold the user monthly payment on a loan
//Overview Statement
        cout << "-----------------Interest Calculator-------------------" << endl;
        cout << "This program calculates your balance in a savings account after one year. "<< endl;
 //Input - using prompt and response method
        cout << "Enter the balance of your account(Principal):$"; //prompt
        cin >> userPrincipal;   //Response
        cout << "Enter the annual interest rate . "; //prompt
        cin >> userInterestRate;   //Response
        cout << "Enter the number times the interest is compounded. "; //prompt
        cin >> numTimesCompound;   //Response
//Processing- Variable assignment statement using an experssion
        finalBalance = userPrincipal * (pow(1+(userInterestRate * 0.01) / numTimesCompound,numTimesCompound));
        interestAmount = finalBalance - userPrincipal;
//format the output
        cout << setprecision(2) << fixed;
//Output
        cout << endl;
        cout << "Interest Rate:" << setw(16) << userInterestRate << "%" << endl ;
        cout << "Time Compounded:" << setw(14) << numTimesCompound  << endl ;
        cout << "Principal:" << setw(13) << "$" << userPrincipal  << endl ;
        cout << "Interest:" << setw(16) << "$" <<  interestAmount << endl ;
        cout << "Final Balance:" << setw(9) <<"$" <<  finalBalance  << endl ;
     return 0;
}
