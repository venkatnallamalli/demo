#include<stdio.h>
#include"bit_operations.h"

#if 1

int main()
{
        int n;			//number
        int src;		//source position 
        int dest;		//destination position
    
        printf ("Enter a number:");
        scanf ("%d",&n);

        printf ("\nEnter source position:");
        scanf ("%d",&src);

        printf ("\nEnter destination position:");
        scanf ("%d",&dest);

        showbit( sswap(n,src,dest) );	//swapping bits and displaying bits
	return 0;
}

#endif
