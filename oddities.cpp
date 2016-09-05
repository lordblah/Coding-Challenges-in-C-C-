#include <stdio.h>
#include <stdlib.h> 
int main() {
    //intialize
    int x,n,k;
    
    scanf("%d", &n);
    
    while(n != 0)
    {
        scanf("%d", &k);
        x = k%2;
        
        if(x==0)
        {
            printf("%d is even\n",k);
        }else
        {
            printf("%d is odd\n",k);
        }
        n--;
    }
    
    
    
    
    return 0;
}
