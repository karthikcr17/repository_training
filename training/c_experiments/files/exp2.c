#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
	FILE *fp1, *fp2;
	int *ptr;
	*ptr  = 10;

	fp1 = fopen("fwrit.txt","w+");
	perror("fwrit.txt");

	fp2 = fopen("fprint.txt","w+");
	perror("fprint.txt");

	fwrite(ptr, 2, 1, fp1);

	fprintf(fp2, "%d",*ptr);


		

//	fread(str, 2, 7, fp);
	
//	fscanf(fp, "%[^\n]", str);	
//	printf("%s \n",str);

	return 0;
}
