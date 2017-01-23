#include<stdio.h>

void fun()
{
	printf("hai iam fun");
	return;
}
	
int main()
{
	printf("%d",sizeof(fun()));
	fun();
	return 0;
}
