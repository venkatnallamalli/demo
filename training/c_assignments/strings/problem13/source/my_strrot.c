#include"header.h"
int my_strrot(char *s1, char *s2)
{
	int r;
	char *temp = NULL;
	int len = 0; 
	//printf("temp = %d",my_strlen(temp));
	temp = (char*)malloc(MAX);
	*temp = 'a';
	len = my_strlen(s1) - 1;
	printf("\nlen = %d",len);
	
	str_apnd(s1,temp);
	str_apnd(s1,temp);
	printf("\n%s",temp);
	
	r = str_spn(s2,temp);
	printf("\nr = %d",r);
	if (r == len)
		return 1;
	else
		return 0;
	
}
