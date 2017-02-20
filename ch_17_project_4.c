/*******************************************************************************
Daniel Bachler
CS120
3/7/16
 
Desc:
     Allocates memory for a rectangle struct, then loads specific values
     into those memory locations
*******************************************************************************/
 
#include <stdlib.h>
 
struct point{int x, y;};
 
struct rectangle { struct point upper_left, lower_right;};
 
struct rectangle *p;
 
int main(void){
    /* Allocate enough memory for a rectangle */
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
   
    if(p != NULL){
        p->upper_left.x = 10;
        p->upper_left.y = 25;
        p->lower_right.x = 20;
        p->lower_right.y = 25;
    }
   
    free(p);
    return 0;
}