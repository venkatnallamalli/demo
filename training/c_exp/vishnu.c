#include<stdio.h>
#include<stdlib.h>
#if 0
int main(void)
{
/*	typedef char * ty;

	int a = 10;
	 const ty var = &a;
	int b = 0;
	var = 'a';
	//var =&b;
*/

	int a = 10;
	int b = 0;
	 char * const var = &a;
	*var = 'b';
	printf("%d",a);

	return 0;
}

#endif

#if 0
void func()
{
	int j = 1;
	int *p;
	p = &j;
	
	while(*p != 10)
		p++;
	*p = 20;
}

int main()
{
	int  i = 10;
	func();
	
	printf("%d\n",i);
	printf("%d\n",i);
	return 0;
}

#endif


#if 1
int main()
{
	int *ptr;
	
	while(1) {
	if(NULL == (	ptr = malloc(100))){
		printf("MAlloc failed");
		exit(EXIT_FAILURE);}
	}
	return 0;
}
#endif
