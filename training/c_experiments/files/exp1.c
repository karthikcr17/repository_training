#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
	FILE *fp;
	char str[100];

	fp = fopen("abc.txt","w+");
	perror("abc.txt");

	if((fprintf(fp, "global edge")) < 0) {
			printf("fprintf is failed \n");
			exit(1);
		}

	rewind(fp);

		fscanf(fp,"%[^\n]",str);
		perror("fscanf");

	printf("%s \n",str);

	return 0;
}
