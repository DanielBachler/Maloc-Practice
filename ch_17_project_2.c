/*******************************************************************************
Daniel Bachler
CS120
3/7/16

Desc:
     Contains a method to duplicate a string, and allocate that new string
     into memory.
*******************************************************************************/
 
#include <stdlib.h>
 
int my_strlen(char *str){
    char *pc = str;
    while(*(pc++));
    return pc - str;
}
 
char *duplicate(char *str){
    int stringLen = my_strlen(str), i;
    char *temp = (char *)malloc(stringLen * sizeof(char));
   
    if(temp == NULL)
        return NULL;
   
    for(i = 0; i < stringLen; ++i)
        *(temp + i) = *(str + i);
       
    return temp;
}