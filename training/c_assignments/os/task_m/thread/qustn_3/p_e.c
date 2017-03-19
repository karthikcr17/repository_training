#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<unistd.h>


void *heloo(void *b)                                                          
{                                                                               
	printf("hello \n");                
	printf("TID %ld\n",syscall(SYS_gettid));	
	printf("PID %d\n",getpid());	

	fputs("Software limited", b);
	fclose(b);

	return NULL;            
}
                                                    
int main(void)
{
    int err;
	pthread_t tid;
	FILE *fp = NULL;

	printf("PID %d\n",getpid());	
	printf("TID %ld\n",syscall(SYS_gettid));	

	fp = fopen("just.txt","w+");
	perror("just.txt");	
	getchar();
	err = pthread_create(&tid, NULL, heloo, fp);
    if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
        else
            printf("Thread created successfully\n");

	fputs("Global edge", fp);
	fclose(fp);
	pthread_exit (NULL);

    return 0;
}
