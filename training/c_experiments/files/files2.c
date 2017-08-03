#include<stdio.h>
int main()
{

	int a = 10;
	FILE *fp = NULL;
	int ch = 427;
	fp = fopen("test.txt","r+");
	
//	fprintf(fp, "%d", ch);		
	fwrite(&ch, sizeof(a), 1, fp);

	rewind(fp);

	fread(&a, sizeof(char), 4, fp);

	printf("a= = %x\n",a);

	return 0;
}
	
