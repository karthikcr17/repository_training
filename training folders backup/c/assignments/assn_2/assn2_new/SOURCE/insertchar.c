#include <stdio.h>
#include "../HEADER/mystring.h"
char *insertchar(char *str, char ch, int pos)
{
	int len;

	len = mystrlen (str);
	if (pos < 1 || pos > len) {
		printf ("invalid postion");
	} else {
		for( ; len >= pos - 1 ; len--) {
			str[len] = str[len - 1];
		}
			str[pos - 1] = ch;
	}
	return str;
}
