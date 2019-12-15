#include <stdio.h>
#include <stdlib.h>
size_t mystrspn(char *buf1, char *buf2)
{
	int flag = 0;
	size_t i;
	int j;

	for (i = 0; *(buf1 + i); i++) {
		for(j = 0; *(buf2 + i); j++) {
			if (*(buf1 + i) == *(buf2 + j)) {
				flag = 1;
				break;
			} else {
				flag = 0;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	return i;
}
