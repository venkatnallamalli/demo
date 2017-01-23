#include"header.h"                                                              
                                                                                
void i_pos(int ele)                                                         
{                                                                               
    int pos;                                                                    
    char *buff;                                                                 
    
	if(head == NULL) {
		printf("linked list not created");
		return;
	}                                                                           
		
    if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                 
	                                                          
                                                                                
    printf("\nEnter position");                                                 
    if(NULL == fgets(buff,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    pos =my_atoi(buff);                                                           
    if(pos == 0) {
		printf("\nCheck your input");
		return;
	}                                                                      
    pos_insert(ele, pos);                                                   
}
