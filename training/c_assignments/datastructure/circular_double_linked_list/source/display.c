#include"header.h"

void display()
{
    dl *curr = NULL;                                                                   
                                                                                
   /* if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }*/                                                                           
                                                                                
    if(tail == NULL) {                                                          
        printf("linked list not created");                                      
        return;                                                                 
    }                                                                           
    printf("\nlinked list:\n");
	curr = tail -> next;                                                                
	do {                                                                                                                                   
        printf("%d\t",(curr -> data));                                          
        curr = curr -> next;                                                    
    } while((curr) != (tail -> next));                                                                           
}
