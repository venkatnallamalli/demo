#include"header.h" 

int dequeue()
{
	int ele;
	
	if(count == 0) {
		printf("\nqueue is empty"); 
		return ;
	}
	if(front == (MAX - 1))
		if(count != 0)
			front = -1; 
	if(count != 0) {
		ele = queue[++front];
		count--;
		return ele;
	}
}
