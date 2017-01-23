#include"header.h"

int main()
{
	char *str = NULL;
	char *rstr = NULL;

	rstr = (char*) malloc ( 100 );
	str = (char*) malloc ( 100 );
	printf("Enter a string:");
	if (NULL == (fgets(str,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	printf("Enter a string:");
	if (NULL == (fgets(rstr,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	if (my_strrot(str,rstr))
		printf("\nTwo strings are rotational");
	else
		printf("\nTwo strings are not rotational");
	return 0;
}
 
	
	
