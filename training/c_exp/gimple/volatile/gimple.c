#include<stdio.h>

int main()
{
	volatile int a = 5;
		
	printf("%d\t%d\t%d\n",++a,a,a++);
	return 0;
}
