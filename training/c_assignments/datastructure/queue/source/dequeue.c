#include"header.h" 

int dequeue()
{
	int ele;
	
	if(front >= rear) {
		printf("\nstack is empty");
		return -1;}

	else {
		ele = queue[++front];
		return ele;
	}
}
