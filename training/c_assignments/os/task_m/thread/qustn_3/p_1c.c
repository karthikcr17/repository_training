#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>


void *heloo();                                                          
                                                    
int main(void)
{
    int err;
	pthread_t tid;
	int *p = NULL;
	int q;
	int a = 10;	
	printf("pid of main thread %d\n",getpid());
	printf("a addres %p\n",&a);
	
	getchar();
	
	 heloo();

	scanf("%x",&q);

	p = (int *)q;

	printf("value %d\n",*p);
		
	pthread_exit (NULL);

    return 0;
}

void *heloo()                                                          
{              
	int x = 20;
	
	printf("pid of main thread %ld\n",syscall(SYS_gettid));

	printf("addres of x %p \n",&x);
/*	p = &x;

	while(*p != 10)
		p++;

	printf("p value in thread %p %d\n",p,*p);
//	p = 20;	         */                                                        
//	getchar();
	return NULL;            
}
