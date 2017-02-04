#include<stdio.h>
#include<string.h>
//#define MAX(s) #/usr/include/s

void include(FILE *fp, char *str)
{
//	FILE *fp;
	FILE *fd;
	char ch;
	int i = 0;
	int j = 0;
	char str1[100];
	char str2[200];
	char hed[100] = "/usr/include/";

	while((str[i] != '<')&&(str[i] != '"'))
		i++;
		i++;
	for(j = 0; (str[i] != '>')&&(str[i] != '"'); j++,i++)
		str1[j] = str[i];
	str1[j] ='\0';

	int len = strlen(hed);

	for(j = 0; str1[j]; j++)
		*(hed + len + j) = str1[j];
	*(hed + len + j) = '\0';
	printf("%s\n",hed);

	fd = fopen(hed,"r");
	if(!fp){
	perror("fopen");
	return;
	}

	while(NULL != (fgets(str2, 200, fd)))
		fputs(str2, fp);
}
