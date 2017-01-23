#include"header.h"



int push(int ele)
{
	if(top > MAX)
		printf("\nStack is full");
	else {
		top++;
		stack[top] = ele;
		//printf("\n%d element was sucessfully inserted");
	}
}	
