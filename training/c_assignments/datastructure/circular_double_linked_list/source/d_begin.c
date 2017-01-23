#include"header.h"                                                              
                                                                                
void d_begin()                                                                  
{                                                                               
    dl *curr = NULL;                                                                   
                                                                                
   /* if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
  */                                                                              
    curr = tail;  
	curr -> next -> next -> prev = curr;
	curr -> next = curr -> next -> next;
	size--;
//	free(curr -> next);                                                                     
} 
