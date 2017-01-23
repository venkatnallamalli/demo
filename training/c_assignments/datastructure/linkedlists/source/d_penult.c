#include"header.h"                                                              
                                                                                
void d_penult()                                                                    
{                                                                               
    int i = 0;                                                                  
    sl *curr;                                                                   
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }     

	if(size == 1) {
		printf("\nLinked list is not in the range");
		return;
	}

		                                                                                                                                
    curr = head;                                                               
    while((curr) != NULL)                                                 
	{      
        curr = curr -> link;                                                    
        i++;                                                                    
    }                                                                           
                                                                                
    del_node(i - 1);
	                                                                
}
