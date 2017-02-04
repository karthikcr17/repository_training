#include<stdio.h>
#include<stdlib.h>
# if 1
/*  returns a pointer to the first occurrence of the character c in the string s.
 * program1:this program is returns a pointer to the first occurrence of the character c in the string s.
 */
char *my_strchr(char *, char);
int main()
{
	char s[50], ch;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the character\n");
	scanf(" %c",&ch);
	char *p = my_strchr(s,ch);
	if(p != NULL){
		printf("address of character - %p\n",p);
		printf("the string is p= %s\n",p);
	}
	else
		printf("character not found\n");
}
char *my_strchr(char *p, char ch)
{
	int i;
	for(i=0;p[i];i++){
		if(p[i] == ch)
			return p+i;
	}
	return 0;
}
#endif
#if 0
/*to reverse a given a string.
 * program2:this to reverse a given a string.
 */
int main()
{
	int i, j;
	char s[20], t;
	printf("enter the string\n");
	scanf("%s",s);
	for(i=0;s[i];i++);
	for(j=0,i=i-1;j<i;j++,i--){
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
	printf("%s\n",s);
}
# endif
#if 0
a)the difference between strcpy and memcpy:
strcpy copies a constants or strings into another string upto null character and it returns the starting address of the destination string.
memcpy copies specific number of bytes from source to destination.this fixed amount of data was copied.it returns the starting byte address of  the destination string. 
b)the difference between strcmp and memcmp:
strcmp compares strings it stops at the first null terminator of the shortest string and it returns an integer less than, equal to, or greater  than zero to compare s1 to the s2.
memcmp compares buffers, it compares whole length you given to it doesnot interupt nulls as a teminator returns an integer less than, equal to, or greater than zero compares source to the destination .                                       
c)the difference between strchr and memchr:
strchr is check the character c in the string s. returns address of the first occurrence of character or null if character is not found  in the given string .it terminates when null character occur.
memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.returns a address of fist matching
byte or null if the character does not occur in the given memory area.
# endif
# if 0
/*To set, clear and toggle a particular bit in a given number.
 * program4:this program to set, clear and toggle a particular bit in a given number.
 */
int main()
{
	int num, s, c, t;
	printf("enter number\n");
	scanf("%d",&num);
	printf("enter position to set\n");
	scanf("%d",&s);
	printf("enter position to clear\n");
	scanf("%d",&c);
	printf("enter position to toggle\n");
	scanf("%d",&t);
	num = num|(1<<s);
	num = num&(~(1<<c));
	num = num^(1<<t);
	printf("after set,clear,toggle the pertcular bit the number %d\n",num);
}
# endif
# if 0
/* given number is power of 2 or not.
 * program5 : this program is check number is power of 2 or not.
 */
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num&(num-1))
		printf("not power of 2\n"); 
	else
		printf("power of 2\n");
}
# endif
