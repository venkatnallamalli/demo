#include"header.h"
int str_spn(const char * buf1, const char *buf2)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	while((*(buf1 + i )  != '\0') && (*(buf2 + j) != '\0'))
	{
		if(*(buf1 + i) == *(buf2 + j)) {
				i++;
				temp++;
			if(*(buf1 + i) != *(buf2 + j + temp)) 
				break;
	}
		temp = 0;
		j++;
	}
	return i;
}
