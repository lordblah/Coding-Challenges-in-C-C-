//Programmer:               Jonathan Hernandez
//Assignment:               Programming Challenge
//                          Chapter 4, Number 4
//
//Filename:                 CH04_PC04.CPP
//Creation Date:            Nov 09, 2016
//Description:              The purpose of this programming is too
//                          asks for the length and width of two rectangles.
//                          The program should tell the user
//							which rectangle has the greater area, or 
//							if the areas are the same.	

//Preprocessor Directive
#include <iostream>
#include <iomanip>
using namespace std;
//The next line of code begins a function called main
//All C++ programs begin with function main
int main()
{
	char again;		// To hold Y or N input
	do
	{
		//Variable Definition Statements(aka Variable Declaration Statements)
		int width_of_first_rec = 0,         //width of first rectangle
			length_of_first_rec = 0,        //length of first rectangle
			width_of_second_rec = 0,        //width of second rectangle
			length_of_second_rec = 0,		//length of first rectangle
			area_of_first_rec = 0,			//area of first rectangle
			area_of_second_rec = 0;         //area of first rectangle
							//Overview Statement
		cout << "-----------------Areas of Rectangle-------------------" << endl;
		//Input - using prompt and response method with user Validation
		cout << "Enter the width of first Rectanlge: "; //prompt
		cin >> width_of_first_rec;   //Response
								   //User Validation 
		while (cin.fail())
		{
			cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
			cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
			cin.ignore(); //skips to the next newline (to ignore anything else on the 
						  //same line as the non-number so that it does not cause another parse failure
			cin >> width_of_first_rec;
		}
		cout << "Enter the length of first Rectanlge: "; //prompt
		cin >> length_of_first_rec;   //Response
									 //User Validation 
		while (cin.fail())
		{
			cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
			cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
			cin.ignore(); //skips to the next newline (to ignore anything else on the 
						  //same line as the non-number so that it does not cause another parse failure
			cin >> length_of_first_rec;
		}
		cout << "Enter the width of Second Rectanlge: "; //prompt
		cin >> width_of_second_rec;   //Response
									  //User Validation 
		while (cin.fail())
		{
			cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
			cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
			cin.ignore(); //skips to the next newline (to ignore anything else on the 
						  //same line as the non-number so that it does not cause another parse failure
			cin >> width_of_second_rec;
		}
		cout << "Enter the length of Second Rectanlge: "; //prompt
		cin >> length_of_second_rec;   //Response
									  //User Validation 
		while (cin.fail())
		{
			cout << "HEY! I why you no enter Integer? Plase enter an Integer:" << endl;
			cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),     
			cin.ignore(); //skips to the next newline (to ignore anything else on the 
						  //same line as the non-number so that it does not cause another parse failure
			cin >> length_of_second_rec;
		}
		//Processing- Variable assignment statement using an experssion
		area_of_first_rec = (2 * width_of_first_rec) + (2 * length_of_first_rec);
		area_of_second_rec = (2 * width_of_second_rec) + (2 * length_of_second_rec);

		//Output
		cout << endl;
		if (area_of_first_rec > area_of_second_rec)
		{
			cout << "The largest rectangle is the first rectangle with area of " 
			<< area_of_first_rec << endl;
		}
		else if (area_of_first_rec < area_of_second_rec)
		{
			cout << "The largest rectangle is the second rectangle with area of "
				<< area_of_second_rec << endl;
		}
		else
		{
			cout << "The rectangles aeras are the same size with an area of "
				<< area_of_second_rec << endl;

		}
		cout << "Do you want to Run again: (Y/N)" << endl;
		cin >> again;
	} while (again == 'Y' || again == 'y');
	return 0;
}