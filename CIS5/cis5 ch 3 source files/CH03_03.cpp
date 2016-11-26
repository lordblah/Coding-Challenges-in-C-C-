//Programmer:       Jonathan Hernandez
// Assignment:       Programming Challenge
//                           Chapter 3 Programming Challenge Number 3
//
//Filename:            Ch03_03.cpp
//Creation Date:     10/08/2016
//Description:         The purpose of this program is
//                           to calculate the average of five test scores


//Preprocessor Directive
#include<iostream> //enables use of cin & cout keywords
#include<iomanip>            //enables use of setprecison & fixed keywords.
//The next line of code begins a function(module) called main
//All c++ programs begin with function main
using namespace std;
int main()
{
 //Variable Declaration Statements
        int   test01,
                test02,
                test03,
                test04,
                test05;

        double average;
 //Overview Statement
        cout << "------------------Test Average Calculator---------------" << endl; // means new line
        cout << "This program will calculate the average of five test scores.\n\n";    //\n means newline comes from c language
//Input- Using Prompt and Responsive Method
        //get the test scores
        cout << "Enter test score 1: ";         //Prompt
        cin >> test01;                                  //Response
        cout << "Enter test score 2: ";         //Prompt
        cin >> test02;                                  //Response
        cout << "Enter test score 3: ";         //Prompt
        cin >> test03;                                  //Response
        cout << "Enter test score 4: ";         //Prompt
        cin >> test04;                                  //Response
        cout << "Enter test score 5: ";         //Prompt
        cin >> test05;                                  //Response

//Processing - Varaible assignment statement using an expression
        average = (test01 + test02 + test03 + test04 + test05) / 5 ;

//Format output
//Set to to show two digits to the right of the decimal point
        cout << setprecision(2) << fixed;

//Output
        cout << "\n\n your average test score is: " << average << "%" << endl;

        return 0;

}
