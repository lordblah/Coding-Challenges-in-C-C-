#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
int n,*p,i,j,sum,k;

scanf("%d",&n);
p = (int *)calloc(n,sizeof(int));

for(i=0;i <= n*n - 1;i++)
    scanf("%d",&p[i]);

j=0;k=n-1;sum=0;

for(i=1;i<=n;i++)
    {
    sum += p[j];
    sum -= p[k];
    j   += n+1;
    k   += n-1;
}

printf("%d",abs(sum));
return 0;
}
