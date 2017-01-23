#include"header.h"
char* reverse(char *sbuff)
{
	int len;
	int i;
	char *rev = NULL;
	
	rev = (char *) malloc(MAX);
	len = my_strlen(sbuff) - 1;

	for(i = len; i >= 0; i--)
		*(rev++) = *(sbuff + i);
		 
	*rev = '\0';
 	return (rev - len);
		
}
