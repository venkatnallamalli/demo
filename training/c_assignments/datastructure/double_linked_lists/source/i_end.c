#include"header.h"                                                              
                                                                                
void i_end(int ele)                                                             
{                                                                               
    dl *curr;                                                                   
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(head == NULL) {                                                          
        printf("linked list not created");                                      
        return;                                                                 
    }                                                                           
                                                                                
    curr = head;                                                                
    while((curr -> next) != NULL)                                                                                                                      curr = curr -> next;
    curr -> next = create_node(curr, ele, NULL);                                       
    size++;                                                                     
} 
