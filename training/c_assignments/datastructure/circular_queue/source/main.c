#include"header.h"

//int stack[MAX];                                                                 
int rear = -1; 
int front = -1;
int count = 0;

int main()
{
	typedef enum {
		enqueuee = 1,
		dequeuee,
		displaye,
		exite,
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
	printf("\nChoose one of the following\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
	if(NULL == fgets(ch,size_buff,stdin)) {                                   
        perror("fgets failure");                                                
        exit(EXIT_FAILURE);                                                     
    }                                                                           
    
	ch1 = (operation) atoi(ch);
	
	switch(ch1)
	{
		case enqueuee:
				printf("\nEnter a element:");
				if(NULL == fgets(buff,size_buff,stdin)) {                                   
        		perror("fgets failure");                                               
       			exit(EXIT_FAILURE);                                                     
    			}	
				if(!(ele = my_atoi(buff))) {
					perror("check your input");
					exit(EXIT_FAILURE);
				}
				   
				enqueue(ele);
				break;
		case dequeuee:
				del = dequeue();
				if(del == -1)
					printf("\nstack is empty");
				else
					printf("\n%d element was deleted",del);
				break;
		case displaye:
				display();
				break;
		case exite:
				exit(0);
		default :
				printf("\nchoose correct operation");
	}
	} while(1);
	return 0;
}
