#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char n[1000],m[1000];
    int length_n,length_m;
    
    scanf("%s",&n);
    scanf("%s", &m);
    
    length_n = strlen(n);
    length_m = strlen(m);
    if(length_n == length_m | length_n > length_m)
    {
        printf("go");
        
    }else
    {
        printf("no");
    }
}
  
