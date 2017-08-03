#include<stdio.h>
int main(int argc, char *argv[])
{

	FILE *fp = NULL;
	int n = 0;
	int i = 0;
	int num = 0x8048320;

	fp = fopen(argv[1] ,"r+");
	perror(argv[1]);
	rewind(fp);

//	fseek(fp, 52, SEEK_SET);

	while(i <= 6) {
		fread(&n, sizeof(int), 1, fp);
//		printf("%x\n",n);
		i++;
	}
	fseek(fp, -(sizeof(int)), SEEK_CUR);

	fwrite(&num, sizeof(int), 1, fp);

	return 0;
}
