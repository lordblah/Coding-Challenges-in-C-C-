#include <math.h>#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



 long long int sum_array(  long long int arr[],  int n)
    {
    int i ;
     long long int sum=0;
    for (i = 0; i < n; i++)
        {
        sum = sum + arr[i];
    }
    return(sum);
}

int main(){
    int n; //declaring varable to hold size of array
    scanf("%d",&n); //receving input for size of array
     long long int arr[n]; //declaring arrary
     long long int sum;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf(" %lli", &arr[arr_i]);
    }
    sum = sum_array(arr, n);
    printf("%lli\n", sum);
    return 0;
}

















