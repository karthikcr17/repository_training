#include<stdio.h>
#include<stdlib.h>

struct EH {

	unsigned char e_ident[16];
	short e_type;
	short e_machine;
	int e_version;
	unsigned int e_entry;
};

int main(int argc, char *argv[])
{

	FILE *fp;

	struct EH e1[10],e2[10];

	
	int i = 0;
	int j = 0;

	printf("enter the structure values \n");
	for(i = 0; i < 2; i++) 
		scanf("%s%hi%hi%d%u",e1[i].e_ident,&e1[i].e_type,&e1[i].e_machine,
								&e1[i].e_version,&e1[i].e_entry);
		
	fp = fopen(argv[1], "w+");
	perror(argv[1]);

	for(j = 0; j <  2; j++) {

		fwrite(&e1[j], sizeof(e1[j]), 1, fp);
	}

	rewind(fp);
	for(i = 0; i < 2; i++){
	fread(&e2[i], sizeof(e2[i]), 1, fp);

	printf("%s%hi%hi%d%u\n",e1[i].e_ident,e1[i].e_type,e1[i].e_machine,
								e1[i].e_version,e1[i].e_entry);
	}

	fclose(fp);

	return 0;
}
	









