#include"header.h"
void reverse(char *sbuff, int len,int count)
{
	int i;	
	int j =0;
	int temp ;
	int k=0;
	
	temp = count -len;

	printf("\ncount = %d\ntemp =%d",count,temp);
	printf("\n2------%s",sbuff);
	for(k =0; k < len ; k++)
		printf("%c\n",*(sbuff + k)); 
	for(i = len, j = 0; j < (temp/2); j++,i++,count--) 
	{
	printf("%d\n",j);
		*(sbuff +  count) ^= *(sbuff + i);
		*(sbuff + i)   ^= *(sbuff  + count);
		*(sbuff  + count) ^= *(sbuff + i);
	}
}
