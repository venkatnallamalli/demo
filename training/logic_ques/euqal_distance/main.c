#include<stdio.h>

void equal_distance(char *str)
{
	int i ;
	int temp = -1;
	int count = 0;
	printf("hai");
	for(i = 0; *(str + i) != '\0';i++) {
		if(*(str + i) == '1') {
			if(temp == -1)	
				temp = i;
			else {
				printf("\n%d",temp);
				printf("\n%d",i);
				temp = -1;
			} 
		}
		else {
			count++;
		}
	}

}


int main()
{
	char *str;

	str = (char*)malloc(100);
	printf("\nEnter a  number");
	fgets(str,70,stdin);
	equal_distance(str);
	return 0;
}
	
