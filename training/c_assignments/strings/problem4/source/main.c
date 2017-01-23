#include"header.h"

int main()
{
	char *s1buff = NULL;
	char *s2buff = NULL;

	s1buff = (char*) malloc ( 100 );
	s2buff = (char*) malloc ( 100 );
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

	str_apnd(s1buff,s2buff);
	printf("our destination string : %s\n", s2buff);
	
	return 0;
}
 
	
	
