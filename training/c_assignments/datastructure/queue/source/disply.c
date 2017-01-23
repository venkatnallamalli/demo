#include"header.h"

void display()
{
	int i;
	if((front == rear) || (front > rear) ) {
		printf("\nstack is empty");
		return;
	}
	
	for(i = rear; i > front; i--) 
		printf("\n%d",queue[i]);
} 

