#include"header.h"

//int stack[MAX];                                                                 
int top = -1; 

int main()
{
	typedef enum {
		pushe = 1,
		pope,
		displaye,
	}operation;

	operation ch1;
	int ele;
	char *buff;
	char *ch;
	int del;
	

	if(NULL == (buff = (char*)malloc(size_buff * sizeof(char)))) {
		perror("malloc Error");
		exit(EXIT_FAILURE);
	}

	if(NULL == (ch = (char*)malloc(size_buff * sizeof(char)))) {              
        perror("malloc Error");                                                 
        exit(EXIT_FAILURE);                                                     
    } 
	do {
	printf("\nChoose one of the following\n1.PUSH\n2.POP\n3.DISPLAY");
	if(NULL == fgets(ch,size_buff,stdin)) {                                   
        perror("fgets failure");                                                
        exit(EXIT_FAILURE);                                                     
    }                                                                           
    
	ch1 = (operation) atoi(ch);
	
	switch(ch1)
	{
		case pushe:
				printf("\nEnter a element:");
				if(NULL == fgets(buff,size_buff,stdin)) {                                   
        		perror("fgets failure");                                               
       			exit(EXIT_FAILURE);                                                     
    			}	
				if(!(ele = my_atoi(buff))) {
					perror("check your input");
					exit(EXIT_FAILURE);
				}
				   
				push(ele);
				break;
		case pope:
				del = pop();
				printf("\n%d element was deleted",del);
				break;
		case displaye:
				display();
				break;
		default :
				printf("\nchoose correct operation");
	}
	} while(1);
	return 0;
}
