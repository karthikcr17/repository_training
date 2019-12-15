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
int prg5(void)
{
	FILE *fp1;
	int i;	
	if ( NULL == (fp1 = fopen ("info.db","wb"))){
		printf ("cannot open the text file \n");
		exit (1);
	}
 
	printf ("enter the members.... : \n");

	for (i = 0; i < 9; i++){
		printf ("enter the element %d details : \n", i);
		scanf ("%s", (arr[i].e_ident));
		scanf ("%hi%hi", &(arr[i].e_type), &(arr[i].e_machine));
		scanf ("%d%u", &(arr[i].e_version), &(arr[i].e_entry));

		fwrite (&arr[i], sizeof(arr[i]), 1, fp1);
	}	
	fclose(fp1);


	return 0;
}
