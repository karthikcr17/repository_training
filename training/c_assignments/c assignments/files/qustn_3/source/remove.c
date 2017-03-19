
/* remove the comments from the given c file */

#include "header.h"

int main(int argc, char *argv[])
{

	FILE *fd;
	FILE *fs;
	char ch;

	if(argc != 3) {
		printf("incorrect usage of arguments \n");
		exit(1);
	}

	fs = fopen(argv[1], "r+");
	perror(argv[1]);
	
	fd = fopen(argv[2], "w+");
	perror(argv[2]);

	while((ch = fgetc(fs)) != EOF) {

		if(ch == '/'){
			ch = fgetc(fs);

			if(ch == '/'){ 
				while((ch = fgetc(fs)) != '\n');
				fseek(fs, -1, SEEK_CUR);
				}
			else if(ch == '*') {
				while((ch = fgetc(fs)) != '*');	
				while((ch = fgetc(fs)) != '/');
			}
			else 
				fseek(fs, -2, SEEK_CUR);
		ch = fgetc(fs);
		}
		fputc(ch, fd);
	}

	fclose(fs);
	fclose(fd);

	return 0;
}
				
			
				
