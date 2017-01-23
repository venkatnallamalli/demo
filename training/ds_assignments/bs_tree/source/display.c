#include"header.h"

void display()		
{
	typedef enum {
		inordere = 1,
		preordere,
		postordere,
		levelordere,
	}operation;

	operation ch;
	
	int val;
	char *buff;
	if(root == NULL) {
		printf("\nThere is no tree");
		return;
	}
	
	if(NULL ==(buff= (char*)malloc(MAX))) {
		perror("MALLOC failed");
		exit(EXIT_FAILURE);
	}
	
	printf("\nchoose");
	printf("\n1.inorder\
			\n2.preorder\
			\n3.postorder\
			\n4.levelorder\n");

	if(NULL == fgets(buff,MAX,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	ch = (operation) atoi(buff);
	
	switch(ch)
	{
		case inordere:
				inorder(root);
				break;
		case preordere:
				preorder(root);
				break;
		case postordere:
				postorder(root);
				break;
		case levelordere:
				levelorder(root);
				break;
		default:
				printf("\ncheck your input");	
	}
}
