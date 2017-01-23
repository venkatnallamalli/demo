#include"header.h"                                                              
                                                                                
void i_bef_num(int ele)                                                         
{                                                                               
    int count = 0;
	int i = 0;
	int num;                                                                    
    char *buff;       
	sl *curr;                                                          
                                                                                
    if(NULL == (buff = (char *)malloc(size_buff * sizeof(char)))) {             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                     
                                                                                
    if(NULL == (curr = (sl *)malloc(sizeof(sl)))) {                              
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                          
                                                                                
    printf("\nEnter a number");                                                 
    if(NULL == fgets(buff,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    num = atoi(buff);
  
	if(num == 0) {                                                              
        printf("\nCheck your input");                                                                   
        return;                                                                 
    }
 	if(head == NULL) {
		printf("linked list not created");
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
    pos_insert(ele, i + 1 );                                                   
}
