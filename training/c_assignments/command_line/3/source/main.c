#include"header.h"

int main(int argc, char *argv[])
{
	int a;
	int b;

	void (*fun_ptr[])(int, int) = {add, sub, mul, div};

	a = atoi(argv[2]);
	b = atoi(argv[3]);

	if(!my_strcmp("add",argv[1]))
		(*fun_ptr[0])(a, b);
	
	else if(!my_strcmp("sub",argv[1]))                                               
        (*fun_ptr[1])(a, b); 

	else if(!my_strcmp("mul",argv[1]))                                               
        (*fun_ptr[2])(a, b); 

	else if(!my_strcmp("div",argv[1]))                                               
        (*fun_ptr[3])(a, b); 

	return 0;
}

