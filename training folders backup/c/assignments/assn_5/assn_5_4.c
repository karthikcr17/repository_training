#include <stdio.h>
#include <stdlib.h>

int prg4 (void) 
{
	FILE *fp;
	char c;
	int w_count = 0;

	fp = fopen ("abc.txt", "r");

	if (NULL == fp) {
		perror ("\nopening file failed");
		exit (1);
	}
	while (EOF != (c = fgetc(fp))) {
		if (c == ' ' || c == '\n') {
			w_count ++;
		}
	}

	w_count --;
	printf ("no of words in given file : %d \n", w_count );

	fclose (fp);
	return 0;
}
