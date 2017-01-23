#include"header.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	int count = 0;
	int line = 0;
	int l;
	char *buff;
	char *str;
	
	if(NULL == (buff = (char *)malloc(MAX))) {
		perror("malloc is failed");
		exit(EXIT_FAILURE);
	}

	if(NULL == (str = (char *)malloc(MAX))) {                                  
        perror("malloc is failed");                                             
        exit(EXIT_FAILURE);                                                     
    }

	printf("Enter a string:");
	if(NULL == (fgets(buff,50,stdin))) {                                  
        perror("fgets is failed");                                             
        exit(EXIT_FAILURE);                                                     
    } 
	
	if(NULL == (fp = fopen(argv[1],"r"))) {
		perror("fopen failed");
		exit(EXIT_FAILURE);
	}
	
	l = my_strlen(buff) - 1;
	while((NULL != (fgets(str,MAX,fp)))){
		line++;
		if(l == strsp(buff,str)) {
			printf("\n%sis  found in line %d",buff,line);
			printf("\n%d line ----- %s",line,str);
			count++;
		}
	}
	if(count == 0)
		printf("%s is not found in the file %s",buff,argv[1]);
}
			
	
	
	
