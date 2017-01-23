#include"header.h"

//extern int top;                                                                 
//extern int stack[MAX]; 

int pop()
{
	int ele;
	
	if(top < 0) {
		printf("\nstack is empty");
		return -1;}

	else {
		ele = stack[top--];
		return ele;
	}
}
