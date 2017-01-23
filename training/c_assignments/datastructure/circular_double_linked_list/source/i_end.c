#include"header.h"                                                              
                                                                                
void i_end(int ele)                                                             
{                                                                               
    dl *curr;                                                                   
                                                                                
    /*if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    } */                                                                          
                                                                                
    if(tail == NULL) {                                                          
        printf("linked list not created");                                      
        return;                                                                 
    }                                                                                                                             
    curr = tail;                                                                
    curr -> next = create_node(curr, ele, curr -> next);
	curr -> next -> next -> prev = curr -> next;
	tail = curr -> next;                                       
    size++;                                                                     
} 
