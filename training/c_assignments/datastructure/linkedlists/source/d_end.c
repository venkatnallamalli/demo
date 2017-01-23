#include"header.h"                                                              
                                                                                
void d_end()                                                                  
{              
	int i = 0;
	int j = 0;                                                                 
    sl *curr;                                                                   
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }  
	
	if(size == 1) {
		head = NULL;
		return;
	} 	                                                                                                                                                     
    curr = head;                                                                
    while((curr) != NULL)                                                       
    {                                                                                                         
        curr = curr -> link;
		i++;                                                    
    }       
	i = i - 2;
	curr = head;                                                                
    while(j != i)                                                       
    {                                                                           
        curr = curr -> link;                                                    
        j++;                                                                    
    } 
	curr -> link = NULL;
	size--;                                              
}                                                                                
