#include"header.h"



int enqueue(int ele)
{
	if(rear > MAX)
		printf("\nStack is full");
	else {
		rear++;
		queue[rear] = ele;
		printf("\n%d element was sucessfully inserted",queue[rear]);
	}
}	
