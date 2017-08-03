#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>

int a = 0;

void *heloo(void *b)                                                          
{                                                                               
	printf("hello2 \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	

	a = a + 10;	

	getchar();
	return NULL;            
}
                                                    
int main(void)
{
    int err;
	pthread_t tid;
	

	a = 10;
		
	printf("a value in before thread %d\n",a);

	printf("PID %d\n",getpid());	
	printf("TID %ld\n",syscall(SYS_gettid));	
	getchar();

	err = pthread_create(&tid, NULL, heloo, NULL);

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	getchar();
	printf("a value in after thread %d\n",a);
	pthread_exit (NULL);

    return 0;
}
