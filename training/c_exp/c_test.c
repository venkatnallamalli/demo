#include </*j*/stdio.h>

showbit(int n)

{
        int i;
        for(i = 31; i >= 0; i--)
        {
            (n >> i) & 1 ? printf("1") : printf("0");
			if((i % 8) == 0)
				printf("  ");
        }
	printf("\n");
}

#if 1

int main(void)
{
	int x = 1;
	int y = 0;
	int z = 2;
	y++ && x++ || ++z;
	printf("x =  %d\n",x);
	printf("y =  %d\n",y);
	printf("z =  %d\n",z);
	return 0;
}
#endif

#if 0                                                                           
                                                                                
int main(void)                                                                  
{                                                                               
    int x = 10;                                                                  	
	int y = 15; 
	int val1 = x && y;
	int val2 = x & y;
	
	printf("val1 = %d\n",val1);
	printf("val2 = %d\n",val2);

	return 0;
}

#endif

#if 0
int main(void)
{
	char ch = 127;
	int i;
	
	for(i = 0; i < 127; i++)
		printf("ch = %d\n",ch);
	return 0;
}

#endif

#if 0

int main()
{
	char ch[4] = {1,2,3,4};
	int n =0;
	char *p;
	int i;
	
	p = (char*) &n;
	
	for (i = 0; i < 4; i++) {	
		*(p + i) = ch[i];
		printf("%d\t",*(p + i));
	}
	printf("n = %d\n",n);

	return 0;
}

#endif

#if 0                                                                           
                                                                                
int main(void)                                                                  
{                                                                               
    int a = 10;
	int b = 8;
	float result =  0.0;
	
	result = (float)a/b;
	printf("result = %f\n",result);
	return 0;
}

#endif

#if 0                                                                           
                                                                                
int main(void)                                                                  
{
	float a = 5.7;                                                                               
	
	showbit(a);
	if( a == 5.7)	
		printf("true\n");
	else
		printf("false\n");
	return 0;
}
#endif

#if 0

int main()
{
	int a = 3;
	int i = 1;
	int j = 2;
	switch(a) {
		case 1:
			printf("case 1\n");
		case 2:
			for(i = 0; i < 3; i++) {
				j++;
			printf("case 2\n");
		case 3:
			printf("%d\n",j);
			printf("case 3\n");
		}
	}
	return 0;
}
#endif

#if 0
//int a ;
int main()
{	
	volatile int a = 10 ;
	int c  = 1;
	int i;
	switch(c)
	{
		a = 15;
		case 0:
				//break;
		for(i = 0; i <= 3; i++) {
			a = 1;
		case 1:
			 a = 1;
			printf("a = %d\n",a);
		//	break;
		a = 20;
		//case 2 :
		//	printf("a = %d\n",a);
		//	break;
		}
	}
	return 0 ;
}

#endif

#if 0 
//int n = 4;
int mai(int n)
{
	
	int res = 0;
	//static int n = 100 ;
	//if(n == 4)
		res = main(4);
	//if(n == 0)
	//	return 1;
	//if( n != 0) {
	//	printf("%d\n",n);
	//	return n * main(n -1 );
	//}
	//printf("%d",res);
	return 1;
}
#endif

#if 0
#define MAX  10
#if 
#define square(x) x * x
int main()
{
	printf("%d\n",MAX);
	printf("%d\n",square(10 + 10));
	return 0;
}
#endif
#endif


