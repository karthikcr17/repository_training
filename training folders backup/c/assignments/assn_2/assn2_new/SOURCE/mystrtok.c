#include <stdio.h>
char *mystrtok(char *buf, char *delim)
{
	int i;
	int j;
	char *str = buf;
	for(i = 0; buf[i] != '\0'; i++) {
		for(j = 0; delim[j] != '\0'; j++) {
			if(buf[i] == delim[j]) {
				buf[i] = '\n';
			}
		}
	}
        for(i = 0;str[i] != '\0';i++) {
                if (str[i] == '\n' && str[i+1] == '\n') {
                        for (j = i ; str[j] != '\0'; j++) {
                                str[j] = str[j + 1];
                        }
                        i--;
                }
        }

	return str;
}	
