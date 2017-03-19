#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc, char *argv[])
{

	FILE *fp;

	if(argc != 2) {
		printf("enter the correct files \n");
		exit(1);
	}

	fp = fopen(argv[1],"w+");
	perror(argv[1]);

	if((fprintf(fp,"global edgeeeee") < 0)) {
		printf("fprintf is failed\n");
		exit(1);
	}

	return 0;
}
