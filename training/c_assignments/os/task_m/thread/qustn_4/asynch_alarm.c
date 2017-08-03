#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int sec;
	pid_t pid;
	char line[120];
	char mesg[64];

	while(1) {
		printf("Alaram ");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(sscanf(line, "%d %64[^\n]",&sec, mesg) > 2) {
			fprintf(stderr,"Bad command");
		} 
		else {
				pid = fork();
				if(pid > 0) {
					signal(SIGCHLD, SIG_IGN);
					continue;
				}
				else if(pid == 0) {
					sleep (sec);
					printf("(%d) %s \n",sec, mesg);
					exit(0);
			}
		}
	}
}
	
