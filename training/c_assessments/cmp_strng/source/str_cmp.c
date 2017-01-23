#include"header.h"		//including header file

int str_cmp(char *str1, char *str2)
{
	int flag = 2;

	to_lower(str1);		//converting str1 in to lower case
	to_lower(str2);		//converting str2 in to lower case
	
	while((*(str1 + 1) != '\0') && (*(str2 + 1) != '\0'))//iterates up to'\0' 
	{
		if (*str1 == *str2)		//comapring the characters 
				flag = 0;		//assign flag = 0 and check remaining char
		else if(*str1 > *str2)	
				return 1;		//greater return 1
		else 
			return -1;			//otherwise return -1

		str1++;					//incrementing the str1 address
		str2++;					//incrementing the str2 address
	}
	return flag;				//if all char equal return flag
}
