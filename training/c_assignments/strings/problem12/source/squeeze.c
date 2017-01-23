#include"header.h"
char* squeeze(char *str)
{
	int i = 0;
	int j =0;
	char temp = NULL;
	char *dest = NULL;

	dest = (char*)malloc(MAX);
	
//	temp = *str
	for(i = 0; *(str + i) != '\0'; i++)
	{
		if(temp != *(str + i)) {
			*(dest + j) = *(str + i);
			temp = *(str + i);
			j++;
		}
	}
	return dest;
	
}
