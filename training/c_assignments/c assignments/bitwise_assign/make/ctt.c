#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

	FILE *fp;
	char ch;
	
	if(argc != 2) {
		printf("enter the correct arguments \n");
		exit(1);
	}
	

	fp = fopen(argv[1],"r+");
	perror(argv[1]);
	while((ch = fgetc(fp)) != EOF) {

			fputc(ch, stdout);
	}
	fclose(fp);
	return 0;
}
