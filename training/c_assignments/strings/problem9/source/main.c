#include"header.h"

int main()
{
	char *sbuff = NULL;
	char *c = NULL;
	char *tok;


	c = (char *)malloc( 100 );	
	tok = (char*)malloc(50);
	printf("Enter a character:");
	if (NULL == (fgets(c,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
		}
	sbuff = (char*)malloc( 500 );
	printf("Enter a string:");
	if (NULL == (fgets(sbuff,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	tok = my_strtok(sbuff,c);
	printf("output = %s\n",tok);
	tok = my_strtok(NULL,c);                                                   
    printf("output = %s\n",tok);
	
	return 0;
}
 
	
	
