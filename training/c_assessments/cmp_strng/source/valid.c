#include"header.h"  //including the header file

int valid(char *str)
{
	int j = 0;

	while(*(str + j + 1) != '\0')
 	{								//checking for character is alpha or not 
		if(!(((*(str + j) >= 'a') && (*(str + j) <= 'z')) 
			||((*(str + j) >= 'A') && (*(str + j) <= 'Z'))
			||((*(str + j) >= 48) && (*(str + j) <= 57)))) {
				return 1;
	}	
	j++;
	}
	
	return 0;
}

