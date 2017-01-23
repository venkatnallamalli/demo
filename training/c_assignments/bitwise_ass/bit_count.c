#include<stdio.h>
#include"bit_operations.h"

int main()
{
	int num;		//Given number
	int choice;		//for cchoosing set or clear
	printf ("\nEnter a number:");
	scanf ("%d",&num);

	printf ("\nchoose one of the following:\n1.Count set bits\n2.Clear bits\t");
	scanf ("%d",&choice);

	switch(choice)
	{
		case 1 :
		     printf ("\nCount = %d",count_bit_set(num) );
		     break;
		case 2 :
		     printf ("\nCount = %d",count_bit_clear(num) );
		     break;
		default :
		     printf ("\nchoose correct option");
	}

	return 0;
}
