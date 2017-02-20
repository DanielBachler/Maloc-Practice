/*******************************************************************************
Daniel Bachler
CS120
3/7/16
 
Desc:
     Contains a method to allocate bytes into memory, and terminate the
     program when unsuccessful
*******************************************************************************/
 
#include <stdio.h> 
#include <stdlib.h>
 
void *my_malloc(int bytes){
    void *temp = malloc(bytes);
   
    if(temp != NULL)
        return temp;
   
    /* Implied else */
    perror("Error");
   
    /* Is this necessary? */
    free(temp);
    exit(EXIT_FAILURE);
}