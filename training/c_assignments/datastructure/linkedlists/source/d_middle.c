#include"header.h"                                                              
                                                                                
void d_middle()                                                                    
{                                                                                  
	int i = 0;                                                               
    sl *curr;         
	                                                        
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                             
	
	if(size == 1) {
		printf("\nlinked list not in the range");
		return;
	}
	
	if(size == 2) {
		curr = head;
		curr -> link = NULL;
		size--;
	}
	curr = head;                                                                
    while((curr) != NULL)                                                       
    {                                                                           
        curr = curr -> link;                                                
		i++;
	}                                                               
    del_node(i/2 + 1);
	                                                       
}
