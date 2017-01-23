#include<stdio.h>

#if 0

int main()
{
	int n;
	int d;
	int c;
	int z;

	printf("Enter a number:");
	scanf("%d",&n);

	d = n;
	while(d != 0) {
		if(d&1)
			c++;
		else 
			z++;
		d = d >> 1;
	}
	
	if((c == 1) && (z % 2) == 0)
		printf("power of 4");
	else
		printf("not power of 4");
} 

#endif

#if 0
int o_e(int n)
{
	return (n & 1);
}

int main()
{
	int n;
	scanf("%d",&n);
	if(o_e(n))
		printf("given number  is  odd");
	else
		printf("given num is even");
}

#endif


#if 0                                                                           
int p_n(int n)                                                                  
{                                                                               
    return (n & (1 << 31));                                                             
}                                                                               
                                                                                
int main()                                                                      
{                                                                               
    int n;                                                                      
    scanf("%d",&n);                                                             
    if(p_n(n))                                                                  
        printf("given number  negative");                                       
    else                                                                        
        printf("given num is positive");                                            
}                                                                               
                                                                                
#endif 

#if 0
int main()
{
	static  volatile int a;
	return 0;
} 
#endif

#if 0

const int  a =10;
int main(void)
{
	int *p = &a;
	*p = 30;
	printf("value of a = %d\n",a);
	return 0;
}

#endif

#if 1
int a;
int main()
{
	int b = 10;
	int c = 20;
	int dd;
	return 0;
}

#endif
