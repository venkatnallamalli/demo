#include"header.h"

int main()
{
	char *sbuff = NULL;
	char *c = NULL;


	c = (char *) malloc ( 100 );	
	printf("Enter a character:");
	if (NULL == (fgets(c,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
		}
	sbuff = (char*) malloc ( 100 );
	printf("Enter a string:");
	if (NULL == (fgets(sbuff,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}
	if (chr_add_instr(sbuff,c[0]))
		printf("%c first occurance at %p \n",c[0],chr_add_instr(sbuff,c[0]));
	else
		printf("Charater not found in the given string\n");
	return 0;
}
 
	
	
