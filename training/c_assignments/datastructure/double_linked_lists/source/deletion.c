#include"header.h"

void deletion()
{
	typedef enum {
		d_begine = 1,
		d_ende,
		d_middlee,
	}operation;
		
	operation ch;
    char *buff = NULL;
	int ele;
                                                                              
    if(NULL == (buff = (char*)malloc(size_buff * sizeof(char)))) {              
        perror("malloc Error");                                                 
        exit(EXIT_FAILURE);                                                     
    }
	
	if(head == NULL) {
		printf("\nLinked list is empty");
		return;
	}
	
	printf("\n1. Delete at the beginning\
		\n2. Delete at the end\
		\n3. Delete at the middle");
	
	if(NULL == fgets(buff,size_buff,stdin)) {                                   
        perror("fgets failure");                                               
        exit(EXIT_FAILURE);                                                     
    }
	ch = (operation) my_atoi(buff);
	switch(ch)
	{
		case d_begine :
						d_begin();
						break;
		case d_ende :
						d_end();
						break;
		case d_middlee:
						d_middle();
						break;
		default :
						printf("\nEnter above options only");
	}
}

