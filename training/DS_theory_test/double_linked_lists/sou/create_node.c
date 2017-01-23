#include"header.h"                                                              
                                                                                
dl *create_node(dl *temp1, char *ele, dl *temp2)                                              
{                                                                               
    dl *curr = NULL;                                                            
                                                                                
    if(NULL == (curr = (dl *)malloc(sizeof(dl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }
	                                                                           
    curr -> prev = temp1;                                                                            
    strcpy(curr -> data ,ele);                                                         
    curr -> next = temp2;                                                        
    return curr;                                                                
}
