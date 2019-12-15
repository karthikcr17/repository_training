#include <stdio.h>
#include <stdlib.h>

/* Program to convert UPPER CASE to lower case in a file*/

int prg1 (void)
{
	FILE *fp;
	char c;
	char* ptr;
	char *ptr1;
	int val;
	fp = fopen("abc.txt", "r+"); // opening file with one file descriptor

	if (fp == NULL) {
		perror ("file opening failed");
		exit (1);
	}

	val = fp -> _fileno;
	printf ("%d\n", val);
	printf ("%p\n", fp);
	while((c = fgetc(fp)) != EOF) {
	ptr = fp -> _IO_read_base;
	ptr1 = fp -> _IO_read_ptr;
	printf ("%s\n", ptr);
	printf ("%p\n", ptr);
	printf ("%p\n", ptr1);
	ptr1++;
	printf ("%s\n", ptr1);
	getchar();
	getchar();
		if(c >= 'A' && c <= 'Z') {  // checking whether alphabet is upper.
			c = c + 32;    // if upper converting them to lower.
		}
		
		fseek (fp, -1, SEEK_CUR);	
		fputc(c, fp); // copying converted into same file using another file descrip
	}	

	fclose(fp);

	return 0;
}
