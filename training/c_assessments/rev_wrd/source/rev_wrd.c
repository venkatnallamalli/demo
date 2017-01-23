#include"header.h"

char *rev_wrd(char *str)
{
	int i = 0;			//for iteration
	int j = 0;			//for itetration
	int k = 0;			//length of the string
	int count;				//counting word length
	int len;				//length of the string
	char *temp = NULL;      //To store string2                                  
                                                                                
    if(NULL == (temp = (char*)malloc(MAX))) {   //Allocating the memory         
        perror("fgets failed");             //for the string                    
        exit(EXIT_FAILURE);                 //If it is NULL shows               
    }                                                                                                             
    len = my_strlen(str) - 1;				//length of the string  
	*(str + len) = ' '; 					//add space at end of the string
	for(i = len; i >= 0; i--)				
	{
		if(*(str + i) == ' ') {
			for(j = i + 1,count = 0; j <= len; count++, j++,k++) 	//moving 
				*(temp + k) = *(str + j);			//word to another string
			len -= count;					//decreasing the length
		}
	}
	for(i = 0; i < len ; i++,k++)		//moving 1st word
		*(temp + k) = *(str + i);
	return temp;
}

