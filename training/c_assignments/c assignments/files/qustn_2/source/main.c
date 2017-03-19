/* find string in file and print the line */

#include "header.h"

int main(int argc, char *argv[])
{

	FILE *fp; /* file handler */
	char *str;/* str string pointer store the each line in file */
	char *word; /* store each word */
	int i = 0;
	int j = 0;
	int line = 0; /* store line numbers */

	str = (char *)malloc(sizeof(str) * MAX);
	word = (char *)malloc(sizeof(str) * MAX);


	if(argc != 3) {

		printf("usage in correct \n");
		exit(1);
	}


	fp = fopen(argv[1], "r+");
	perror("fopen");

	while((fgets(str, MAX, fp)) != NULL) {
		line++;

		*(str + strlen(str) - 1) = '\0';

		while(*(str + i) != '\0') {
			while((((*(str + i) != ' ') && (*(str + i) != ',')) && 
									(*(str + i) != '.')) && *(str + i)) {
				*(word + j) = *(str + i);
				j++;
				i++;
			}
			*(word + j) = '\0';

			if((strcmp(argv[2], word)) == 0) {
				printf("string is present in this line \n");
				printf("%s\n",str);
				printf("line number is : %d\n",line);
			}
			j = 0;
			i++;
		}
		i = 0;

	}	
	fclose(fp);

	return 0;
}


