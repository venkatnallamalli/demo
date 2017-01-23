#include<stdio.h>
extern int a;
static int b =5;

int main()
{
	static int s;
	const int c = 6;
	int a;
	a = 4;
	auto int d = 7;
	register int e = 8;
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
