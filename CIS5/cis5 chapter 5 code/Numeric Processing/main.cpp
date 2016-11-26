#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Variable definition Statements (aka Variable Declaration statements)
    fstream inputFile;
    int number;
    int counter = 0;
    int total = 0;
    int average = 0;
    //Overview Statement
	cout << "------------------Using Files Numeric Processing---------------"<<endl;
    //open file
    inputFile.open("random.txt");

    //if the file successfully opned. process it
    if(inputFile)
    {
        //read the numbers from the file
        while(inputFile >> number)
        {
            counter++;
            total += number;
        }
        inputFile.close();
    }else
    {
        //Display an error message
        cout << "Error opening the file\n";
    }
    //Processing- Variable assignment statement using an expression
    average = total / counter;

    cout << "The number of numbers in the file "<< counter<< endl;
    cout <<"The sum of all the numbers in the file (a running total) " << total<< endl;
    cout << "The average of all the numbers in the file "<< average << endl;
    return 0;
}
