#include<stdio.h>
#include<math.h>
#include"bit_operations.h"

#define set(n,s,d)  ( ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) & ( n | ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) ) )		//setting set of bits

#define clear(n,s,d)  ( ( ~ ( ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) ) ) & ( n | ( ~ ( ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) ) ) ) ) 	//clearing set of bits

#define toggle(n,s,d)  ( ( ~ ( (~0) << abs(s - d ) ) << ( (s > d) ? d : s ) ) ^ ( n | ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) ) )		//toggle set of bits

int main()
{
        int n;        //storing a number
	int s;		//source position
	int d;		//destination postion

        printf ("Enter a number :");
        scanf ("%d",&n);

        showbit (n);
	printf ("\nEnter postion:");
	scanf ("%d",&s);

	printf ("\nEnter destination:");
	scanf("%d",&d);

	printf("\nsetting set of bits :\t");

	showbit ( set(n,s,d) );
	printf("\nclearing set of bits:\t");

	showbit ( clear(n,s,d) );
	printf("\ntoggle a set of bits:\t");
	
	showbit ( toggle(n,s,d) );
	return 0;
}


