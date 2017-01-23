#include"header.h"

void deletion()
{
	typedef enum {
		d_begine = 1,
		d_ende,
		d_pose,
		d_bef_pose,
		d_aft_pose,
		d_bef_nume,
		d_aft_nume,
		d_middlee,
		d_penulte,
	}operation;
		
	operation ch;
    char *buff;
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
		\n3. Delete at a given position\
		\n4. Delete before a given position\
		\n5. Delete after a given position\
		\n6. Delete before a given number\
		\n7. Delete after a given number\
		\n8. Delete at the middle\
		\n9. Delete at penultinate node");
	
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
		case d_pose :	
						d_pos();
						break;
		case d_bef_pose:
						d_bef_pos();
						break;
		case d_aft_pose:
						d_aft_pos();
						break;
		case d_bef_nume:
						d_bef_num();
						break;
		case d_aft_nume:
						d_aft_num();
						break;
		case d_middlee :
						d_middle();
						break;
		case d_penulte:
						d_penult();
						break;
		default :
						printf("\nEnter above options only");
	}
}

