#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define OFF(ptr, mem, tasks, type) \
	type *pt;\
	pt = malloc(sizeof(type));\
	unsigned int p;\
	unsigned int d;\
	unsigned int ptr;\
	unsigned int q;\
	p = (unsigned int)pt; \
	q = (unsigned int)&(pt -> tasks);\
	d = q - p;\
	ptr = mem - d

	
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
}task1;

int main()
{
	task1.state = 100;
	task1.pid = 1235;
	task1.flags = 1;
	task1.prio = 11;
	task1.fpu_counter = 'k';
	task1.tasks.next = NULL;
	task1.tasks.prev = NULL;
	task1.rcu_read = 'b';
	task1.tgid = 12345;
	strcpy(task1.comm,"hello");
	task1.rt_prio = 123;
	
	
	unsigned int mem = (unsigned int)&task1.tasks;
	struct task *obj;

	OFF(ptr, mem, tasks, struct task);

	obj = (struct task *)ptr;

	printf("the data in structure \n");

	printf("%ld\n",obj->state);
	printf("%d\n",obj->pid);
	printf("%d\n",obj->flags);
	printf("%d\n",obj->prio);
	printf("%c\n",obj->fpu_counter);
	printf("%p\n",obj->tasks.prev);
	printf("%p\n",obj->tasks.next);
	printf("%c\n",obj->rcu_read);
	printf("%d\n",obj->tgid);
	printf("%s\n",obj->comm);
	printf("%u\n",obj->rt_prio);
	
	free(pt);
	pt = NULL;
	 	
	return 0;
}
