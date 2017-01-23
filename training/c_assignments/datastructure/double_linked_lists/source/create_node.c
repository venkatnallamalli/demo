#include"header.h"                                                              
                                                                                
dl *create_node(dl *temp1, int ele, dl *temp2)                                              
{                                                                               
    dl *curr = NULL;                                                            
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }
	                                                                           
    curr -> prev = temp1;                                                                            
    curr -> data = ele;                                                         
    curr -> next = temp2;                                                        
    return curr;                                                                
}
