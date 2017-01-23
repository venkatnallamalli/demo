#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0

int main()

{

	long int f[30] = {0,1};
	int n;
	int i;

	printf ("\nEnter a number:");
	scanf ("%d",&n);
	
	for(i = 0; i < (n-2); i++)
		f[i+2] = f[i] + f[i+1];

	for(i = 0; i < n ; i++)
		printf("%ld\t", f[i]);

	return 0;
}

#endif

#if 0

int main()
{
	char s[30] = "venkat nallamalli";
	int i;

	for(i = 0; i < 20; i++)
		printf("%d\t",s[i]);
	return 0;
}

#endif


#if 0

int main()
{
	int a = 10;
	int b = 20;
	int *p;
	int *q;
	
	p = &a;
 	q = &b;
	printf("\n%d",a);
	                                                                           
int main()                                                                      
{                                                                               
    struct flex                                       
	printf("\n%d",*(++p));
	return 0;
}

#endif

#if 0

void swap( int *a, int *b);

int main()
{
	int a = 10;
	int b = 5; 
	
	swap(&a,&b);
	
	printf("%d\t%d\n",a,b);
	return 0;
}

void swap( int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}


#endif


#if 0


//int p[10];
int  cal(int a, int b, int *p )
{
	
	
	*p = a + b;
	*(p + 1) = a - b;
	*(p + 2) = a * b;
	*(p + 3) = a % b;
	//return p;
}    

int main()                                                                      
{                                                                               
    int a = 10;                                                                 
    int b = 5;
	int r[3];                                                                  
                                                                                
    cal(a,b,r);                                                                
                                                                                
    printf("%d\t%d\t%d\n",*r,*(r + 1),*(r + 2),*(r + 3));                                                     
    return 0;                                                                   
}     

#endif


#if 0

int main()
{
	int a[5] = { 1,2,3,4,5};
	
	*(a + 1) = 150;
	printf("%p\n",a);
	printf("%d\n",*a);
	printf("%d\n",*(a+1));
	printf("%d\n",**(&a)  );
	printf("%p\n",a + 4);
	printf("%d\n", (a + 1) - a);
	return 0;
}

#endif
	 


#if 0
void main()            	 
{
	char s1[] = "venkat";
	char s2[] = {'v', 'e','n'};
	char s3[2] = {'v'};
	char *s4[] = {"venkat", "NALLAMALLI"};
	exit(1);
	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	printf("%s\n",s4[1]);
//	return 1;
}

#endif

#if 0
int  main()
{
	int a[100] = {[1] = 1, [9...20] = 8};
	printf("%d",a[17]);
	return 0;
}
#endif

#if 0

int main()
{
	static int 
#endif


#if 0

int main()

{
	int a[10000000000];
	return 0;
}
#endif

#if 1
int main()
{
	struct flex {
		int a;
		int b;
		char c[1];
	}*f;

	f = malloc((sizeof(struct flex)) + 100); 
	f -> a = 10;

	strcpy(f -> c,"haiiiiiiiiiiiiiiiiiiiiiiiiiiiiii");
	f -> c[3] = 'q';

	printf("a == %d\n",f -> a);
	printf("c== %s",f -> c);

	printf("%d\n",sizeof(f));
	return 0;
}
#endif
