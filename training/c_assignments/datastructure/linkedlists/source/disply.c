#include"header.h"

void display()
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
	while((curr) != NULL)
	{
		printf("%d\t",(curr -> data));
		curr = curr -> link;
	}
}   
