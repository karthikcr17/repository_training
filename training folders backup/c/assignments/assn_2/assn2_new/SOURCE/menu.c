# include <stdio.h>
# include <stdlib.h>
# include "../HEADER/mystring.h"

#define MAX 256
char *str1 = NULL;
char *str2 = NULL;
char *str3 = NULL;
int main (void)
{
	int ch;
	int n;
	char c;
	char delim[MAX] = {'!','@','#','$','%','^','&','*','(',')'};
	char sbuf[MAX] = "GLOBAL EDGE";
	char dbuf[MAX] ;
	
	if (NULL == (str1 = (char*) malloc (MAX))) {
		perror("memory not allocated");
		exit (1);
	}
	if (NULL == (str2 = (char*) malloc (MAX))) {
		perror("memory not allocated");
		exit (1);
	}


	printf("MENU \n 1.Copy the string from source to destination"	
				"\n 2.Copy n characters from source to destination"
				"\n 3.Return address of the first occurence"
						" of given character"
				"\n 4.Appending destination string to source"
				"\n 5.Appending first n characters of str1 to str2"
				"\n 6.Compare two strings with case sensitive"
				"\n 7.Compare two strings without case sensitive"
				"\n 8.To match and return count the characters "
						"in two strings "
				"\n 9.Delimiter fetch strtok"
				"\n 10.To check given string is Palindrome or not"
				"\n 11.Reverse a string"
				"\n 12.To squeeze the consecive similar characters"
						" in a  given string"
				"\n 13.check given strings are rotated version or not"
				"\n 14.Remove the string if is is found given string"
				"\n 15.To insert a  character at a specified positon\n 16.Exit");
		
	printf("\nEnter the choice");
	scanf("%d", &ch);
	getchar();
	if (ch == 3 || ch == 9 || ch == 10 || ch == 11 || ch == 12 || ch == 15) {
		printf ("enter string:");
		if (NULL == fgets(str1, MAX, stdin)) {
			perror ("string read failed");
			exit (1);
		}
		str1[mystrlen(str1) - 1] = '\0';
	} else if (ch >= 3 && ch <= 15) {
		printf ("enter string 1 :");
		if (NULL == fgets(str1, MAX, stdin)) {
			perror ("string read failed");
			exit (1);
		}
		str1[mystrlen(str1) - 1] = '\0';
		printf ("\nenter the string2:");
	
		if (NULL == fgets(str2, MAX, stdin)) {
			perror ("string read failed");
			exit (1);
		}
		str2[mystrlen(str2) - 1] = '\0';
	}
	switch(ch) {
		case 1:	

			mystrcpy(dbuf, sbuf);

			printf ("\ncopied string string2 :%s", dbuf);
			break;

		case 2:
	
			printf("no.of characters to be copied");
			scanf("%d", &n);

			mystrncpy(dbuf, sbuf, n);

			printf("string after copying %d characters :%s\n", n, dbuf);
			break;

		case 3:
			printf ("\nenter the character to be found:");
			scanf("%c", &c);

			str2 = chr_add_instr(str1, c);

			printf("starting address of string %p", str1);
			printf("\ngiven character found at address%p\n", str2);

			break;
				
		case 4:
			str2 = sappend(str1, str2);
			printf ("appended string is: %s", str2);
			break;	
		case 5:
			printf("enter no.of characters to append");
			scanf("%d", &n);

			str2 = snapped(str1, str2, n);

			printf("%s", str2);
			break;		

		case 6:
			n = mystrcmp (str1, str2);
			printf ("\n%d",n);
			break;
		case 7:
			n = mystrcasecmp (str1, str2);
			printf ("\n%d",n);
			break;
		case 8:
			n = mystrspn (str1, str2);
			printf ("initial characters that are present in string 2 are: %d", n);
			break;
		case 9:
			
			str1 = mystrtok(str1, delim);
	
			printf("%s", str1);
			break;
		case 10:
			if (!(mystrcmp (str1, mystrrev(str1)))) {
				printf ("given string is palidrome string");
			} else {
				printf ("given string is not palindrome");
			}
			break;
		case 11:
			str1 = mystrrev (str1);
			printf ("the reverse string is :%s", str1);
			break;  
		case 12:
			str1 = mysqueeze (str1);
			printf ("squeezed string is: %s",str1);
			break;
		case 13:
			str3 = str1;
			str1 = sappend (str1, str3);
			printf ("%s",str1);
			str2 = mystrstr (str1, str2);
			if (str2) {
				printf ("given are rotated version of each other");
			} else {
				printf ("\nnot a rotated version");
			}

			break;
		case 14:
			str1 = remsstr(str1, str2);
			printf ("the string after removing substrings:%s",str1);	
			break;
		case 15:
			printf("\nenter the character to be inserted");
			scanf ("%c", &c);
			printf("\nenter the postion to insert character");
			scanf ("%d", &n);
	
			str1 = insertchar(str1, c, n);
	
			printf("\nmodified string is : %s\n", str1);
			break;
		default:
			printf("\nInvalid input");
	}
	return 0;
}                              
                                                   
