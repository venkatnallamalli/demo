#include"header.h"                                                              
                                                                                
void d_end()                                                                    
{                                                                               
    int i = 0;                                                                  
    int j = 0;                                                                  
    dl *curr = NULL;                                                            
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(size == 1) {                                                             
        head = NULL; 
		size--;                                                           
        return;                                                                 
    }                                                                                                                                           
    curr = head;                                                                
    while((curr -> next) != NULL)                                               
        curr = curr -> next;                                                    
                                                                                
    curr = curr -> prev;                                                        
    curr -> next  = NULL;                                                            
    size--;                                                                     
} 
