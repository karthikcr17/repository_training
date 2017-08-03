#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>

void *heloo(void *arg)                                                          
{   
	
	pid_t pid;	                                                                            
	printf("hello2 \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	
	getchar();
	
	pid = fork();
	wait(NULL);

	if(pid > 0) {
		printf("thred parent process \n");
		printf("PID of parent  %d\n",getpid());	
		printf("PPID of parent  %d\n",getppid());	
		getchar();
	}
	else if(pid == 0) {
		printf("thred child process \n");
		printf("PID of child  %d\n",getpid());	
		printf("PPID of child  %d\n",getppid());	
		getchar();
	}
	else
		printf("fork is failed\n");
					
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
