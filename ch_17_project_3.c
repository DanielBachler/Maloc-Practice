/*******************************************************************************
Daniel Bachler
CS120
3/7/16
 
Desc:
     Contains a method to allocate memory for an integer array, with
     preset values in each position in the array
*******************************************************************************/
 
#include <stdlib.h>
#include <stdio.h>
 
int *create_array(int n, int initial_value){
    int *arr = (int *)malloc(n * sizeof(int)), i;
   
    if(arr == NULL)
        return NULL;
   
    for(i = 0; i < n; ++i)
        *(arr + i) = initial_value;
   
    return arr;
}