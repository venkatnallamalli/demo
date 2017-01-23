#include<stdio.h>

int main()

{
	int n1;
	int n2;
	int r;

	printf("\nEnter two numbers:");
	scanf("%d %d",&n1,&n2);
	
	r = ( n1 > n2) ? n1 : n2;
	printf("\na = %d",r);
	return 0;
}
	
