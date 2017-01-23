#include<stdio.h>

#if 0
void tranpose(int **p,int m);
int main(void)
{
	int m;
	int n;
	int i;
	int j;
	int a[5][5];

	printf("enter the size: ");
	scanf("%d",&m);

	printf("enter elements:\n");

	for(i = 0; i < m; i++)
		for(j = 0; j< m; j++)
			scanf("%d",&a[i][j]);

	
//	int **g = (int **) &a[0][0]; 
	//int *p = &a[0][0];
	//int **g  = &p;
//	for(i = 0; i < m; i++)
	
//	transpose(g,m);
	return 0;
}

void transpose(int **p, int m)
{
	int i;
	int j;

	printf("p = %p\n",p);
//	printf("p = %p",**p);
	printf("p+ 1 = %p\n",*(p + 1));


	for(i = 0;i < m; i++)
		for(j = 0; j < m; j++)
		//	printf("%d\t",*(*(p + i) + j));
	return;
} 

#endif 

#if 1

int main()
{
	int a[2][2] = {3,2,3,0};

	int **p = &a;

	printf("%d\n",*p + 1);
	return 0;
}
#endif
