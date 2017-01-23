#include"header.h"		//including header file

int main()
{
	char *str1 = NULL;		//To store string1
//	char *str2 = NULL;		//To store string2

	if (NULL == (str1 = (char*)malloc(MAX))) {	//Allocating the memory 
		perror("fgets failed");             //for the string              
        exit(EXIT_FAILURE); 				//If it is NULL shows
	}
	
//	if (NULL == (str2 = (char*)malloc(MAX))) {   //Allocating the memory         
//        perror("fgets failed");             //for the 2nd string                    
//        exit(EXIT_FAILURE);                 //If it is NULL shows               
//    }  

	printf("Enter a string:");			//Reading 1st string from the input
	if (NULL == (fgets(str1,MAX,stdin))) {	//Checking for the null  
		perror("fgets failed");				//If it is NULL shows
		exit(EXIT_FAILURE);					//message fgets failed
	}
	
	if (valid(str1)) {						//checking the string validation
		printf("check your input");
		exit(EXIT_FAILURE);
	}
	
	if((*(str1 + 0) == 10)) {
		printf("check your input");	
		exit(EXIT_FAILURE);
	}
	rev_wrd(str1);					//calling rev_wrd fun to rev words
	printf("final---%s",str1);						//shows modified string 
	printf("\n");
	return 0;
}
 
	
	
