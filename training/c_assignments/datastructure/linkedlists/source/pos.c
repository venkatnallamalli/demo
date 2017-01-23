#include"header.h"
void pos_insert(int ele, int pos)
{
	int i = 0 ;
	sl *curr;                                                                   
    sl *temp;                                                                           

	pos = pos -2; 
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                              
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                          
                                                                                
    curr = head;                                                                
    while((curr -> link) != NULL) {
		if(i != pos) 
		 	curr = curr -> link;  
		else
			break;
	i++;
	}
	temp = curr -> link;
    curr -> link = create_node(ele,temp); 
}
