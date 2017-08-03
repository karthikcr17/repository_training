
/* count the number of words in a given given text file */
#include "header.h"

int main(int argc, char *argv[])
{

	FILE *fp;
	char ch;
	int count = 0;
	char *word = NULL;

	word = (char *)malloc(sizeof(char) * MAX);


	if(argc != 2) {
		printf("incorrect usage of argument count \n");
		exit(1);
	}

	fp = fopen(argv[1], "r+");
	perror(argv[1]);

	while(fscanf(fp, "%s", word) != EOF) {

			count++;
	}

	printf("the number of words in the file is \n");
	printf("%d\n",count);

	fclose(fp);

	return 0;
}






	

