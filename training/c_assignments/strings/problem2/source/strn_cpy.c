#include"header.h"
void strn_cpy(char * dbuff, char *sbuff, int n)
{
	int i;

	for( i = 0; *(sbuff + 1) != '\0' && i < n ; i++)
		*(dbuff + i) = *(sbuff + i);
}
