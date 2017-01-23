#include"header.h"                                                              
                                                                                
void i_middle(int ele)                                                          
{                                                                               
    int i = 0;                                                                 
    dl *curr;
                                                                                
   /* if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }*/                                       
                                                                                
    if(tail == NULL) {                                                          
        printf("linked list not created");                                      
        return;                                                                 
    }      

	if(size == 1) {                                                          
        printf("one element in the linked list");                                      
        return;                                                                 
    }                                                                     
    curr = tail -> next;                                                                
    while((curr -> next) != NULL)                                               
    {   
		if(i == ((size/2) -1) ) {
			break;
		}                                                                       
        curr = curr -> next;                                                    
        i++;                                                                    
    }                                                                           
	curr -> next = create_node(curr, ele, curr -> next);                                             
	curr -> next -> next -> prev  = curr -> next;
    size++;                                                                     
}
