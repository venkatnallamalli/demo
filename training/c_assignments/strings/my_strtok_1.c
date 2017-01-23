#include"header.h"

char* my_strtok(char *str, char *c )
{
	int i = 0;
	int j = 0;
	char tok[100];

	while(*(str) != '\0') {
		if ( *str != c[0]) {
			*(tok + j) = *(str);
			j++;
		}
		else {
			*(tok + j) = '\0';
			return tok;
		}
		str++;
	}
			
}
