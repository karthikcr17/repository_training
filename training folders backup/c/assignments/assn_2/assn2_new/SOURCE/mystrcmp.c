#include <stdio.h>

short int mystrcmp(char *str1, char *str2);
short int mystrcmp(char *str1, char *str2)
{
	int i = 0;	
	while(*(str1 + i ) || *(str2 + i)) {
		if (*(str1 + i ) != *(str2 + i))
		break;		
		i++;
	}
	if(*(str1 + i) == '\0'&& *(str2 + i) == '\0') {
		return 0;
	}
	else if(*(str2 + i) > *(str1 + i)) {
		return 1;
	}
	else {
		return -1;
	}
}

short int mystrcasecmp (char *str1, char *str2)
{
	int i;

	for (i = 0 ; *(str1 + i) ; i++) {
		if ((*(str1 + i) >= 65) && (*(str1 + i) <= 90)) {
			*(str1 + i) += 32;
		}
	}

	for (i = 0 ; *(str2 + i) ; i++) {
		if ((*(str2 + i) >= 65) && (*(str2 + i) <= 90)) {
			*(str2 + i) += 32;
		}
	}
	
	return mystrcmp (str1, str2);
}
