/*****
	*
	*
	program to find a substring from file and printf the line number and 
	the line where it is found

	*
	*
*****/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
int mystrlen (char* );
int mystrstr (char*, char *);
int prg2 (void) 
{
	FILE *fp;
	int len;
	char *buf = NULL;
	char *str = NULL;
	int ln_count = 1; //line counter
	int flag = 0; //if substring found flag will be raised

	fp = fopen ("abc.txt", "r");

	if (NULL == fp) {
		perror ("\nopening file failed");
		exit (1);
	}
	if (NULL == (buf = (char *) malloc (MAX))) {
		perror ("memory not allocated");
		exit (1);
	}
	
	if (NULL == (str = (char *) malloc (MAX))) {
		perror ("memory not allocated");
		exit (1);
	}

	getchar();
	printf("enter the sub string :");
//	getchar();
	if (NULL == fgets (str, MAX, stdin )) { // getting substring
		perror ("substring input failed");
		exit (1);
	}

	len = mystrlen(str);
	str[len - 1] = '\0';	 // string will have new char at last making null char

	while (fgets (buf, MAX, fp) != NULL) { 		// getting line by line from file to buffer
		if (mystrstr (buf, str)) { 	//checking for substring
			flag = 1;
			break;
		}
		ln_count ++;
	}
	if (flag == 1) {
		printf ("\nthe substring %s is "
				"found in the line number %d", str, ln_count);
		printf("\nthe statement is = %s", buf);
	} else {
		printf("\nsubstring not found in the file");
	}

	fclose (fp);
	return 0;
}

