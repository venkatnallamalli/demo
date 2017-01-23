#include<stdio.h>
#include"bit_operations.h"

//# define max( num1, num2)    if( num1 + ( (~num2) + 1 )  ) printf("%d is max\n",num1); \
			     if( ( (~num1) + 1 ) + num1 

#define clr_right_set_bit( num ) ( num & ( ~ ( 1 << cnt_trailing_cleared_bit(num) ) ) )  	//clear right most set bit

#define clr_left_set_bit(num)    ( num & ( ~ ( 1 << ( 31 - cnt_leading_cleared_bit(num) )  ) ) )        //clear left most set bit

#define set_right_clr_bit(num)  ( num | ( 1 << cnt_leading_set_bit(num) ) )		/// set right most clear bit

#define set_left_clr_bit(num)  ( num | ( 1 << ( 31 - cnt_trailing_set_bit(num) ) ) )             /// set right most clear bit

int main()
{
	int num;	//storing a number
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	showbit(num);
	printf("\nClear right most set bit:");
	
	showbit( clr_right_set_bit(num));
	printf("\nClear left most set bit:");
        
	showbit( clr_left_set_bit(num));
	printf("\nTo set right most cleared bit");

	showbit( set_right_clr_bit(num) );
	printf("\nTo set left most cleared bit:");

	showbit( set_left_clr_bit(num) );
	return 0;
}
