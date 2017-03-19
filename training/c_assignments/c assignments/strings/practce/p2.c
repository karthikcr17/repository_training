#include<stdio.h>

char *addchr(char *, int, char);

int main()
{

	char str[50];
	int i;
	int Length; // stores the length of string
	int pos; // stores position to insert
	char ch; // stores the character to insert

	printf("enter the string \n");
	scanf("%[^\n]",str);

	for(i = 0; str[i]; i++);

	Length = i;

	printf("the length of string %d\n",Length);

	printf("enter the character to insert\n");
	scanf(" %c",&ch);

	printf("enter the position to insert\n");
	scanf(" %d",&pos);

	char *p = addchr(str, pos, ch);

	printf("the string is %s\n",p);

	return 0;

}

char *addchr(char *str, int pos, char ch)
{

	int i;
	int j;

	char temp[50];


	for(i = 0; i < (pos - 1); i++) 
		temp[i] = str[i];
	j = i;

 	temp[i] = ch;
	i = i + 1;

	for(; temp[j]; i++, j++)
		temp[i] = str[j];

	j = j + 1;

	temp[j] = '\0';

	return temp;

//	printf(" after inserting %s\n",temp);


}














