
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* n =(char *)malloc(10240 * sizeof(char));; //input string 
    //string of at most 50 characters, Borko’s moves. 
    //Each of the characters is ‘A’, ‘B’ or ‘C’ 
    
    scanf("%s",n);
    
    //This array is going to represent cups
    char arr[3] = {'1','0','0'};
    //selction sort. swap postion of ball 
    for(int i  = 0; i <1 ; i++ )
    {
        int k;
        for(int j = 0; n[j] != '\0' ;j++)
        {
                   char letter = n[j];
                   if(letter == 'A' || letter == 'a')
                   {
                       k = arr[1];
                       arr[1]=arr[0];
                       arr[0]= k;
                   }else if(letter == 'B' | letter == 'b')
                   {
                       k = arr[2];
                       arr[2]=arr[1];
                       arr[1]= k;
                   }else
                   {
                       k = arr[0];
                       arr[0]=arr[2];
                       arr[2]= k;
                   }
    }
    //search for ball
    
    if(arr[0] == '1')
    {
       printf("1");
    }else if(arr[1] == '1')
    {
       printf("2");
    }else{
       printf("3");
    }
    //after swaping of postions print out position of where int 1 resides.
    return 0;
}
}