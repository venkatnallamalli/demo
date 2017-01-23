//header files                                                                  
#include<stdio.h>                                                               
#include<stdlib.h>
#include<string.h>                                                              
                                                                                
#define size_buff 50                                                            
                                                                                
                                                                                
//structer of a node                                                            
                                                                                
typedef struct node {
	char  data[30];
	struct node *prev;                                                                          
    struct node *next;                                                          
}dl;                                                                            
                                                                                
dl *head;                                                                       
                                                                                
int size;                                                                       
//prototypes                                                                    
                                                                                
int my_atoi(char*);                                                             
                                                                                
void display(dl*);

//insertion

void insertion();                                                               
                                                                                
dl *create_node(dl *, char *, dl *);                                                                                                                                                                                     
void i_begin(char *);

//void i_end(int);

void i_middle(char*);

//deletion

void deletion();                                                                                                                                                                                                                                                   
//void d_begin();                                                                 
                                                                                
//void d_end();                                                                   
                                                                                
void d_middle(); 
