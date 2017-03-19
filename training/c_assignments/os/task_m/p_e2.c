#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100

int main()
{

	FILE *fp = NULL;

	fp = fopen("just.txt","w");
	perror("just.txt");
	
		fputs("Software limited\n", fp);
		getchar();
		fclose(fp);

	return 0;
}
