#include"header.h"                                                              
                                                                                
void i_begin(int ele)                                                           
{                                                                               
	
	if (tail == NULL) {                                                                                                                    
        tail = create_node(NULL, ele, NULL);                                          
		tail -> prev = tail;
		tail -> next = tail; 
        size++;                                                                 
    } else { 
		 tail -> next = create_node(tail,ele,tail -> next); 
		 tail -> next -> next -> prev = tail -> next;
		 size++;
	} 
}
