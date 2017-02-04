#include<stdio.h>
void strrev(char *);

int main()
{
	char *str = NULL;

	str = (char *)malloc(20);

	fgets(str, 20, stdin);

	strrev(str);

	return 0;

}
void strrev(char *str)
{

	int i = 0;
	int j = strlen(str);

	if(i != (j / 2)) {
		
		 
