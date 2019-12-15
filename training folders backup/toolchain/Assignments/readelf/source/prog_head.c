# include "../header/readelf.h"

void program_header (struct Ehdr*object, FILE* fp)
{
	Phdr* phead;
	int i;

	if (0 == object -> e_phnum) {
		printf ("\nThere are no program headers in this file\n");
	} else {
		if (NULL == (phead = (Phdr *) malloc (sizeof (Phdr)))) {
			perror ("Memory allocation failed");
			exit (0);
		}
		if (0 > fseek (fp, object -> e_phoff, SEEK_SET)) {
			perror ("seeking postion failed");
			exit (0);
		}
		printf ("\nProgram header:\n");
		printf ("  Type     Offset      VirtAddr    PhysAddr    ");
		printf ("Filesiz   Memsiz    Flg  Align\n");
		for (i = 0; i < object -> e_phnum; i++) {
			if (0 == fread (phead, object -> e_phentsize, 1, fp)) {
				perror ("reading file failed");
				exit (0);
			}
			switch ( phead -> p_type ) {
				case 0: 
					printf ("  NULL     ");
					break;
				case 1:
					printf ("  LOAD     ");
					break;
				case 2:
					printf ("  DYNAMIC  ");
					break;
				case 3:
					printf ("  INTERP   ");
					break;
				case 4:
					printf ("  NOTE     ");
					break;
				case 5:
					printf ("  SHLIB    ");
					break;
				case 6:
					printf ("  PHDR     ");
					break;
				case 0x70000000 :
					printf ("  LOPROC   ");
					break;
				case 0x7fffffff :
					printf ("  HIPROC   ");
					break;
				default :
					printf ("           ");
					break;
			}
			printf ("0x%-10.8x", phead -> p_offset);
			printf ("0x%-10.8x", phead -> p_vaddr);
			printf ("0x%-10.8x", phead -> p_paddr);
			printf ("0x%-8.6x", phead -> p_filesz);
			printf ("0x%-8.6x", phead -> p_memsz);
			switch (phead -> p_flags) {
				case 4:
					printf ("R    ");
					break;
				case 5:
					printf ("R E  ");
					break;
				case 6:
					printf ("RW   ");
					break;
				default :
					printf ("     ");
					break;

			}
			printf ("0x%x\n", phead -> p_align);
		}








	}
}
