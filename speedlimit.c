#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
    int n;
    int m[10],p[10];
    
    while(scanf("%i", &n) == 1)
    {   
        int intial_hr = 0;
        int temp_hr=0;
        int miunte_sum= 0;
        int miunite_print=0;
        if(n == -1)
            {
               exit(0);
            }
        for(int i = 0; i < n; i++ )
        {
            scanf("%i %i", &m[i], &p[i]);
            
            intial_hr =   p[i] - temp_hr;
            miunte_sum = intial_hr * m[i];
            temp_hr = intial_hr + temp_hr; 
            miunite_print = miunte_sum + miunite_print;
        }
        printf("%i miles\n", miunite_print);
        
    }
    return 0;
}