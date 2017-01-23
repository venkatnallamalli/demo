#include"header.h"		//including header file

int main()
{
	char *str1 = NULL;		//To store string1
	char *str2 = NULL;		//To store string2
	int res ;					//To store return value after comaprision

	if(NULL == (str1 = (char*)malloc(MAX))) {	//Allocating the memory 
		perror("fgets failed");             //for the string              
        exit(EXIT_FAILURE); 				//If it is NULL shows
	}
	
	if(NULL == (str2 = (char*)malloc(MAX))) {   //Allocating the memory         
        perror("fgets failed");             //for the 2nd string                    
        exit(EXIT_FAILURE);                 //If it is NULL shows               
    }  

	printf("Enter first string:");			//Reading 1st string from the input
	if (NULL == (fgets(str1,MAX,stdin))) {	//Checking for the null  
		perror("fgets failed");				//If it is NULL shows
		exit(EXIT_FAILURE);					//message fgets failed
	}
	
	if(valid(str1)) {
		printf("check your input");
		exit(EXIT_FAILURE);
	}
		
	printf("Enter second string:");					//Reading 2nd string
	if (NULL == (fgets(str2,MAX,stdin))) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	 if(valid(str2)) {                                                           
        printf("check your input");                                             
        exit(EXIT_FAILURE);                                                     
    }  
	res = str_cmp(str1,str2);		//comapring two strings 
	
	if(res == 0)					//if return 0 equal strings 
		printf("Two strings are equal");
	if(res == 1)                    // if return 1 str1 is greater                                         
        printf("string one is greater");
	if(res == -1)                   // if return -1 str2 is greater                                           
        printf("string two is greater");  
	printf("\n");
	return 0;
}
 
	
	
