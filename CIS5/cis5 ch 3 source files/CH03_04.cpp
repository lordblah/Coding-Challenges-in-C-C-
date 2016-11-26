//Programmer:       Jonathan Hernandez
// Assignment:       Programming Challenge
//                           Chapter 3 Programming Challenge Number 4
//
//Filename:            Ch03_04.cpp
//Creation Date:     10/08/2016
//Description:         The purpose of this program is
//                           to calculate the average rainfall for three months


//Preprocessor Directive
#include<iostream> //enables use of cin & cout keywords
#include<iomanip>            //enables use of setprecison & fixed keywords.
#include<string>               //enables us of string library
#include<windows.h>
//The next line of code begins a function(module) called main
//All c++ programs begin with function main
using namespace std;
int main()
{
 //Variable Declaration Statements
 //Variables month1,month2 and month3 data is selected by the user
        int count = 0;

        string month01,
                   month02,
                   month03;

//Variables m01Rainamt,m02Rainamt and m03Rainamt hold the amount of rain that fall in inches
        double m01RainAmt,
                     m02RainAmt,
                     m03RainAmt,
                     average2MoRain;        //The average amount of rain that fall from the three months

 //Overview Statement
        cout << "------------------Rain Average Calculator---------------" << endl;     //endl means new line
        cout << "This program will average the amount of rainfall that fell \n";    //\n means newline comes from c language
        cout << "between the three select of your choosing. \n\n";

//Input- Using Prompt and Responsive Method
        //gets the three months
        cout << "Enter first month: ";                                                        //Prompt
        cin >> month01;                                                                            //Response
        cout << "Enter second month: ";                                                    //Prompt
        cin >> month02;                                                                             //Response
        cout << "Enter third month: ";                                                        //Prompt
        cin >> month03;                                                                             //Response
        cout << "Enter the amount of rainfall from the first month: ";           //Prompt
        cin >> m01RainAmt;                                                                       //Response
        cout << "Enter the amount of rainfall from the second month: ";      //Prompt
        cin >> m02RainAmt;                                                                       //Response
        cout << "Enter the amount of rainfall from the third month: ";          //Prompt
        cin >> m03RainAmt;                                                                      //Response

//Processing - Variable assignment statement using an expression
        average2MoRain = (m01RainAmt + m02RainAmt + m03RainAmt ) /3 ;
//OutPut
// Cool loader spinner
std::cout << '-' << std::flush;
	while(count != 500){
		Sleep(1);
		std::cout << "\b\\" << std::flush;
		Sleep(1);
		std::cout << "\b|" << std::flush;
		Sleep(1);
		std::cout << "\b/" << std::flush;
		Sleep(1);
		std::cout << "\b-" << std::flush;
		count++;
	}
//Format output
//Set to to show two digits to the right of the decimal point
        cout << setprecision(2) << fixed;

//Output
        cout << "\n\nyour average rainfall for: "
         << month01 << " ," <<   month02 << ",  and " << month03 << " is " << average2MoRain << " inches" << endl;

        return 0;

}

