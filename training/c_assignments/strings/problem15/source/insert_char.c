#include"header.h"

char* insert (char *str, const char c, int p)
{
	int i;
	
	for(i = my_strlen(str); i >= p-1  ; i--)
	{
		str[i + 1] = str[i];
	}
	str[p - 1] = c;
	return 0;
}

