#include<stdio.h>
#include"bit_operations.h"

int main()
{
	unsigned int num;	//for storing a number
	int choice;		//choosing one opeartion
	unsigned int res;	//for storing final value
	int n;			//no.of bits

	printf ("Enter a unsigned number:");
	scanf("%d",&num);
	
	printf ("Choose one of the function:");
	printf ("\n1.left_rotate_bit\n2.right rotate bit\n3.left rotate n bits\n4.right roatate n bits");
	scanf ("%d",&choice);

	switch( choice )		// selecting one of our operation
	{
		case 1 :
		     res = left_rotate_bit(num);
		     break;
		case 2 :
		     res =  right_rotate_bit(num);
		     break;
		case 3 :
		     printf("\nEnter no.of bits to move:");
		     scanf("%d",&n);

		     res = left_rotate_n_bits(num,n);
		     break;
		case 4 :
		     printf("\nEnter no.of bits to move:");
		     scanf("%d",&n);

		     res = right_rotate_n_bits(num,n);
		     break;
		default :
		      printf("\neck your entered value");
	}
	
	printf ("\nAfter rotating :");
	
	showbit(res);
	return 0;
}

	

