#include"header.h"                                                              
                                                                                
int main()                                                                      
{                                                                               
    char *str = NULL;                                                                                                               
	char *res;                                                                              
                                                                                
    str = (char*) malloc ( 100 );                                             
    printf("Enter a string:");                                                  
    if (NULL == (fgets(str,MAX,stdin))) {                                     
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
    res = reverse(str); 
	printf("%s is the reverse if %s",res,str);
                             
    return 0;                                                                   
}
