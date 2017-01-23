#include"header.h"

bs_tree *root = NULL;
int main(void)
{
	typedef enum {
		insertione = 1,
		deletione,
		displaye,
		exite,
	}operation;

	operation ch;
	int val;
	char *buff;

	if(NULL == (buff = (char*)malloc(MAX))) {
		perror("MALLOC failed");
		exit(EXIT_FAILURE);
	}
	do {
		printf("\nChoose:");
		printf("\n1.insertion\
				\n2.deletion\
				\n3.display\
				\n4.Exit\n");

		if(NULL == fgets(buff,MAX,stdin)) {                                                                             
        	perror("fgets failed");                                                
        	exit(EXIT_FAILURE);                                                     
    	}  

		ch = (operation) atoi(buff);	
		
		switch(ch)
		{
			case insertione:
					insertion();
					break;
			case deletione:
					deletion();
					break;
			case displaye:
					display();
					break;
			case exite:
					exit(0);
					break;
			default:
					printf("\nCheck your input");	
		}
	} while(1);
}
