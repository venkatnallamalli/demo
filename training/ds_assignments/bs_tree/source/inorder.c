#include"header.h"

void inorder(bs_tree *root)
{
	bs_tree *temp = NULL;
	 if(NULL == (temp = (bs_tree*)malloc(sizeof(bs_tree)))) {                  
        perror("malloc failed");                                                
        exit(EXIT_FAILURE);                                                     
    } 
	temp = root; 
	if(temp != NULL) {		//checking root is NULL or not
		inorder(temp -> left);	//recursive calling for left
		printf("%d\t",temp -> data);	//display data
		inorder(temp -> right);		//recursive calling right
	}
//	free(temp);
}

void preorder(bs_tree *temp)                                                     
{                                                                               
    if(root != NULL) {      //checking root is NULL or not                      
        printf("%d\t",root -> data); // display data
		preorder(root -> left);      //recusive calling left                             
        preorder(root -> right);     //recusive calling for right                                            
    }                                                                           
}  
			

void postorder(bs_tree *temp)                                                    
{                                                                               
    if(root != NULL) {      //checking root is NULL or not                      
        postorder(root -> left);      //recusive calling left                             
        postorder(root -> right);     //recusive calling for right                                            
		printf("%d\t",root -> data); // display data 
    }                                                                           
}

void levelorder(bs_tree *temp)
{

} 
