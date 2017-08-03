#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>

int a = 10;
void *heloo(void *arg)                                                          
{                                                                               
	printf("hello2 \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	
	a = a + 10;
	return NULL;                                                                
}       
void *doSomeThing(void *arg)
{
	printf("hello1 \n");
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	
	a = a + 10;
    return NULL;
}

int main(void)
{
    int err;
	pthread_t tid[2];

	printf("PID %d\n",getpid());	
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("a value %d\n",a);	

   err = pthread_create(&tid[0], NULL, doSomeThing, NULL);

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("\n Thread created successfully\n");

	printf("a value %d\n",a);	
	getchar();
   err = pthread_create(&tid[1], NULL, heloo, NULL);
	printf("a value %d\n",a);	
    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("\n Thread created successfully\n");

	printf("a value %d\n",a);	
	getchar();
	printf("a value %d\n",a);	
	pthread_exit (NULL);

    return 0;
}
