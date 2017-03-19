#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>

void hello(void) {

	int a = 2;
	printf("fumctin %p\n",&a);

	getchar();

	return;
}


void *heloo(void *b);                                                          
                                                    
int main(void)
{
    int err;
	pthread_t tid;
	int *p = NULL;
	int q;
	int a = 10;	
	int *s;
	s = &a;
	printf("pid of main thread %d\n",getpid());
	printf("a addres %p\n",&a);
	
//	getchar();
	
//	err = pthread_create(&tid, NULL, heloo, s);

	hello();
/*    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");
*/
	getchar();
//	scanf("%x",&q);

//	p = (int *)q;

//	printf("value %d\n",*p);
		
	pthread_exit (NULL);

    return 0;
}

void *heloo(void *b)                                                          
{              
	int x = 20;
	
	printf("pid of child thread %ld\n",syscall(SYS_gettid));

	printf("addres of x %p \n",&x);
/*	p = &x;

	while(*p != 10)
		p++;

	printf("p value in thread %p %d\n",p,*p);
//	p = 20;	         */                                                        
	getchar();
	return NULL;            
}
