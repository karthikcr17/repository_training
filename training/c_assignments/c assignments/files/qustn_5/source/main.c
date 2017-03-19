/* this program on write the structure data into file info.db */

#include "header.h"

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

	struct EH e1[10];

	
	int i = 0;
	int j = 0;

	printf("enter the structure values \n");
	printf("e_ident e_type e_machine e_version e_entry \n");
	for(i = 0; i < 10; i++) 
		scanf("%s%hi%hi%d%u",e1[i].e_ident,&e1[i].e_type,&e1[i].e_machine,
								&e1[i].e_version,&e1[i].e_entry);
		
	fp = fopen(argv[1], "w+");
	perror(argv[1]);

	for(j = 0; j <  10; j++) {

		fwrite(&e1[j], sizeof(e1[j]), 1, fp);
	}


	fclose(fp);

	return 0;
}
	









