#include <stdio.h>
#include<stdlib.h>
#if 0
int main()
{
	char  *p;
	int a =0x5042;
	p =  &a;
	printf("%c,%p,%p,%d",*p,&p,p,sizeof(p));
	return 0;
}
#endif


#if 0
int main()
{
	int a[5] = {1,2,3,4,5};
	int *p;
	int *q;
	
	p = (a + 1);
	q = (a + 2);

	printf("%p\n",p/q);	//invalid operators / * +
	printf("%p\n",p*q);
	printf("%p\n",p+q);
	printf("%p\n",p-q);
	return 0;
}
#endif

#if 0

int main()
{
	char *p = "venkat";	// it prints venkat

	printf("%s",p);
	return 0;
}
#endif
	

#if 0                                                                           
                                                                                
int main()                                                                      
{                                                                               
    char *p = "venkat";		//seg fault                                     
     					//because try to change the string	
	*(p + 1) = 'v';     //it is in RO data                                
    printf("%s",p);                                                             
    return 0;                                                                   
}                                                                               
#endif  

#if 0                                                                           
                                                                                
int main()                                                                      
{                                                                               
    char *p = "venkat";     //seg fault                                         
                                                                                
    *(p + 1) = 'v';                                                                           
    printf("%s",p);                                                             
    return 0;                                                                   
}                                                                               
#endif   


#if 0
int main()
{
	int a[10] = { 10,20,30,40,50};
	int *b[5];
	int (*a)[5];

	p = arr;
	a =&(arr);

	printf("%p\n",p);
	printf("%p\n",a);

	p++;
//	a++;
	
	//int *a[5] (*p);
	 printf("%d\n",*p);

	printf("%d\n", *(*a + 1));

	return 0;
}

#endif
	

#if 0

int main()
{
	int a[5] = { 1,2,3,4,5};
	int *b[5] ;
	int (*c)[5] = NULL;
	int *d = NULL ;

	*b = NULL;
//	*b = &a;
//	c = a;
//	d = a;

	printf("&a = %p\n",&a);
	printf("a = %p\n",a);
	printf("a + 1  = %p\n",a + 1);
	printf("&a + 1 = %p\n",&a + 1);
	printf("a++  = %p\n",a + 2);

	printf("&b = %p\n",(&b));
	printf("b = %p\n",*b);
	printf("b + 1 = %p\n",b + 1);
	printf("&b + 1 = %p\n",&b + 1); 

	printf("&c = %p\n",&c);
	printf("c = %p\n",c);
	printf("c + 1 = %p\n",c + 1);
	printf("&c + 2 = %p\n",&c + 2 );
	printf("c++ = %p\n",c++);


	printf("\n\n\n b = %d\t\t c = %d",sizeof(b),sizeof(c));
	printf("\nsizeof(*p) = %d",sizeof(*c));

	return 0;
}

#endif


#if 0

int main()
{
	int arr[10] = { 1,2,3,4,5,6};
	int (*a)[10];
	
	a = &arr;
	printf("\nsizeof(arr) = %d",sizeof(arr));
	printf("\nsizeof(a) = %d",sizeof(*a));
	printf("\na[5] = %d",**(a + 4));
	return 0;
}

#endif

#if 0

int main()
{
	int arr[10] = {100,22,3,4,5};
	int *p;
	
	p = arr;
	printf("\nsizeof(arr) = %d",sizeof(arr));
	//printf("\narr++ = %d",arr++);		//It shows lvalue required
	//printf("\n%d",(1=5));	//lvalue required
	printf("\n*p = %d",*p);
	printf("\narr = %p",arr); 
	printf("\n&p = %d",&p); 
	printf("\n&*p = %p",&*p);
	printf("\n*&p = %p",*&p);
	printf("\n*(&p) = %p",*(&p)); 
	printf("\n&(*p) = %p",&(*p));   
	printf("\n++*p = %d",++*p); 
	printf("\narr[0] = %d",arr[0]);
	printf("\n*p++ = %d",*p++);
	printf("\narr[0] = %d",arr[0]);
	printf("\n*(++p) = %d",*(++p)); 
	 
	return 0;
}

