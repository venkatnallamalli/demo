#include<stdio.h>
#include"bit_operations.h"

/////////////////////////////////////        check given number is power of 2    ///////////////////////////////////////////////

#if 0

int main()
{
	int num;		//for storing the given number
	int count = 0;		//for countiong no.of bits
	int i;			//for iteration

	printf ("Enter a number:");
	scanf ("%d",&num);			//reading anumber
	
	showbit(num);
	for(i = 0; i < 32; i++)			//counting for no.of set bits
		if( ( num >> i) & 1 ) 
			count ++;
	if(count == 1)
		printf ("\n%d is power of 2",num);		//displaying given number is power of 
	else
		printf ("\n%d is not a power of 2",num);

	printf("\n");
	return 0;
}

#endif

/////////////////////////////////////   count no.of set bits in a number    ///////////////////////////////////////////////

#if 0

int main()
{
        int num;                //for storing the given number
        int count = 0;          //for countiong no.of bits
        int i;                  //for iteration

        printf ("Enter a number:");
        scanf ("%d",&num);                       //reading anumber

	showbit (num);
	printf ("\n");
        for(i = 0; i < 32; i++)                   //counting for no.of set bits
                if( ( num >> i) & 1 ) 
                        count ++;

	printf ("\n%d have a %d set bits\n",num,count);	//displaying no.of set bits
	return 0;
}

#endif

/////////////////////////////////////        To multiply a number  by 4    ///////////////////////////////////////////////

#if 0 

int main()
{
	int num;		//for storing the input value
	
	printf ("\nEnter a number:");		//reading a number
	scanf ("%d",&num);

	printf ("\n%d is multiplicated by 4 is %d\n",num , (num << 2) );		// diplaying the result
	return 0;
}

#endif 

