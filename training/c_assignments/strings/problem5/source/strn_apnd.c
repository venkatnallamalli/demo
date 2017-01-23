#include"header.h"
void str_apnd(char * s1buff, char *s2buff, int n)
{
	int i;
	int l;
	int j = 0;
	
	l = my_strlen(s2buff);

	for( i = l - 1; *s1buff != '\0' && j < n; i++,j++)
		*(s2buff + i) = *(s1buff++ );
	*(s2buff + i) = '\0' ;
	
}
