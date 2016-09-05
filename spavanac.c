#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m; 
    int temp;
    int minute;
    scanf("%d %d",&n,&m);
    temp = m - 45;
    if(temp < 0)
    {
    minute = 60 + temp;
    
    }else
    {
        minute = temp;
    }
    
    if(n == 0 && m < 45)
    {
        n = 23;
    }else if(temp < 0)
    {    n--;
}

    
    printf("%d %d", n,minute);
}