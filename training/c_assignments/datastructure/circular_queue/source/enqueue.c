#include"header.h"



void enqueue(int ele)
{
	if(count == MAX) 
			printf("\nStack is full");
			
	if(rear == (MAX - 1))
		if(count != MAX)
			rear = -1;
	
	if(count != MAX) {
		queue[++rear] = ele;
		count++;
		printf("\n%d element was sucessfully inserted",queue[rear]);
	}

}	
