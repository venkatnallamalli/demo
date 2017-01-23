#include<stdio.h>
#include<string.h>

/*void insert( char *str, int p, char c)
{
	int i;
	char temp;
	
	temp = str[p - 1];
	str[p - 1] = c;
	for(i = p; str[i + 2] != '\0'; i++)
	{
		str[i] = str[i];
	
	}
} */

int my_len(char *str)
{
	int i = 0;
	
	while( (str[i] ) != '\0')
		i++;
	//printf("%d\n",i);
	return i ;
}

void insert (char *str, int p, char c)
{
	int i;
	
	for(i = my_len(str); i >= p-1  ; i--)
	{
		str[i + 1] = str[i];
	}
	str[p - 1] = c;
}

				
		

int main()
{
	int p;
	char str[100];
	char c;

	printf("Enter a string:");
	//scanf("%s",str);
	if( ! (fgets(str,100,stdin);) )
   	{
	printf("Enter position and character to add:");
	scanf(" %d  %c",&p,&c);

	insert(str, p, c);
	}
	else
	{
	printf("\ncheck your input");
	exit(0);
	}
	printf("%s\n",str);
	return 0;
}



