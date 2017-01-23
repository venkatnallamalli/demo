#include<stdio.h>
#include"bit_operations.h"

#if 1

int main()
{
	int n;		//Enter a  number

	printf ("Enter a number:");
	scanf ("%d",&n);
	
	showbit (n);

	printf ("\nAfter Even bit Toggiling:");		// //we toggiling the even position bits and displaying
	
	showbit ( toggle (n,0) );
	printf ("\n");
	return 0;
}

#endif
