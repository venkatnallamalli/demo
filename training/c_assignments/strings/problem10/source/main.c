#include"header.h"                                                              
                                                                                
int main()                                                                      
{                                                                               
    char *str = NULL;                                                                                                               
	int res;                                                                              
                                                                                
    str = (char*) malloc ( 100 );                                             
    printf("Enter a string:");                                                  
    if (NULL == (fgets(str,MAX,stdin))) {                                     
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
    res = ispalin(str); 
	if(res == 0)                                                      
    	printf("Given string is palindrome");
	else                                                                
        printf("Given string is not a palindrome");
                             
    return 0;                                                                   
}
