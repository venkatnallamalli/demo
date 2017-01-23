//#define MACRO 1
#ifdef MACRO 
#include<stdio.h>
#endif
#define MACRO 1

#define MAX 10

int main()
{
	int a;
	int arr[MAX];//array
	char str[] = "-24 hours";
	char str1[] = "24 hours";

	printf("%s",str);
	printf("\n%s",str1);

	printf("Hello,World");
	printf("%d",MAX);
	return 0;
}
