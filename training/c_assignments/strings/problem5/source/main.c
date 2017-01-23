#include"header.h"

int main()
{
	char *s1buff = NULL;
	char *s2buff = NULL;
	char *len = NULL;
	int n;

	s1buff = (char*) malloc ( 100 );
	s2buff = (char*) malloc ( 100 );
	len = (char *) malloc ( 12 );
	
	printf("Enter a number:");
	fgets(len, 11, stdin); 
	if ( ( n = my_atoi(len) ) != 0 ) 
	{
		printf("Enter first string:");
		if (NULL == (fgets(s1buff,MAX,stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		printf("Enter second string:");
		if (NULL == (fgets(s2buff,MAX,stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		str_apnd(s1buff,s2buff,n);
		printf("our destination string : %s\n", s2buff);
	}
	else
		printf("Check your input\n");
	
	return 0;
}
 
	
	
