#include"header.h"                                                              
                                                                                
void d_middle()                                                                 
{                                                                                                                                 
    dl *curr = NULL;    
	int i =0;                                                             
                                                                                                                                      
   /* if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }*/                                                                           
                         
    if(size == 1) {                                                             
        printf("\nlinked list not in the range");                               
        return;                                                                 
    }                                                                           
                                                                                
    if(size == 2) {                                                             
        curr = tail;                                                            
        curr -> prev -> next = curr -> prev;                                                    
        size--; 
		return;                                                                
    }                                                                           
    curr = tail -> next;                                                                
    do {   
		if(i == (size/2))
			break;                                                                        
        curr = curr -> next;
		i++;                                                                                   
    } while((curr -> next) != tail);                                                                           
  
	curr -> next -> prev = curr -> prev;
	curr -> prev -> next = curr -> next;                                                      
    size--;                                                                           
	free(curr);
}
