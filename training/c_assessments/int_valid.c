#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int my_isdigit(char c)
{
	if( c >=48 && c <= 57)
		return 1;
	else
		return 0;
}

int my_pow(int dc)
{
	if(dc == 0)
		return 1;
	else 
		return 10 * my_pow(dc-1);
}
	
int my_atoi( char *s)
{
	int d = 0;
	int n;
	int dc;
	int sum = 0;
	int i=0;
 
	while(s[i] != '\n')
	{
		i++;
	}
	i--;
	dc = i;
	
	if( (i <= 9) && ( i <= 9 || s[0] - '0' == 1 || s[0] - '0' == 2) )
	{
		for(d = 0 ; d <= i; d++,dc--)
		{
			sum += my_pow(dc)  * (s[d] - '0');
		}
		return sum;
	}
	else
		return -1;
}  
	
int main()
{
	char s[100];
	int b;
	int c=0;
	int value;
	int i;

	printf("\nEnter a number:");
	for(b = 0; s[b-1] != '\n'; b++)
		scanf("%c",&s[b]);
	
	for(i = 0; s[i] != '\n'; i++)
	{
		if(!(my_isdigit(s[i])))
			{
				c++;
				
			}
		if( c ==1 )
			break;
	}

	if(c == 1)
		printf("\nCheck the input number:");
	else
	{
		value = my_atoi(s);
		if( value & (1 << 31) ) 	
			printf("\nEnter a positive a number");
		else
		{
			if( value  == -1 )
				printf("\nEnter value in the range:");
			else
				printf("\n%d",value);
		}
	}
	printf("\n");
	return 0;
}
