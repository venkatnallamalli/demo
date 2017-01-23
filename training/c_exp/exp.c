
#include<stdio.h>
#include<limits.h>
#if 0
showbit(int n)

{
        int i;
        for(i=31;i>=0;i--)
        {
                (n>>i)&1 ?printf("1"):printf("0");
        }
	printf("\n");
}

#endif

#if 0
int main()
{
	printf("int range is %d     -      %d\n",INT_MIN,INT_MAX);
	printf("char range is %d\t-\t%d\n",CHAR_MIN,CHAR_MAX);
	printf("usigned cahr %d\n",UCHAR_MAX);
	return 0;
}
#endif

#if 0
int fun();
int main()
{
	const int i=10;
	i=fun();
	printf("i=%d\n",i);
	return 0;
}
int fun()
{
	const int i=5;
	i=i+1;
	return i;
}

#endif


#if 0
void sdemo()
{
	static int i=5;
		{
			static int i=10;
			printf("%d\t",i);
			i++;
		}
	printf("%d\n",i);
	i++;
}
 
int main()
{
  sdemo();
  sdemo();
}

#endif

#if 0
void main()
{
	int i=10;
	{
		int i=20;
		printf("%d\n",i);
	}
	printf("%d\n",i);
}
#endif

#if 0
//void fun();
extern int i;
int main()
{
//	fun();
	i=1;
	printf("i value is %d",i);
	return 0;
}
#endif


#if 0
int main()
{
	int value1;
	int value2;
	float res;
	char op;
	prin


int main()

	scanf("%d%d",&value1,&value2);
	printf("\nEnter operator:");
	fflush(stdin);
	scanf(" %c",&op);
	switch(op)
	{
		case '/': res = value1/value2;
			  break;
		case '+': res = value1+value2;
                          break;
		case '-': res = value1-value2;
                          break;
		case '*': res = value1*value2;
                          break;
		case '%': res = value1%value2;
                          break;
		default :
			  printf("choose correct operator");
	}
	printf("result =%f\n",res);
	return 0;
}

#endif

# if 0
main()
{
	int number;
	int i=0;
	int j;
	int result[20];
        printf("enter a number");
	scanf("%d", &number);
	while(number>0)
	{
		result[i] = number%2;
		number = number/2;
		i++;
	}
	printf("\nresult=");
	//printf("%d\t%d",result[i-2],i);
	for(j=i-1;j>=0;j--)
	printf(" %d", result[j]);
	printf("\n");
}
#endif

#if 0
int main() 
{
    	int n,p,m=1;
	printf("Enter a number and bitposition to set:");
	scanf("%d%d",&n,&p);
	n|=m<<p;
	printf("\nfinal result :%d",n);
	return 0;
}

#endif

#if 0
int  main()
{
	int n;
	printf("enter  a number:");
	scanf("%d",&n);
	showbit(n);
	return 0;
}

 showbit(int n)

{
	int i;
	for(i=31;i>=0;i--)
	{
		//if((n>>i)&1)
		//	printf("1");
		//else
		//	printf("0");\

		(n>>i)&1 ?printf("1"):printf("0");
	}
}
#endif
#if 0
showbit(int n);
int main()
{
	int nswap,num;
	printf("Enter a num:");
	scanf("%d",&num);
	printf("given number %d\t",num);
	showbit(num);
	printf("\n");
	nswap=(num>>28|num<<28);
	printf("\nAfter swap:%d\t",nswap);
	showbit(nswap);
	printf("\n");
	return 0;
}

#endif


#if 0


int main ()

{
	int a = -5;
	unsigned int b = -5;
	signed int c = -5;
        printf ("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	showbit(b|(~0));
	b=0x7fffffff;
	printf("%d\n",b);
	showbit(b>>4);
	showbit(c>>4);
//a=a>>4;
//a=a&(~(1<<31));
	printf ("%d\n",a);
	printf("%d\n",b>>4);
	printf("%d\n",c>>4);
	showbit(a>>3);
	return 0;
}

#endif
    

#if 0
int main()
{
	int e;
	char *s;
	s = (char*)malloc(100);
	fgets(s,100,stdin);
	e = atoi(s);
	printf("%d",e);
	return 0;
}
#endif
#if 0

int main()
{
		printf("%p\n");
		printf("%p\n");
		printf("%p\n");
		return 0;
}
#endif

#if 0

int a = 10;
int main()
{
	int a =5;
	{
		printf("%d\n",a);
	}
	return 0;
}
#endif
#if 0
int main()
{
	unsigned int n = 0;
	unsigned int temp = 0;
	char *p = (char *) &n;
	int i = 3;
	int m = 0;
	
	read(0, &n, sizeof(n));
	//n = n + 1; 
	//write(1, &n, sizeof(n));
	
	//n = n + 1;
	//p++;
//	write(1,p,2);
	while(i != -1) {
		temp <<= 4;
		temp |= *(p + 3 - i) & ((~ ( ~ (0) << 4) ) );
	//	printf("%d = %d\n",i,temp);
		//temp <<= 4;
		i--;
	}
	printf("%d\n",temp); 
	//temp += 5;
//	write(1, &temp, sizeof(m));
	//n = n+ 1;
	//printf("%d\n",temp);
	p = (char *) &m;
	i = 3;
	while(i != -1) {
		*(p + i )  = (3 << 4 ) | (temp % 16);
	//	printf("%d\n",i);
		i--;
		temp/= 16;
		//m <<= 8;
	} 
//	write(1, &m, sizeof(m));
	//printf("\n%d\n",m);
	return 0;
}

#endif

#if 1
const int a = 10;
int main()

{
	//static int  a = 10;
	static int  b = a;
	return 0 ;
}
#endif
