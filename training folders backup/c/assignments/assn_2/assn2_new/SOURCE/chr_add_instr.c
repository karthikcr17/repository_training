#include <stdio.h>
#include "../HEADER/mystring.h"

char* chr_add_instr (char *str, char c)
{
	int i;
	int j = 0;

	i = mystrlen(str);
	while (*str++ != c) {
		j ++;
		if (*str == '\0')
			break;
	}
	if (i > j) {
		return str - 1;
	} else {
		return NULL;
	}
}
