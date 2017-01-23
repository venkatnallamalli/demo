#include<stdio.h>
#include<stdlib.h>

int main()
{
	union endianess {
		int a;
		char b;
	} c;

	c.a = 256;
	c.b = c.a;
	if(!(c.b))
		printf("little Endian");
	else
		printf("Big Endian");
	printf("\n");

	return 0;
}

