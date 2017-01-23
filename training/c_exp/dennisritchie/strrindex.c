#include<stdio.h>

#define MAX 32

int strrindex(char *, char);
int str_len(char *);
int main()
{
	int p;
	char t;
	char s[MAX];

	printf ("Enter a string:");
	fgets (s,MAX,stdin);

	printf ("Enter a charecter:");
	t = getchar();
	
	p = strrindex(s,t);
	
	if (p == -1)
		printf ("%c is not found in %s\n",t,s);
	
	else
		printf ("%c is found in %s at %d\n",t,s,p);
	return 0;
}

int strrindex (char *s, char t)
{
	int l;
	int i;
	l = str_len(s);
	
	for (i = l - 1; i >= 0; i--)
		if (s[i] == t)
			return i;
	return -1;
}

int str_len (char *s)
{
	int i = 0;
	
	while (*s++)  
		i++;
	return i;
}
