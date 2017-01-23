#include"header.h"

int main()
{
	char *sbuff = NULL;
	char *dbuff = NULL;

	dbuff = (char*) malloc ( 100 );
	sbuff = (char*) malloc ( 100 );
	printf("Enter a string:");
	if (NULL == (fgets(sbuff,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	str_cpy(dbuff,sbuff);
	printf("our destination string : %s\n", dbuff);
	return 0;
}
 
	
	
