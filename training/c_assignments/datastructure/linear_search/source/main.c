#include"header.h"	//including header file

int main()
{
	int a[MAX];		//declaring  array
	int key;		//element to search
	int size;		//size of the list
	int i = 0;		//incrementing
	int pos;		//store position of the search ele
	char *buff;		//declaring the buffer
	
	printf("Enter the size:");		//asking size
	if(NULL == (buff = (char*)malloc(size_buff))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	if(NULL == fgets(buff,size_buff,stdin)) {	//getting the size
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if(!(size = my_atoi(buff))) {		//coverting to integer
		perror("check your input");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter elements :");		//enter elements
	for(i = 0; i < size; i++) {
		if(NULL == fgets(buff,size_buff,stdin)) {   //getting elements                                 
        	perror("fgets failed");                                                 
        	exit(EXIT_FAILURE);                                                     
    	}                                                                           
                                                                                
    	if(!(a[i] = my_atoi(buff))) {     //converting to integer                                          
        	perror("check your input");                                             
        	exit(EXIT_FAILURE);                                                     
    	}  
	}
	
	printf("Enter a element a to search:");		//enter ele to search
	if(NULL == fgets(buff,size_buff,stdin)) {   // getting search element             
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(!(key = my_atoi(buff))) {         //converting to integer                                      
        perror("check your input");                                             
        exit(EXIT_FAILURE);                                                     
    } 

	pos = linear_search(a, size, key);		//calling search function
	
	if(pos != -1)	//if found
		printf("%d is found at %d postion",key,pos);
	else		//if not found
		printf("%d is not found",key); 
	return 0;
}
