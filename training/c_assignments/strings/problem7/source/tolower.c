#include"header.h"

void to_lower(char *str)
{
	int i = 0;
	while((*(str + i + 1) != '\0'))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) = *(str + i) + 32;
		i++;
	}

}
