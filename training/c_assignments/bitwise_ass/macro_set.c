#include<stdio.h>
#include"bit_operations.h"

#define bit_ts(num,pos)  ( num | (1 << pos) )	//macro for  	

int main()
{
	int num;
	int pos;
	
	printf ("\nEnter a number:");
	scanf ("%d",&num);

	printf ("\nEnter position to set:");
	scanf ("%d",&pos);

	showbit ( bit_ts (num, pos) );
	return 0;
}
	
