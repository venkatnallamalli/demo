#include"header.h"                                                              
                                                                                
void i_middle(int ele)                                                          
{                                                                               
    int i = 0;                                                                  
    sl *curr;                                                                   
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }     
	                                                                      
    if(head == NULL) {                                                          
        printf("linked list not created");                                                                        
        return;                                                                 
    }                                                                             
    curr = head;                                                                
    while((curr -> link) != NULL)                                               
    {   
		curr = curr -> link;                                                                        
        i++;                                                                    
    }                                                                           
                                                                                
    pos_insert(ele, ((i/2) + 2) );                                                   
	size++;
} 