#endif
	 

#if 0

int main()
{
	int a[3][3] = { {1,2,3},{3,4,5},{6,7,8}};
	int *b[10];
	*(b + 5) = a;
	int *p = a[0];
	int **p1 = (a+0);
	
	printf("\n&a = %p",&a);

	printf("\n%d",(*(p + 1) + 1));
	//printf("\n*p++ = %d",*((*p1 + 1) + 0));
//	printf("\n%p",b[5]);
//	printf("\n**p1 = %d",**p1);
	//printf(
	return 0;
}

#endif

#if 0
int main()
{
	char	*s = "venkat";
	char *d ;
	char n = 'a';
	char *str1;
	char *str;
	str = (char*)malloc(20);

	str1 = (char*)malloc(4);
	printf("\nstr = %p",str);
	str = "";
	printf("\nstr = %p",str);
	
	d = s;
//	*s = n ;
	printf("\n%d",printf("\n%s","venkatt"));
	printf("\n%d",printf("\n%p","venkatt"));
	printf("\ns = %s\td = %s",s,d);
	return 0;
}
#endif

#if 0

int main()		//error
{
	int *p;
	float *q;
	
	printf("with out intilaization (p - q): %d\n", (p - q));
	printf("with out intilaization (q - p): %d\n", (q - p));
	return 0;
}
#endif


#if 0                                                                           
                                                                                
int main()                                                                      
{                                                                               
    int *p;  	// garbage                                                                   
    int *q;                                                                   
                                                                                
    printf("with out intilaization (p - q): %d\n", (p - q));                    
    printf("with out intilaization (q - p): %d\n", (q - p));                    
    return 0;                                                                   
}                                                                               
#endif

#if 0                                                                           
                                                                                
int main()        // "ZERO"                                                              
{                                                                               
    int *p = NULL;                                                                     
    int *q = NULL;                                                                   
                                                                                
    printf("with out intilaization (p - q): %d\n", (p - q));                    
    printf("with out intilaization (q - p): %d\n", (q - p));                    
    return 0;                                                                   
}                                                                               
#endif


#if 0                                                                           
                                                                                
int main()                                                                      
{        
	int a[10];  // error                                                                     
    int *p = a;                                                                     
    float *q = a;                                                                   
                                                                                
    printf("with out intilaization (p - q): %d\n", (p - q));                    
    printf("with out intilaization (q - p): %d\n", (q - p));                    
    return 0;                                                                   
}                                                                               
#endif

#if 0                                                                           
                                                                                
int main()                                                                      
{                                                                               
    int a[10] = {10,20,30};  //ZERO                                                                      
    //int *p = a;                                                                     
    float *p = (char *)a;                                                                   
                                                                                
    printf("with out intilaization *(p): %d\n", *p);                    
    printf("with out intilaization *(p + 1): %d\n", *(p + 1));                    
    return 0;                                                                   
}                                                                               
#endif

#if 0                                                                           
                                                                                
int main()                                                                      
{                                                                               
    int a[10] = {10,20,30};  //ZERO                                                                      
    //int *p = a;                                                                     
    float *p = (float *)a;                                                       
                                                                                
    printf("with out intilaization *(p): %d\n", *p);                            
    printf("with out intilaization *(p + 1): %d\n", *(p + 1));                  
    return 0;                                                                   
}                                                                               
#endif

#if 1                                                                           
                                                                                
int main()                                                                      
{                                                                               
    int a[10] = {10,20,30};                                                                        
    //int *p = a;                                                                     
    char *p = (char *)a;                                                       
                                                                                
    printf("with out intilaization *(p): %d\n", *p);  //10
	printf("with out intilaization *(p + 2): %d\n", *(p + 2)); //0                          
    printf("with out intilaization *(p + 1): %d\n", *(p + 4)); //20                 
    return 0;                                                                   
}                                                                               
#endif  
