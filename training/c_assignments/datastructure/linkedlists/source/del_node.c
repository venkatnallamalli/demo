#include"header.h"

void del_node(int pos)
{
	int i = 1;        
	int j = 0;                                                          
    sl *curr;
	sl *temp;                                                                   
                                                                                
    pos = pos - 1;                                                                            
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                               
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }       

	if(NULL == (temp = (sl *)malloc(sizeof(sl)))) {                               
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }    
	                                                                 
    if(pos == (size - 1)) {
		while(j != (size- 2))                                                               
    	{                                                                           
        	curr = curr -> link;                                                    
        	j++;                                                                    
    	}                                                                       
    	curr -> link = NULL;                                                        
   		size--;
		return;  
	}
     
	else if(pos == 0) {
		curr = head; 
		head = curr -> link;
		size--;
		return;
	}         
                                                                                                            
	if((pos > (size- 1)) || (pos < 0)) {
		printf("\nlinked list beyond the range");
		return;
	}  
    curr = head;                                                                
    while((curr) != NULL)                                                       
    {      
		if(i != pos) {                                                                    
        	curr = curr -> link;                                                    
		} else {
			break;
		}
        i++;                                                                    
    }
	temp = curr;
	curr = curr -> link;
	temp -> link = curr -> link;
	size--;
}
