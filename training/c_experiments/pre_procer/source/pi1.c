#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 #define MALLOC(str) if((str = (char *)malloc(sizeof(char) * 200)) == NULL){ \
							printf("malloc is failed \n");\
							exit(1);\
							 }            

void include(FILE *fp, char *str)
{
	FILE *fd = NULL;
	char ch;
	int i = 0;
	int j = 0;
	char *str1 = NULL;
	char *hed = NULL;
	char *str2 = NULL;

	MALLOC(str1)
	MALLOC(str2)
	MALLOC(hed)

	strcpy(hed, "/usr/include/");

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
	if(!fd){
	perror("fopen");
	return;
	}

	while(NULL != fgets(str2, 200, fd))
		fputs(str2, fp);

	free(str1);
	free(str2);
	free(hed);
}
