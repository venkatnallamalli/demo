#include<stdio.h>
#include"bit_operations.h"

#if 1

int main()
{
        int n;		//Enter a number
        
	printf ("Enter a number:");
        scanf ("%d",&n);

        showbit (n);

        printf ("\nAfter Even odd Toggiling:");

        showbit ( toggle (n,1) );	//we toggiling the odd position bits and displaying
        printf ("\n");
        return 0;
}

#endif

