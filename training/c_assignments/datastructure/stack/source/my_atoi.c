#include"header.h"

//extern int top;                                                                 
//extern int stack[MAX]; 

int my_atoi( char *str)
{
	int num;
	num = atoi(str);
	if ( num > 0 )
		return num;
	else 
		return 0;
}
