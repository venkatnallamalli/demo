#include<stdio.h>
#include"bit_operations.h"

#define getbits(x,p,n) ( ( ( ( ~ ( (~0) << n ) ) << p ) & x ) >> p)

int main()
{
	int x;		// Storing for given number
	int p;		//  postion to get 
	int n;		//  no.of bits to get 

	printf("\nEnter a number :");
	scanf("%d",&x);
	
	printf("\nEnter a position:");
	scanf("%d",&p);
	
	printf("\nEnter no.of bits to get :");
	scanf("%d",&n);

	showbit( getbits(x,p,n));
	
	return 0;
}
