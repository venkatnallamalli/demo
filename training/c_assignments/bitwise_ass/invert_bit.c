#include<stdio.h>
#include"bit_operations.h"

int main()
{
        int n;        //storing a number
        int s;          //source position
        int d;          //destination postion

        printf ("Enter a number :");
        scanf ("%d",&n);

        showbit (n);
        printf ("\nEnter postion:");
        scanf ("%d",&s);

        printf ("\nEnter destination:");
        scanf("%d",&d);

	printf("\ntoggle a set of bits:\t");
	
	showbit ( invert(n,s,d) );
	return 0;
}

