#include<stdio.h>
#include"bit_operations.h"
int main()
{

	int num ;	//Storing a number in input
	int choice;	//for choosing one of the option

	printf("\nenter a number:");
	scanf("%d",&num);

	printf("Choose one of the following options:\n1.count_leading_set_bits\n2.count_leading_cleared_bits");
	printf("\n3.count_trailing_set_bits\n4.count_trailing_cleared_bits:\t");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
			printf("\nNo.of leading set bits = %d",cnt_leading_set_bit(num) );
			break;
		case 2 :
                        printf("\nNo.of leading cleared bits = %d",cnt_leading_cleared_bit(num) );
                        break;
		case 3 :
                        printf("\nNo.of trailing set bits = %d",cnt_trailing_set_bit(num) );
                        break;
		case 4 :
                        printf("\nNo.of trailing cleared bits = %d",cnt_trailing_cleared_bit(num) );
                        break;
		default :
			printf("\n choose one of the following options\n");
	}
	
	return 0;
}

