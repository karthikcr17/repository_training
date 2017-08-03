#include<stdio.h>

int main()
{

	int i;

	char ch[] = "glodal";

	char ch1[] = {'E','D','E','E'};

	printf("%s\n",ch);

	ch[3] = 'b';

	printf("%s\n",ch);

	for(i = 0; i < (sizeof(ch1) / sizeof(ch1[0]));i++)
		printf("%c",*(ch1 + i));

	printf("\n");

	ch1[2] = 'G';

	
	for(i = 0; i < (sizeof(ch1) / sizeof(ch1[0]));i++)
		printf("%c",*(ch1 + i));

	printf("\n");
		
	
	return 0;
}
