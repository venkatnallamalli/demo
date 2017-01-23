#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void showbit( int n ) 

{
        int i;
        for(i = 31; i >= 0; i--)
        {
                (n >> i) & 1 ? printf ("1") : printf ("0");
                if( (i % 8) == 0)
                        printf (" ");
        }
}



int sswap (int n, int s, int d)
{ 

	if( ( (n >> s) & 1 ) == ( (n >> d) & 1) )
		return n;
	else
		return ( ( ( 1 << d ) | (1 << s ) ) ^ n ) ;

}



int dswap(int *snum, int *dnum, int s, int d)
{
        if( (*snum >> s) == (*dnum >> d) )
         
	       return 0;
        
	else
        {
		*snum = *snum ^ ( 1 << s);
		*dnum = *dnum ^ ( 1 << d);
		
		return 0;
	}
 
}


int toggle (int n, int c )
{
        int i;
        
	for (i = c ; i <= 31 ; i = i + 2 )
        	n = n ^ ( 1 << i );
		
	return n;
}


unsigned int left_rotate_bit (unsigned int num)
{
	return ( ( ( num & (1 << 31) ) >> 31 )| (num << 1) );
}

unsigned int right_rotate_bit (unsigned int num)
{
        return ( ( num & 1 ) << 31 | (num >> 1) );
}

unsigned int left_rotate_n_bits (unsigned int num, int n)
{
        return ( ( ( num & ( ( ~ ( (~0) << n ) ) << ( 31 - n) ) ) >> ( 31 - n ) ) | (num << n) );
}   	

unsigned int right_rotate_n_bits (unsigned int num , int n)
{
	return ( ( ( num & ( ~ ( ( ~ 0 ) << n ) ) ) << ( 32-n ) ) | ( num >> n) );
}


int count_bit_set(int num)		// to count no.of set bits 
{
	int c = 0;
	int i;
	for(i = 0 ; i <= 31 ; i++ )
		if( (num >> i) & 1 )
			c++;
	return c;
}


int count_bit_clear(int num)              // to count no.of set bits 
{
        int c = 0;
        int i;
        for(i = 0 ; i <= 31 ; i++ )
                if( !( (num >> i) & 1) )
                        c++;
        return c;
}


int cnt_leading_set_bit(int num)	// To count no.of leading set bits
{
	int i;		// for iteration
	int c = 0;		// for count no.of bits

	for( i = 31; i >= 0 ; i--)
	{
		if( (num >> i) &1 ) 
			c++;
		else
		 	break;
	}
	return c;
}


int cnt_leading_cleared_bit(int num)        // To count no.of leading cleared bits
{
        int i;          // for iteration
        int c = 0;              // for count no.of bits

        for( i = 31; i >= 0 ; i--)
        {
                if( (num >> i) &1 )  
                        break; 
                else 
                        c++;
        }

        return c;
}


int cnt_trailing_set_bit(int num)        // To count no.of trailing set bits
{
        int i;          // for iteration
        int c = 0;              // for count no.of bits

        for( i = 0; i <= (sizeof(int) * 8 - 1) ; i++)
        {
                if( (num >> i) & 1U )  
                        c++; 
                else 
                        break;
        }

        return c;
}



int cnt_trailing_cleared_bit(int num)        // To count no.of trailing cleared bits
{
        int i;          // for iteration
        int c = 0;              // for count no.of bits

        for( i = 0; i <= 31 ; i++)
        {
                if( (num >> i) &1 )
                        break;
                else
                        c++;
        }

        return c;
}




int invert(int n, int s, int d)
{
	return   ( n ^ ( ( ~ ( (~0) << abs(s - d ) ) ) << ( (s > d) ? d : s ) ) ) ;
}
