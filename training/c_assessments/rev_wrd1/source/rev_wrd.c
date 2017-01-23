#include"header.h"

void rev_wrd(char *str)
{
	int i = 0;			//for iteration
	int count = 0;				//counting word length
	int len;				//length of the string                           
                  
	len = my_strlen(str) - 1;                                                              
	//*(str + len) = ' ';
	printf("l = %d",len);
    reverse(str,0,(len - 1));
	printf("\nlr = %d",my_strlen(str));
	printf("%s\n",str);
	for(i = 0; i < len ; i++)
	{
		if(*(str + i) != ' ') 
			count++;
		else {
			reverse(str, (i - count - 1 ),(i - 1));
			count = 0;
		}
	}
}
