#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[10];
	int i;
//	s = (char *)malloc(sizeof(char) * 10);
	for(i = 0; i<12 ;i++) 
		scanf("%d",&s[i]);
//	scanf("%d",&s[20]);
//	for(i = 30;i < 34;i++) 
//	printf("%c ",s[i]);
	s[10] = 44;
//	printf("%s\n",s);
//	free(s);
//	free(s);
	return 0;
}
