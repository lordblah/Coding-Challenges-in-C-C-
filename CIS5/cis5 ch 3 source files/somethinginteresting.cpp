//Programmer:		Jonathan Hernandez
//Assignment:		Program Challenge
//				    Simon Says
//
//Filename:			
//Creation Date:	10/3/2016
//Description:		The purpose of this program is...
//					For each line that begins with precisely “Simon says”, output the rest of the line.
//					Each line that does not begin with precisely “Simon says” should be ignored.
//
//https://open.kattis.com/problems/simonsays


//Preprocessor Directive
//the next line of code cause the contents of another file to be
//instructed into the program
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string> 
using namespace std;

int main(void){
//Variable definition Statements (aka Variable Declaration statements)
  int T;
//Input for number of commands
  cin >> T;
  cin.ignore(); //Adding cin.ignore() to the next line clears/ignores the newline from the stream.
  //while loop wihch will run until T is == 0
  while(T--){
//Variable definition Statements (aka Variable Declaration statements)
    string line, says = "Simon says"; // says is used to jump to the 9 spot in the string
//Input - Reads in a string and assigns it to line variable    
	getline(cin, line);
//Finds the first character equal to one of the characters in the given character sequence.
    int tr = line.find("Simon");
//For loop which checks the first location in the line arrary and the 9th position. If true it will start at 
//the 11th postion in line and print out the string until it i reaches line length -1. 
    if(tr == 0 && line[0] == 'S' && line[9] == 's'){
      for(int i = tr + says.length() + 1; i < line.length(); i++)
        cout << line[i];
      cout << endl;
    }
  }
  
  return 0;
}