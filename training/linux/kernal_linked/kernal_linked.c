#include<stdio.h>
#include<stdlib.h>

								

struct link {
	struct link *next;
	struct link *prev;
};

struct task {
	long state;
	int pid;
	int flags;
	int prio;
	unsigned char fpu_counter;
	struct link tasks;
	char rcu_read;
	int tgid;
	char comm[16];
	unsigned int rt_prio;
};

#define offset(ptr1,ptr,type,mem)  { type instance ; \
								ptr1 = ptr - ( &(instance.mem) - &(instance));\
							}

int main()
{
	struct task app;
	struct task *neha;
	struct task *gore;
	int p1;
	int p2;
	int p3;
	int p4;
	
/*	if(NULL == (neha = (struct task *) malloc(sizeof(struct)))){
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}*/

	
	app.state = 1;
	app.pid = 1;
	app.flags = 1;
	app.prio = 1;
	app.fpu_counter = 1;
	app.rcu_read = 1;
	app.tgid = 1;
	app.comm[0] = 'a';
	app.rt_prio = 1;

//	app.(tasks -> next) = &(app.link);


	//offset(gore ,&(app.tasks),(struct task),tasks);

struct task  instance ;   
//	instance.state = 1;                        
             p1 =  &instance.prio;
			p2 = &instance;
			p3 = p1 - p2;

	
	printf("%p\n",p3);

	
	printf("app = %p\n",&app);
	p4 = &app.prio;
	printf("app.prio %p\n",p4);
	printf("app %p\n",p4 - p3);

	neha = p4 -p3;
	
	printf("%d\n",neha -> state);
	//gore = (neha -> tasks) - neha;
	return 0;
}
