#include"header.h"

int main()
{
	char *sbuff = NULL;
	char *len;
	int n;
	char *c;

	len = (char *) malloc ( 12 );
	c = (char *) malloc ( 12 );	
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
		if (NULL == (fgets(c,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
		}

		insert_char(sbuff,c[0], n);
		printf("our new string is : %s\n", sbuff);
	}
	else
		printf("Check your input\n");
	return 0;
}
 
	
	
