#include"header.h"

int main()
{
	char *sbuff = NULL;
	char *dbuff = NULL;
	char *len;
	int n;

	len = (char *) malloc ( 12 );	
	dbuff = (char*) malloc ( 100 );
	printf("Enter a number:");
	fgets(len, 11, stdin); 
	if ( ( n = my_atoi(len) ) != 0 ) 
	{
		sbuff = (char*) malloc ( 100 );
		printf("Enter a string:");
		if (NULL == (fgets(sbuff,MAX,stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}

		strn_cpy(dbuff,sbuff, n);
		printf("our destination string : %s\n", dbuff);
	}
	else
		printf("Check your input\n");
	return 0;
}
 
	
	
