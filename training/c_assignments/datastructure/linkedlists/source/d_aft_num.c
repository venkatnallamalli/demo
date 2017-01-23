#include"header.h"                                                              
                                                                                
void d_aft_num()                                                                    
{                                                                               
    int num;     
	int i = 0;                                                              
	int count = 0; 
    char *buff;         
	sl *curr;

	if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                         
                                                                                
    if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    printf("\nEnter number:");                                                 
    if(NULL == fgets(buff,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    num = atoi(buff);                                                           
    if(num == 0) {                                                              
        printf("\nCheck your input");                                           
        return;                                                                 
    }     
	
	curr = head;                                                                
    while((curr) != NULL)                                                       
    {                                                                           
        if((curr -> data) != num)                                          
        	curr = curr -> link;                                                    
		else {
			++count;
			break;
		}
		i++;
    }                                                          
       
	if(count != 1) {
		printf("\n%d number is not found",num);                                                                        
        return;
	}                                                                        
    del_node(i + 2);      
	                                                  
}
