#include"header.h"                                                              
                                                                                
void d_middle()                                                                 
{                                                                                                                                 
    dl *curr = NULL;    
	dl *temp1 = NULL;  
	dl *temp2 = NULL;
	int i =1;                                                             
                                                                                                                                      
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                         
	if(NULL == (temp1 = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }

	 if(NULL == (temp2 = (dl *)malloc(sizeof(dl)))) {                            
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }
	                                                       
    if(size == 1) {                                                             
        printf("\nlinked list not in the range");                               
        return;                                                                 
    }                                                                           
                                                                                
    if(size == 2) {                                                             
        curr = head;                                                            
        curr -> next = NULL;                                                    
        size--; 
		return;                                                                
    }                                                                           
    curr = head;                                                                
    while((curr -> next) != NULL)                                                       
    {   
		if(i == (size/2))
			break;                                                                        
        curr = curr -> next;
		i++;                                                                                   
    }                                                                           
  
//	temp1 = curr -> prev;
//	temp1 -> next = curr -> next;

//	temp2 = curr -> next;
//	temp2 -> prev = curr -> prev;                                                     

	curr -> prev -> next = curr -> next;
	curr -> next -> prev = curr -> prev;
  //  size--;                                                                           
//	free(curr);
} 
