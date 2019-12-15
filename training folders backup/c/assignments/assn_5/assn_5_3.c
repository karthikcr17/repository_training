#include <stdio.h>
#include <stdlib.h>
int prg3 (void)
{
	FILE *fp;
	char c;
	int braces = 0;
	int quote = 0;
	int comment = 0;
	FILE *f;

	fp = fopen("file.c", "r");
	if (fp == NULL) {
		perror ("file opening failed");
		exit (1);
	}
	f = fopen ("file.i", "w");
	if (f == NULL) {
		perror ("file opening failed ");
		exit (1);
	}	

	while (EOF != (c = fgetc (fp))) {
		if (c == '"' && quote == 0) {
				quote = 1;
		} else if (c == '"' && quote == 1) {
				quote = 0;
		}
		if (c == '<' && braces == 0) {
				braces = 1;
		} else if (c == '>' && braces == 1) {
				braces = 0;
		}

		
		if (quote == 1 || braces == 1) {
			fputc(c, f);
		} else {
			if (c == '/' ) {
				comment = 1;
				c = fgetc (fp);
			}
			if ( comment == 1 && c == '/' ) {
				c = fgetc (fp);
				while ((c != '\n') && c != EOF) {
					c = fgetc (fp);
				}

				comment = 0;
			} else if ( comment == 1 && c == '*') {
					comment = 2;
					c = fgetc(fp);
				label :
				while (c != '*' && c != EOF) {
					c = fgetc (fp);
					if (c == EOF) break;
				}
				if ((c = fgetc (fp)) == '/') {
					comment = 0;
				} else if (c != EOF) {
					goto label;
				}
				if (comment == 2) {
                	printf("Error : unterminated comment\n");
                	remove ("file.i");
            	}   
			} else if (comment == 1 && c != '/') {
				fputc ('/', f);
				fseek (fp, -1 , SEEK_CUR);
				comment = 0;
			} else {
				fputc (c, f);
			}

		}
	}
	
	fclose (fp);
	fclose (f);
	return 0;
}
