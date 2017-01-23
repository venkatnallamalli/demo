#include"header.h"
//extern int top;                                                                 
//extern int stack[MAX]; 

void display()
{
	int i;
	if(top == -1) {
		printf("\nstack is empty");
		return;
	}
	
	for(i = top; i >= 0; i--) 
		printf("\n%d",stack[i]);
} 

