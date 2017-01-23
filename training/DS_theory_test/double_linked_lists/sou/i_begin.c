#include"header.h"                                                              
                                                                                
void i_begin(char *ele)                                                           
{                                                                               
	dl *temp;
	
    if(head == NULL) {                                                          
        head = create_node(NULL,ele,NULL);                                           
        size++;                                                                 
    } else {                                                                    
        temp = head;                                                
        head = create_node(NULL, ele, temp);                                           
        size++;                                                                 
    }                                                                           
}
