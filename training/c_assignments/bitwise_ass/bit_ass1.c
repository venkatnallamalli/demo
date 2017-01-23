#include<stdio.h>
#include"bit_operations.h"

#if 1

void bit_copy(int snum, int dnum, int n, int s, int d);

int main()
{
	int snum;	//source number
	int dnum;	//destination number
	int n;		//no.of bits
	int s;		//bit position in source number
	int d;		//bit position in destination number
	
	printf ("\nEnter a source number :");
	scanf ("%d",&snum);

	showbit(snum);				
	
	printf ("\nEnter a destination number :");
        scanf ("%d",&dnum);

	showbit(dnum);
	
	printf ("\nEnter no.of bits copy:");
	scanf ("%d",&n);
	
	printf ("\nEnter bit position in source:");
	scanf ("%d",&s);
	
	printf ("\nEnter a bit positon in destination:");
	scanf ("%d",&d);

	bit_copy (snum,dnum,n,s,d);
	return 0;
}


void bit_copy(int snum, int dnum, int n, int s, int d)
{
	dnum = ( dnum &  (~((~(~0 << n)) << d-n)));	//Clearing 'n' bits in destination number at position 'd' (Right adjustment) 
	
	showbit( ((( snum >> (s-n) ) & ( ~(~0 << n)) )<< (d-n) ) | dnum);	//copying 'n' bits from source number at 's' position to 
										//destination number at position 'd' 
}

#endif
