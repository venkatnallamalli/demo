#include"header.h"

void display()
{
	int i;
	if((count == 0)  ) {
		printf("\nstack is empty");
		return;
	}
//	else
//	if(count > MAX)
//		for(i = front; i < MAX; i++)
//			printf("%d\t",queue[i]);

	else
		if(rear > front) {

			for(i = front; i < rear; i++) 
				printf("%d\t",queue[i]);
		}
		
		else
			if(front > rear)
		{
			for(i = front; i > (MAX - 1); i++)
				printf("%d\t",queue[i]);
			for(i = 0; i < rear; i++)
				printf("%d\t",i++);
		}

} 

