/** 
 * Program title: cipher.c
 * Author:Tapatiolookalikeguy
 * Purpose:a program that encrypts messages using Vigenère’s cipher. 
 * Same code as cipher.
 **/
 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<cs50.h>

//prototype functions
int uppercasemath(int, char);
int lowercasemath(int, char);

int main(int argc, string argv[])
{

    //k, secrect key, # of places to moveover
    
    int key = atoi(argv[1]);
    
    //test if user inputes two arguments, remember first arguemnt is file name.
   if(argc == 3)
   {
       // char c = enciper();
        
       for (int i = 2; i < argc; i++)
        {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
        //Loop goes through each charater in the array, starting at slot 0
        
        int letter = argv[i][j];
        //check if chater is upper case, lower case or punctuation 
        if (isupper(letter))
        {
            
            int r = uppercasemath(key,letter);
       
            printf("%c", r);
            
        }
        else if(islower(letter))
        {
            int r = lowercasemath(key,letter);
       
            printf("%c", r);
        }
        else if(ispunct('.') && ispunct('?'))
        {
            printf("%c", letter);
        }
        else if(isblank(' '))
        {
            printf(" ");
        }
        
       
        }
    }
    printf("\n");
       
   }
   else // if arguements enteres is less then 3 then asks user for input
   {    
       printf(" \n");
        
        for (int i = 2; i < argc; i++)
        {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
        //Loop goes through each charater in the array, starting at slot 0
        
        int letter = argv[i][j];
        //check if chater is upper case, lower case or punctuation 
        if (isupper(letter))
        {
            
            int r = uppercasemath(key,letter);
       
            printf("%c", r);
            
        }
        else if(islower(letter))
        {
            int r = lowercasemath(key,letter);
       
            printf("%c", r);
        }
        else if(ispunct('.') && ispunct('?'))
        {
            printf("%c", letter);
        }
        else if(isblank(' '))
        {
            printf(" ");
        }
        
       
        }
   }
}
}

int uppercasemath(int key, char letter)
{
    int first_result = (key + letter); //assigns new letter, from cal numbers places to move over
    int overflow_res;
    if(first_result > 90) //if result is over range of ascii uppcase range. then subtract 26 to start from beigging of alphbet
    {
        overflow_res = ((key + letter) - 26);
        return overflow_res;
    }
    else
    {
        return first_result;
    }
}
int lowercasemath(int key, char letter)
{
    int first_result = (key + letter);//assigns new letter, from cal numbers places to move over
    int overflow_res;
    if(first_result > 122)
    {
        overflow_res = ((key + letter) - 26);//if result is over range of ascii lowercase range. then subtract 26 to start from beigging of alphbet
        return overflow_res;
    }
    else
    {
        return first_result;
    }
}