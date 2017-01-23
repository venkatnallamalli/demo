#include"header.h"

int main()
{
	char *s1buff = NULL;
	char *s2buff = NULL;
	char res = NULL;

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

	res = str_cmp(s1buff,s2buff);
	
	if(res == '0')
		printf("\nTwo strings are eqaul");
	if(res == '1')                                                              
        printf("\n string one is greater");
	 if(res == '-')                                                              
        printf("\n string two is greater");  
	
	
	return 0;
}
 
	
	
