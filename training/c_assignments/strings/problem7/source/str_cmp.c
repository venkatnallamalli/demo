#include"header.h"


char str_cmp(char *s1buff, char *s2buff)
{
	char flag = NULL;

	to_lower(s1buff);
	to_lower(s2buff);
	
	while( (*(s1buff + 1) != '\0') && (*(s2buff + 1) != '\0'))
	{
		if (*s1buff == *s2buff)
				flag = '0';
		else if(*s1buff > *s2buff)
				return '1';
		else 
			return '-';

		s1buff++;
		s2buff++;
	}
	return flag;
}
