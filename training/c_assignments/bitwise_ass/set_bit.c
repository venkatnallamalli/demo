#include<stdio.h>
#include"bit_operations.h"

int setbits(int x, int p, int n, int y)
{
	x = ( ( ( ~ ( (~ 0) << n ) ) << ( p - n + 1 ) )  | y ); 
	return x;
}


int main()
{
        int y;          //given  number
        int p;          //source position
        int n;          //no.of bits
	int x;		//storing number after change

        printf ("Enter a number :");
        scanf ("%d",&y);

        showbit (y);
        printf ("\nEnter postion:");
        scanf ("%d",&p);

        printf ("\nEnter no.of bits:");
        scanf("%d",&n);

	showbit( setbits(x,p,n,y) );
	return 0;
}
	
