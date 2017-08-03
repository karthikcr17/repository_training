#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>

void *hii(void *arg) 
{

	printf("hiii\n");
	printf("thread TID %ld\n",syscall(SYS_gettid));	
	printf("thread GID %d\n",getgid());	
	printf("thread EGID %d\n",getegid());	
	printf("thread PID %d\n",getpid());	
	getchar();

	return NULL;
}


void *heloo(void *arg)                                                          
{   
	
	pthread_t tid;
	int err;

	printf("hello2 \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("thread GID %d\n",getgid());	
	printf("thread EGID %d\n",getegid());	
	printf("PID %d\n",getpid());	
	getchar();
	
	err = pthread_create(&tid, NULL, hii, NULL);

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	getchar();
	
					
	return NULL;            
}
                                                    
int main(void)
{
    int err;
	pthread_t tid;

	printf("PID %d\n",getpid());	
	printf("TID %ld\n",syscall(SYS_gettid));	
	getchar();

	err = pthread_create(&tid, NULL, heloo, NULL);

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	getchar();
	pthread_exit (NULL);

    return 0;
}
