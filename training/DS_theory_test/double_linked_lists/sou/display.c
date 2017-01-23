#include"header.h"
/*
void display()
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
    printf("\nlinked list:\n");
	curr = head;                                                                
    while((curr) != NULL)                                                       
    {                                                                           
        printf("%d\t",(curr -> data));                                          
        curr = curr -> next;                                                    
    }                                                                           
}

*/

void display(dl *curr)                                                                  
{                                                                               
    //dl *curr; 
	
		if(curr != NULL)
		{
			display(curr -> next);
			printf("%s",curr -> data);
			//display(curr -> next);
		}
}
