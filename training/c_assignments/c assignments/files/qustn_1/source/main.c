/* convert upper to lower in given string */

#include "header.h"

int main(int argc, char *argv[])
{

	FILE *fp;
	char ch;

	if(argc != 2) {
		printf("usage: is wrong enter the correct arguments \n");
		exit(1);
	}	 

	if((fp = fopen(argv[1], "r+")) == NULL) {
		printf("file is empty \n");
		return 0;
	}

	while((ch = fgetc(fp)) != EOF) {

		if((ch >= 'A') && (ch <= 'Z')) {
			ch = ch + 32;
			fseek(fp, -1, SEEK_CUR);
			fputc(ch, fp);
		}
		else {
			fseek(fp, -1, SEEK_CUR);
			fputc(ch, fp);
		}
	}

	fclose(fp);

	return 0;
}


