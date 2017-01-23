#include"header.h"

void deletion()
{
    bs_tree *current;                                                           
	bs_tree *current1;
    bs_tree *parent;                                                                                                                       
    char *buff;                                                                 
    int val;                                                                    
    int count = 0;
                                                                            
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
                                                                                
    //reading data                                                              
    printf("\nEnter a number to delete");                                                 
    if(NULL == fgets(buff,MAX,stdin)) {                                         
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    } 

	if(!(val = atoi(buff))) {            //string to interger conversion                                   
            printf("Enter valid number");                                       
            return;                                                             
    }

	if(root == NULL) {		//checking for tree is created or not
		printf("There is no tree");
		return ;
	}

	current = root;	//assigning  root to current
	if(((current -> left) == NULL) && ((current -> right) == NULL)) {		
		if((root -> data) == val) {
			root = NULL;
			return ;
		}
	} 

	parent = root;
	while(val != (current -> data)) {
		if(val < (current -> data)) 
			current = current -> left;
		else if(val > (current -> data))
			current = current -> right;
		if(current == NULL) {
			++count;
			break;
		}
		if(val == (current -> data))
			break;
		parent = current;
	}
	if(count == 1)	{
		printf("\n%d element is not found",val);
		return ;
	}

	if((current -> left != NULL) && (current -> right != NULL)) {
		current1 = current -> left;
		while(current1 -> right -> right != NULL)
			current1 = current1 -> right;
		current -> data = current1 -> right -> data;
		return;
	}
	
	if(val < (parent -> data)) { 	//checking left child
		if(((parent -> left) -> left) != NULL)
			parent -> left = current -> left;
		else if(((current -> right) != NULL))
			parent -> left = current -> right;
		else
			parent -> left = NULL;		//no childs 
	}

    if(val > (parent -> data)) {      //checking right child                                          
        if(((parent -> right) -> right) != NULL)                                  
            parent -> right = current -> right;                                   
        else if(((current -> left) != NULL))                                        
            parent -> right = current -> left;                                  
        else                                                                    
            parent -> right = NULL;    //no childs                                          
    }	
}
