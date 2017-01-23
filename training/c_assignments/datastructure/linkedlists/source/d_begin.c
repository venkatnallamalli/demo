#include"header.h"

void d_begin()
{
	sl *curr;                                                                   
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }  
	
	curr = head;
	head = curr -> link;
	size--;
}
