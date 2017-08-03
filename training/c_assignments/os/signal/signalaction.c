#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>


void handler(int a,siginfo_t *q, void *k) {

	int sig;
	printf("handle signal\n");
	printf("handle signal %d\n",a);
	printf("siginfo  %p\n",q->si_addr);
	printf("ip  %p\n",(int *)k);
	
	exit(1);
}

int main()
{
	
	int *p = 0;
	struct sigaction act;
	act.sa_sigaction = &handler;
	act.sa_flags = SA_SIGINFO;
	if(-1 == (sigaction(SIGSEGV, &act, NULL))) {
		printf("sigaction is failed \n");
		exit(1);
	}
	p = 123;
	*p = 99;
	pause();

	return 0;
}
