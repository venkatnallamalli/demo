#include"header.h"
int ispalin(char *sbuff)
{
	int len;
	int i;
	int count = 0;
	
	len = my_strlen(sbuff) - 1;
	for(i = 0; i < len/2; i++)
		if( *(sbuff + i) != *(sbuff - i + len - 1)) {
			++count;
			break;
		}
	return count;
		
}
