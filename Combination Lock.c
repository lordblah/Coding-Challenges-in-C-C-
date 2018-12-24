/**
*Authur: Tapatiolookalikeguy
*Program:Combination Lock
Summury: Consider a 5-slot combination lock where each slot contains a dial numbered with the ten sequential 
decimal integers in the inclusive range from  0 to 9. In one operation, you can choose a slot and rotate the dial 
by one click,  either in the positive direction (to increase the displayed number by 1) or the negative 
direction (to decrease the displayed number by )
*Input Format
*
*The first line contains  space-separated integers denoting the current slot configuration. 
*The second line contains  space-separated integers denoting the desired slot configuration.
*
*Constraints
*
*Each number in a slot is {0,1,2,3,4,5,6,7,8,9}
*Output Format
*
*Print a single integer denoting the minimum number of moves to change this configuration to the correct one.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y = 0;
    int amount_moves= 0;
    //Input Format 
    //The first line contains 5 space-separated integers denoting the current slot configuration. 
    //The second line contains 5 space-separated integers denoting the desired slot configuration
    int n = 5;
    int current_config[n];
    int desired_config[n];
    //loop though current configuration and gater data
    for(int i=0; i < n; i++)
        {
        scanf("%d", &current_config[i]);
    }
     //loop though desired configuration and gater data
    for(int i=0; i < n; i++)
        {
        scanf("%d", &desired_config[i]);
    }
    
    for(int i =0; i < n; i++)
       {
        x = abs(desired_config[i] - current_config[i]);
        if (x < 5)
            {
            amount_moves = x + amount_moves;
        }else
            {
            y = 10 - abs(desired_config[i] - current_config[i]);
             amount_moves = y + amount_moves;
        }
    }
    //Print a single integer denoting the minimum number of moves to change this configuration to the correct one.
        printf("%d", amount_moves);
   
    
    
    
    
    return 0;
}
