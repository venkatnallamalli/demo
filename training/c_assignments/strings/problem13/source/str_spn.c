#include"header.h"
int str_spn(const char * buf1, const char *buf2)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int count = 0;

	while((*(buf1 + i + 1 )  != '\0') && (*(buf2 + j + 1) != '\0'))
	{
		if(*(buf1 + i) == *(buf2 + j)) {
				i++;
				temp++;
				count++;
			if(*(buf1 + i) != *(buf2 + j + temp)) 
				count = 0;
	}
		temp = 0;
		j++;
	}
	return count;
}
