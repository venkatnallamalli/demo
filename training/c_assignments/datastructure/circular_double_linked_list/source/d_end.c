#include"header.h"                                                              
                                                                                
void d_end()                                                                    
{                                                                                                                                
    dl *curr = NULL;                                                            
                                                                                
   /* if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }*/                                                                           
                                                                                
    if(size == 1) {                                                             
        tail = NULL; 
		size--;                                                           
        return;                                                                 
    } 
	curr = tail;
	curr -> next -> prev = curr -> prev;   
	curr -> prev -> next = curr-> next;                                                     
    tail  = curr -> prev;                                                            
    size--;
	free(curr);                                                                     
} 
