#include<stdio.h>

int my_strspn (const char *s, const char *accept)
{
	const char *p;
	const char *a;
	int  count = 0;

	for (p = s; *p != '\0'; ++p) {
		 for (a = accept; *a != '\0'; ++a)
			if (*p == *a)
	  			break;
      		if (*a == '\0')
				return count;
      		else
				++count;
    }

  	return count;
}


int main(void)
{
	printf("%d\n",my_strspn("veeenkat","ven"));
	return 0;
}
