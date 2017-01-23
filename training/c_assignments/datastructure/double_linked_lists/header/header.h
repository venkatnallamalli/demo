//header files                                                                  
#include<stdio.h>                                                               
#include<stdlib.h>                                                              
                                                                                
#define size_buff 50                                                            
                                                                                
                                                                                
//structer of a node                                                            
                                                                                
typedef struct node {
	int data;
	struct node *prev;                                                                          
    struct node *next;                                                          
}dl;                                                                            
                                                                                
dl *head;                                                                       
                                                                                
int size;                                                                       
//prototypes                                                                    
                                                                                
int my_atoi(char*);                                                             
                                                                                
void display();

//insertion

void insertion();                                                               
                                                                                
dl *create_node(dl *, int, dl *);                                                                                                                                                                                     
void i_begin(int);

void i_end(int);

void i_middle(int);

//deletion

void deletion();                                                                                                                                                                                                                                                   
void d_begin();                                                                 
                                                                                
void d_end();                                                                   
                                                                                
void d_middle(); 
