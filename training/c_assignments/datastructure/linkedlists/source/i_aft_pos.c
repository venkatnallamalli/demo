#include"header.h"                                                              
                                                                                
void i_aft_pos(int ele)                                                         
{                                                                               
    int pos;                                                                    
    char *buff;                                                                 
                                                                                
    if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
     
	if(head == NULL) {                                                          
        printf("linked list not created");                                                                        
        return;                                                                 
    } 
                                                                           
    printf("\nEnter position");                                                 
    if(NULL == fgets(buff,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    pos = atoi(buff);       
	if(pos == 0) {                                                              
        printf("\nCheck your input");                                                                   
        return;                                                                 
    }                                                     
    
	if((pos -1) > size) {
		printf("\nposition out of the range");
		return;
	}                                                                            
    pos_insert(ele, (pos + 1));                                                   
	size++;
}
