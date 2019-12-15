#include <stdio.h>
#include <stdlib.h>
struct EH {
	unsigned char e_ident[16];
	short e_type;
	short e_machine;
	int e_version;
	unsigned int e_entry;
};

struct EH arr[10];


int prg6 (void)
{
	FILE *fp2;
	int i;

	fp2 = fopen ("info.db", "rb");
	if (fp2 == NULL) {
		perror("data base not opened");
		exit (1);
	}
	for (i = 0; i < 9; i++){
		while (1 == fread(&arr[i], sizeof(arr[i]), 1, fp2)){
		
				printf ("%s \n", arr[i].e_ident);
				printf ("%hi \n", arr[i].e_type);
				printf ("%hi \n", arr[i].e_machine);
				printf ("%d \n", arr[i].e_version);
				printf ("%u \n", arr[i].e_entry);

		}
	}	

	fclose(fp2);
	return 0;
}
