#include"header.h"		//including the header file

int my_strlen(char *str)	//fun for calculating the length of the string
{
	int i = 0;
	while(*(str + i) != '\0') //iterates upto null character found
			i++;
	return i;					//return the length
} 
