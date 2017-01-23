#include"header.h"

bs_tree *root = NULL;
int main(void)
{
	typedef enum {
		insertione = 1;
		deletione;
		displaye;
		exite;
	}operation;

	operation ch;
	int val;
	char *buff;

	if(NULL == (buff = (char*)malloc(MAX))) {
		perror("MALLOC failed");
		exit(EXIT_FAILURE);
	}
	do {
		if(NULL == fgets(buff,MAX,stdin)) {                                                                             
        	perror("fgets failed");                                                
        	exit(EXIT_FAILURE);                                                     
    	}  
		
		if(val = my_atoi(buff)) {
			printf("Enter valid number");
		}

		ch = (operation) val;	
		
		switch(ch)
		{
			case insertione:
					insertion();
					break;
			case deletione:
					break;
			case displaye:
					display();
					break;
			case exite:
					exit(0);
					break;
			case default:
					printf("\nCheck your input");	
		}
	} while(1);
}
