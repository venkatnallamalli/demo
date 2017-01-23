#include"header.h"

void insertion()
{
	typedef enum {
		i_begine = 1,
		i_ende,
		i_middlee,
	}operation;
		
	operation ch;
    char *buff = NULL;
	char *buffe = NULL; 
	int ele;

	if(NULL == (buffe = (char *)malloc(size_buff * sizeof(char)))) {                             
        perror("MAlloc fails");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                     
    if(NULL == (buff = (char*)malloc(size_buff * sizeof(char)))) {              
        perror("malloc Error");                                                 
        exit(EXIT_FAILURE);                                                     
    }

	printf("Enter a element:");                                                   
    if(NULL == fgets(buffe,size_buff,stdin)) {                                   
             perror("fgets failure");                                           
             exit(EXIT_FAILURE);                                                
        }                                                                       
    ele = atoi(buffe);                                                                                                                                
	if(ele == 0) {
		printf("\ncheck your input");
		return;
	}
		
	printf("\n1. Insert at the beginning\
		\n2. Insert at the end\
		\n3. Insert at the middle");
	
	if(NULL == fgets(buff,size_buff,stdin)) {                                   
        perror("fgets failure");                                               
        exit(EXIT_FAILURE);                                                     
    }
	ch = (operation) my_atoi(buff);
	switch(ch)
	{
		case i_begine :
						i_begin(ele);
						break;
		case i_ende :
						i_end(ele);
						break;
		case i_middlee :
						i_middle(ele);
						break;
		default :
						printf("\nEnter above options only");
	}
}

