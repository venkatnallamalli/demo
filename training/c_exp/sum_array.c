#include<stdio.h>

int main()
{
	int a[5];
	int i;
	int s = 0;
	printf("\nEnter 5 numbers:");
	for( i = 1; i <=5; i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	printf("\nr=%d",s);
	return 0;
}
