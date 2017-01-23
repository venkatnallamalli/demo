#include"header.h"

void insertion()
{                                                            
    bs_tree *current;                                                           
    bs_tree *parent;                                                            
    bs_tree *create;
	char *buff;
	int val;

	if(NULL == (buff = (char*)malloc(MAX))) {   //allocating memory for buff
        perror("malloc failed");      //checking error                                          
        exit(EXIT_FAILURE);           //if it fails exit                                          
    } 
	
	//allocating storage for current
	if(NULL == (current = (bs_tree*)malloc(sizeof(bs_tree)))) { 
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	//allocating storage for parent
	if(NULL == (parent = (bs_tree*)malloc(sizeof(bs_tree)))) {                    
        perror("malloc failed");                                                
        exit(EXIT_FAILURE);                                                     
    }

	//allocating storage for create
	if(NULL == (create = (bs_tree*)malloc(sizeof(bs_tree)))) {                    
        perror("malloc failed");                                                
        exit(EXIT_FAILURE);                                                     
    }
	//reading data
	printf("\nEnter a number");
	if(NULL == fgets(buff,MAX,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	if(!(val = atoi(buff))) {            //string to interger conversion                                   
            printf("Enter valid number");                                       
			return;
        } 
	//creating a new child
	create -> data = val;
	create -> left = NULL;
	create -> right = NULL;

	if(root == NULL) {		//checking root 
		root = create;		//moving new node address to root
		return;				//returning to calling function
	} else {
		current = root;		//intially current contains root
		while(1) {
			parent = current;	//changing the parent when we raech new child
			if(val < (parent -> data)) {	//val less than parent data
				if((current -> left) == NULL) {//check left child is free ornot
					current -> left = create; //if free move
					return;
				}
				current = current -> left;	//traverse upto null
			} else {         
                if((current -> right) == NULL) {//check left child is free ornot  
                    current -> right = create; //if free move   
					return;
				}                    
                current = current -> right;  //traverse upto null                
            }
		}
	}
}
				

		
