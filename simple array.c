#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int sum_array(long int arr[], long int n)
    {
    long int i, sum=0;
    for (i = 0; i < n; i++)
        {
        sum = sum + arr[i];
    }
    return(sum);
}

int main(){
    int n; //declaring varable to hold size of array
    scanf("%d",&n); //receving input for size of array
    long int arr[n]; //declaring arrary
    long int sum;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum = sum_array(arr, n);
    printf("%d\n", sum);
    return 0;
}




















