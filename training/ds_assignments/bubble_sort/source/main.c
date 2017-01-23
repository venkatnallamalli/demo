#include"header.h"

int main()
{
	int a[MAX];
	int size;
	int i = 0;
	char *buff;
	
	if(NULL == (buff = (char*)malloc(size_buff))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter the size:"); 
	if(NULL == fgets(buff,size_buff,stdin)) {
		perror("fgets failed");
		exit(EXIT_FAILURE);
	}

	if(!(size = my_atoi(buff))) {
		perror("check your input");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter elements :");
	for(i = 0; i < size; i++) {
		if(NULL == fgets(buff,size_buff,stdin)) {                                    
        	perror("fgets failed");                                                 
        	exit(EXIT_FAILURE);                                                     
    	}                                                                           
                                                                                
    	if(!(a[i] = my_atoi(buff))) {                                               
        	perror("check your input");                                             
        	exit(EXIT_FAILURE);                                                     
    	}  
	}

	bubble_sort(a, size);
	
	printf("sorted list:");
	for(i = 0; i < size; i++) {
		printf("\n%d",a[i]);
	}
	return 0;
}
