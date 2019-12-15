#include <stdio.h>
#include "../HEADER/mystring.h"
void mystrcpy(char *dbuf, char *sbuf)
{	printf ("%s",sbuf);
	while ((*dbuf ++ = *sbuf ++) != '\0');
	printf ("%s",dbuf);
	
} 

void mystrncpy(char *dbuf, char *sbuf, int n)
{
	int i;

	if(n <= mystrlen(sbuf) && n > 0) {
		for(i = 0; i < n; i++) {
			*(dbuf + i) = *(sbuf + i);
		}
		*(dbuf +i) = '\0';
	} else {
		printf ("\ninvalid input");
		*dbuf = '\0';
	}
}
	 
