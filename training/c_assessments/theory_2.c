#include<stdio.h>

#if 1

char* squeeze(char *str)
{
	int i = 0;
	int j =0;
	char temp = NULL;
	char *dest = NULL;

	dest = (char*)malloc(MAX);
	
	for(i = 0; *(str + i) != '\0'; i++)
	{
		if(temp != *(str + i)) {
			*(dest + j) = *(str + i);
			temp = *(str + i);
			j++;
		}
	}
	return dest;
	
}


int main()
{
	char *sbuff = NULL;
	sbuff = (char*) malloc ( 100 );
	printf("Enter a string:");
	if (NULL == (fgets(sbuff,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	
	printf("our output string : %s\n", squeeze(sbuff));
	return 0;
}
 
#endif	
	
