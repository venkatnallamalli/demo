#include"header.h"

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
 
	
	
