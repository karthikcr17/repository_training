#include<stdio.h>                                                               
#include<stdlib.h>                                                              
#include<unistd.h>                                                                

int main()                                                                        
{                                                                                    

	char *str = NULL;                                                                  
	pid_t pid;                                                                       

	if(NULL == (str = (char *)malloc(sizeof(char) * 20))) {                         

		printf("malloc is failed\n");                                               
		exit(1);                                                                    
	}                                                                               

	pid = fork();                                                                   

	if(pid > 0) {                                                                   
		wait(NULL);                                                                 
		execl("./res", "./res", NULL);                                              
	}                                                                               
	else if(pid == 0) { 
		putc('$',stdout);                                                            
		scanf("%s",str);                                                             
		execlp(str, str, NULL);                                                     
	}                                                                               
	else                                                                            
		printf("fork is failed \n");                                                

	return 0;                                                                       
}                                                                              

