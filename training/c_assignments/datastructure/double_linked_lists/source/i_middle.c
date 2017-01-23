#include"header.h"                                                              
                                                                                
void i_middle(int ele)                                                          
{                                                                               
    int i = 0;                                                                 
    dl *curr;
	dl *temp;
                                                                  
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                       

	if(NULL == (temp = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                     
                                                                                
    if(head == NULL) {                                                          
        printf("linked list not created");                                      
        return;                                                                 
    }      

	if(size == 1) {                                                          
        printf("one element in the linked list");                                      
        return;                                                                 
    }                                                                     
    curr = head;                                                                
    while((curr -> next) != NULL)                                               
    {   
		if(i == ((size/2) -1) ) {
			break;
		}                                                                       
        curr = curr -> next;                                                    
        i++;                                                                    
    }                                                                           
     
	temp = curr -> next;
	curr -> next = create_node(curr, ele, curr -> next);                                             
	temp -> prev = curr -> next;
    size++;                                                                     
}
