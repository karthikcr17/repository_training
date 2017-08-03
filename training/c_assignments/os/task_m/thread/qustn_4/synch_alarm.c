//#include<errors.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(int argc, char *argv[])
{
	int sec;
	char line[120];
	char mesg[64];
		while(1) {
		printf("Alaram ");
		if(fgets(line, sizeof(line), stdin) == NULL);
		if(strlen (line) <= 1) continue;

		if(sscanf(line, "%d %64[^\n]",&sec, mesg) > 2) {
			fprintf(stderr,"Bad command");
		} else {
			sleep (sec);
			printf("(%d) %s \n",sec, mesg);
		}
	}
}
	
