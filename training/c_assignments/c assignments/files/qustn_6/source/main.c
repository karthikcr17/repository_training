/* this program is to read the data from file by using fread */

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
	
	fp = fopen(argv[1], "r+");
	perror(argv[1]);

	printf("the data in file info.db file \n");
	printf("e_ident e_type e_machine e_version e_entry \n");
	
	for(i = 0; i < 10; i++) {
		fread(&e1[i], sizeof(e1[i]), 1, fp);
		printf("%s %hi %hi %d %u \n",e1[i].e_ident,e1[i].e_type,
							e1[i].e_machine,e1[i].e_version,e1[i].e_entry);
	}
	fclose(fp);

	return 0;
}

                 
