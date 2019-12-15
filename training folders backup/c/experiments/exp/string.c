# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# if 0
char* my_strrev (char *);
char *my_strtok (char*, char*);
int main ()
{
	char *str = NULL;
	int len;
	str = (char*) malloc (65);

	scanf ("%s", str);
	my_strrev (str);

	printf ("%s", str);
	printf ("%s\n", my_strtok (str, "op"));
	printf ("%s\n", my_strtok (NULL, "op"));
	return 0;

}

char* my_strrev (char * str) 
{
	static int pos = 0;
	char c;

	if (!*(str + pos)) {
		pos = 0;
		return str;
	} 

	c = *(str + pos);
	pos ++;
	my_strrev (str);
	*(str + pos) = c;
	pos++;
	return str;
}

int my_strlen (char *str)
{
	if (!(*str))
		return 0;
	return 1 + my_strlen(str + 1);
}

char *my_strtok (char *str, char *delim)
{
	static char *str1 = NULL;
	int pos = 0;
	int i = 0;
	int flag = 0;

	if (NULL != str) {
		str1 = str;
	} else {
		str = str1;
	}
	while(*str1) {
		for (i = 0; *(delim + i); i++) {
			if (*str1 == *(delim + i))
				flag = 1;
				break;
		}
		if (0 == pos && 1 == flag) {
			pos ++;
			str1 += 1;
			continue;
		} else if (1 == flag) {
			break;
		}
		pos ++;
		str1 += 1;
	}
	if (*str1 && pos) {
		if (pos > 1) {
		*(str + pos - 1) = '\0';
			return str;
		} else {
			
		}

	} else {
		return NULL;
	}
}
#endif

#if 1

int main (void) 
{
	char *str  = "hello";
//	printf ("%p\n", "hello");
	printf ("%p\n", str);
	printf ("%p\n", "hello");
	printf ("%p\n", "hello");
	printf ("%p\n", "hello");
	printf ("%p\n", "hello");
	printf ("%p\n", "hello");
	printf ("%d\n", "hello1" - str - 1);
//	printf ("%p\n", "hello1");

//	printf ("%p\n", "hello2");
	return 0;
}

#endif
