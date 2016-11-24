/**
 * Author: Tapatiolookalikeguy
 * Program: SortingStuff.c
 * Program Description: A C program that uses Merge Sort algorithm to 
 * sort a static array in ascending order. Time Complexity of this program is
 * omega(nlogn) in all three cases(worst,average and best).
 */
#include<stdlib.h>
#include<stdio.h>

//function prototype
void merge(int array[],int left,int middle,int right);
void mergeSort(int array[], int l, int r);
//merge function to merge arrary
void merge(int array[],int left,int middle,int right)
{
  int i,j,k;
  int numberOne = middle - left + 1;
  int numberTwo = right - middle;
  
  //temparay arrays
  int tempL[numberOne], tempR[numberTwo];
  
  //copy array first half to tempL
  for(int i = 0; i < numberOne; i++)
    {
      tempL[i] = array[left + i];
    }
  //copy array second half to tempR
  for(int j = 0; j < numberTwo;j++)
    {
      tempR[j] = array[middle + 1 + j];
    }
    i = 0;
    j = 0; 
    k = left;
  
  while(i < numberOne && j < numberTwo)
  {
    if(tempL[i] <= tempR[j])// comparing the smallest in tempL with smallest in tempR
    {
      array[k++] = tempL[i++]; //assigns value and increments both k and i by 1
      
    }else
    {
      array[k++] = tempR[j++]; //assigns value and increments both k and j by 1
    }
  }
  //sorts the remaindind numbers in tempL
  while(i < numberOne)
  {
    array[k++] = tempL[i++];
    
  }
  //sorts the remaindind numbers in tempR
  while(j < numberTwo)
  {
    array[k++] = tempR[j++];
    
  }
  
  }


//merge sort recusion function that calls it self repeatedlly until arrar is sorted
void mergeSort(int array[], int l, int r)
{
  //base condition to break out of recursion 
  if(l < r)
  {
  //finds the midpoint to divide arrary
  int m = l+(r-l)/2;
  //call mergesort for first half
  mergeSort(array, l ,m);
  //call mergesort for second half
  mergeSort(array, m + 1, r);
  //Merge thes the two halves
  merge(array,l,m,r);
    
  }
}
//main funtion which creates arrar to be sorted
int main()
{
  //create array
  int array[] = {9, 21, 2, 60,65, 1000, -9, 0 , -5, 84};
  //assgins length of array
  int arrayGirth = sizeof(array) / sizeof(array[0]);
  mergeSort(array,0, arrayGirth - 1 );

  //print le  sorted array
  for (int i=0; i < arrayGirth; i++)
  {
        printf("%d ", array[i]);
        
  }
  printf("\n");
  return 0;
}
