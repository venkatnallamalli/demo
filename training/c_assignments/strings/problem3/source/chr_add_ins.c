#include"header.h"
char* chr_add_instr(char *sbuff, char c )
{
	int i;

	for( i = 0; *(sbuff + i) != '\0'; i++)
		if( *(sbuff + i) == c)
			return (sbuff + i);
	return 0;
}
