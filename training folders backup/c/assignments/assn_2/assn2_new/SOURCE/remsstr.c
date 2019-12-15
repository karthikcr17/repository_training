#include <stdio.h>
# include "../HEADER/mystring.h"
char *remsstr(char *str, char *sstr)
{
	int i;
	int j;
	int count = 0;
	int n = 0;
	int a;
	int p;
	int r;

	for(r = 0; str[r] != '\0'; r++) {
		for(i = 0 ; str[i] != '\0'; i++) {
			count = 0;
			n = 0;
			a = 0;
			p = i;
			for(j = 0; sstr[j] != '\0'; j++) {
				while((str[i + n] == sstr[j + n]) && (sstr[j + n] != '\0')){
					count++;
					n++;
				}
				if(count == (mystrlen(sstr))) {
					while(str[p + 1] != '\0') {
					str[p] = str[(p + mystrlen(sstr))];
					a++;
					p++;
				}
			}
		}
	}
	}
	return str;
}
