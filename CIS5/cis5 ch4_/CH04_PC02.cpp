//Programmer:              Jonathan Hernandez
//Assignment:               Programming Challenge
//                                  Chapter 4, Number 2
//
//Filename:                 CH04_PC02.CPP
//Creation Date:             Oct 27, 2016
//Description:            The purpose of this programming is too
//                              asks the user to enter a number within the range of 1 through
//                              10 to display the Roman numeral version of that number.
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
    int UserInput;

    cout << "-----------------Roman Numeral Converter-------------------" << endl;
 //Input - using prompt and response method with user Validation
        cout << "Please enter a number between 1- 10: "; //prompt
        cin >> UserInput;   //Response
        cout <<endl; //extra space

//User Validation
        while(UserInput < 1 || UserInput > 10)
        {
            cout << "HEY! I why you no enter Integer? Plase enter an Integer:"<< endl;
            cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),
            cin.ignore(); //skips to the next newline (to ignore anything else on the
                          //same line as the non-number so that it does not cause another parse failure
            cin >> UserInput;
        }
         cout << "Your number converted to a Roman Numeral is ";
//Processing- Variable assignment statement using an experssion/ Output
        switch(UserInput) {
            case 1:
                cout << "I" <<endl;
                break;
            case 2:
                cout <<"II" <<endl;
                break;
            case 3:
                cout <<"III" <<endl;
                break;
            case 4:
                cout << "IV"<<endl;
                break;
            case 5:
                cout<<"V"<<endl;
                break;
            case 6:
                cout<<"VI"<<endl;
                break;
            case 7:
                cout<<"VII"<<endl;
                break;
            case 8:
                cout<<"VIII"<<endl;
                break;
            case 9:
                cout<<"IX"<<endl;
                break;
            case 10:
                cout<<"X"<<endl;
                break;
            default:
                cout<<"You entered a parameter out of range."<<endl;
                break;
        }

     return 0;
}
