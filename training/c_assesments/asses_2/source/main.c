
/* this program compares the two string ignore the case */

#include "header.h"

int main()
{

	char *str1 = NULL;/*it stores the string 1*/
	char *str2 = NULL;/* it stores the string 2*/
	int ret;        /* it stores the return value */

	str1 = ((char *)malloc(sizeof(char) * MAX));
 
	perror(str1); /* checking malloc is
									allocated space or not for str1 */

	str2 = ((char *)malloc(sizeof(char) * MAX));
 
	perror(str2); /* checking malloc is
									allocated space or not for str2 */
	
	printf("enter the string str1 \n");
	fgets(str1, MAX, stdin);

	perror(str1); /*checking that fgets taken input or not */

	printf("enter the string str2 \n");
	fgets(str2, MAX, stdin);

	perror(str2);
	
	ret = casecmp(str1, str2);

	if(ret == 0)
		printf("both strings are equal \n");
	else if(ret == 1)
		printf("str1 is grater than str2 \n");
	else
		printf("str1 is less than str2 \n");

	return 0;
}	

	

