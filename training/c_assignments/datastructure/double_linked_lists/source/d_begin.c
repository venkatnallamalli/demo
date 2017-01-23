#include"header.h"                                                              
                                                                                
void d_begin()                                                                  
{                                                                               
    dl *curr = NULL;                                                                   
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    curr = head; 
	curr -> prev = NULL;                                                                
    head = curr -> next;                                                        
    size--;                                                                     
} 
