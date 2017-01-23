#include"header.h"

void i_end(int ele)
{
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
    while((curr -> link) != NULL)                                                                                                                      curr = curr -> link;                                                   
	curr -> link = create_node(ele,NULL);
	size++;
}
