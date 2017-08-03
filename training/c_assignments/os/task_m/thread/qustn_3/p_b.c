#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>


void *heloo(void *b)                                                          
{                                                                               
	printf("hello2 \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	

	strcat(b, "hii");

	getchar();
	return NULL;            
}
                                                    
int main(void)
{
    int err;
	pthread_t tid;
	
	char *str = NULL;

	if(NULL == (str = (char *)malloc(sizeof(char) * 50))) {
		printf("malloc is failed \n");
		exit(1);
	}

	strcpy(str,"hello");
		
	printf("str value in before thread = %s\n",str);

	printf("PID %d\n",getpid());	
	printf("TID %ld\n",syscall(SYS_gettid));	
	getchar();

	err = pthread_create(&tid, NULL, heloo, str);

    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	getchar();
	printf("str value in after thread %s\n",str);
	pthread_exit (NULL);

    return 0;
}
