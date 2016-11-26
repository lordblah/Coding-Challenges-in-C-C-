//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//					        Chapter5, Number 2
//
//Filename:			CH05_PC2
//Creation Date:	11/13/2016
//Description:		The purpose of this program is...
//      			        loop to display the characters for the ASCII codes
//                          from 0 to 127
//

//Preprocessor Directive
//the next line of code cause the contents of another file to be
//instructed into the program
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    //Variable declaration
    int basenumber0 = 0,
          basenumber1 = 16,
          basenumber2 = 32,
          basenumber3 = 48,
          basenumber4 = 64,
          basenumber5 = 80,
          basenumber6 = 96,
          basenumber7 = 112;
    char userchoice;

    //Overview Statement
	cout << "-----------------Characters for the ASCII Codes---------------"<<endl;
	do{

    for(int i = 0; i < 16; i ++)
    {
    //Variable assignment calculation
    basenumber0++ ;
    basenumber1++;
    basenumber2++;
    basenumber3++;
    basenumber4++;
    basenumber5++;
    basenumber6++;
    basenumber7++;
    //Output-
    cout << basenumber0 <<"."<<(unsigned char)basenumber0 <<
    setw(3) <<basenumber1 <<"."<<(unsigned char)basenumber1 <<
    setw(4) <<basenumber2 <<"."<<(unsigned char)basenumber2 <<
    setw(5) << basenumber3 <<"."<<(unsigned char)basenumber3 <<
    setw(6) <<basenumber4 <<"."<<(unsigned char)basenumber4 <<
    setw(7) <<basenumber5 <<"."<<(unsigned char)basenumber5 <<
    setw(8) <<basenumber6 <<"."<<(unsigned char)basenumber6 <<
    setw(10) << basenumber7 <<"."<<(unsigned char)basenumber7 << endl  ;



    }
    cout << "would you like to run the program again? ";
    cin >> userchoice;
    }while (userchoice ==  'y'  ||  userchoice  ==  'Y');
    return 0;
}
