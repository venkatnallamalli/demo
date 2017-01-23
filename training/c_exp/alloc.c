#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	char *ptr = (char *)malloc(10);
	
	*ptr = 'a';

	*(ptr + 1) = 'b';
	*(ptr + 8) = 'c';
	free(ptr);
		
	printf("%d\n%c\n%c\n",*ptr,*(ptr + 1),*(ptr + 8));
	return 0;
}

#endif

#if 0 
int main()
{
	int *p = (int *) malloc ( 1024 * 1024);
	printf("helliio");
	return 0 ;
}
#endif

#if 1

int main()
{
	char *p;
	printf("getpid %d\n",getpid());
	p = malloc(1024 * 1024 * 1024 * (1.2)) ;
	getchar();
	return 0;
}
#endif
