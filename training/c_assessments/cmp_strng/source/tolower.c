#include"header.h"	//including header file

void to_lower(char *str)
{
	int i = 0;		//intialize i for using iteration
	
	while((*(str + i + 1) != '\0'))	//loop repeats until null char found
	{
		if (*(str + i) >= 65 && *(str + i) <= 90) //checkingfor upper case char
			*(str + i) = *(str + i) + 32; //if upper add '+32'
		i++;	//incrementing the i value
	}

}
