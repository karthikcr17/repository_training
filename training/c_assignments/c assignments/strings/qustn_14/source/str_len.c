/* function calculates the string length */

int str_len(char *str)
{

	int i = 0;

	for(i = 0; str[i]; i++);

	return i;
}
