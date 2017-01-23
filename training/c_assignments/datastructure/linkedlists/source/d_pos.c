#include"header.h"

void d_pos()
{
	int pos;                                                                    
    char *buff;                                                                 
                                                                                
    if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
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

	else if((pos == 1) && (size == 1)) {
		head = NULL;
		size--;
		return;
	}
	
	else if(size < pos) {
		printf("\nsize---%d",size);                                                             
        printf("\nPosition is not in range ");                                                           
        return;                                                                 
    }  

	del_node(pos );
}
