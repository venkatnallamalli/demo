#include<stdio.h>
#include"bit_operations.h"

void showbit(int);
#if 1
int main()
{
        int snum;	//source number
	int dnum;	//destination number
        int s;		//source position
        int d;		//destination position

        printf ("\nEnter source number:");
        scanf("%d",&snum);
	
	showbit(snum);
	printf("\nEnter destination number :");
	scanf("%d",&dnum);
	
	showbit(dnum);
       	printf ("\nEnter source Position:");
        scanf("%d",&s);

        printf("Enter destination position :");
        scanf("%d",&d);

	printf("After swapping:\n");

	dswap(&snum,&dnum,s,d);
	printf("source number     :");
	
	showbit(snum);
	printf("\nDestination number:");

	showbit(dnum);
	printf("\n");
	return 0;

}
#endif

