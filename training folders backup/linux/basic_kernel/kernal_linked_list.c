/* program to understand the traversing of kernel linked lists */

#include <stdio.h>
#include <stdlib.h>

/* macro to get the starting addres of task_struct */
#define getaddress(tsk, type, a)\
	(tsk = (type*) 0, (char*)(a) - (char*) &(tsk -> tasks))


struct link {	
	struct link* next;
	struct link* prev;
};

struct pcb {	//sample structure of task_struct
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

int main (void)
{
	struct pcb* task = NULL;
	struct pcb* tsk = NULL;
	struct pcb* addr = NULL;	
	struct link *head =  NULL;

	if (NULL == (task = (struct pcb*) malloc (sizeof (struct pcb)))) {
		perror ("memory allocation failed");
		exit (0);
	}
	if (NULL == (head = (struct link*) malloc (sizeof (struct link)))) {
		perror ("memory allocation failed");
		exit (0);
	}

	head -> next = &(task -> tasks);
	addr = (struct pcb*) getaddress(tsk, struct pcb, head -> next);
	printf ("%p\n", &(task -> tasks));
	printf ("%p\n", addr);
	return 0;	
}
