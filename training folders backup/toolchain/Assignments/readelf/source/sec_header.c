# include "../header/readelf.h"

void section_header (struct Ehdr* object, char *file)
{
	FILE *fp;
	shdr* header = NULL;
	char * buf = NULL;
	int offset;
	int i;

	printf ("\nSection header:\n");
	if (NULL == (fp = fopen (file, "r"))) {
		perror ("opening fail failed");
		exit (0);
	}
	if (NULL == (header = (shdr*) malloc ( sizeof (shdr)))) {
		perror ("memory allocation failed");
		exit (0);
	}
	offset = (object -> e_shoff) + (object -> e_shstrndx ) * (object -> e_shentsize);
	if (-1 == fseek (fp, offset, SEEK_SET)) {
		perror ("seeking position failed");
		exit (0);
	}
	if (0 == fread (header, object -> e_shentsize, 1, fp)) {
		perror ("reading file failed");
		exit (0);
	}
	if (NULL == (buf = (char *) malloc (header -> sh_size) )) {
		perror ("memory not allocated");
		exit (0);
	}
	if (-1 == fseek (fp, header -> sh_offset, SEEK_SET)) {
		perror ("seeking position failed");
		exit (0);
	}
	if (0 == fread (buf, header -> sh_size, 1, fp)) {
		perror ("reading file failed");
		exit (0);
	}
	printf (" [Nr]  Name                ");
	printf ("Type       Addr      Off       Size    ES  Flg  Lk  Inf  Al \n");
	offset = object -> e_shoff;
	if (-1 == fseek (fp, offset, SEEK_SET)) {
		perror ("seeking position failed");
		exit (0);
	}

	for (i = 0 ; i < object -> e_shnum; i++) {
		if (0 == fread (header, object -> e_shentsize, 1, fp)) {
			perror ("reading file failed");
			exit (0);
		}			
		printf (" [%2d] ", i);
		printf ("%-21s", buf + header -> sh_name);
		switch (header -> sh_type) {
			case 0:
				printf ("NULL     ");
				break;
			case 1:
				printf ("PROGBITS ");
				break;
			case 2:
				printf ("SYMTAB   ");
				break;
			case 3:
				printf ("STRTAB   ");
				break;
			case 4:
				printf ("RELA     ");
				break;
			case 5:
				printf ("HASH     ");
				break;
			case 6:
				printf ("DYNAMIC  ");
				break;
			case 7:
				printf ("NOTE     ");
				break;
			case 8:
				printf ("NOBITS   ");
				break;
			case 9:
				printf ("REL      ");
				break;
			case 10:
				printf ("SHLIB    ");
				break;                                                              
			case 11:
				printf ("DYNSYM   ");
				break;
			case 0x70000000:
				printf ("LOPROC   ");                                  
				break;               
			case 0x7fffffff:
				printf ("HIPROC   ");
				break;
			case 0x80000000:
				printf ("LOUSER   ");
				break;
			case 0xffffffff:
				printf ("HIUSER   ");
				break;
			default :
				printf ("         ");
				break;
		}
		printf ("  ");
		printf ("%-10.8x", header -> sh_addr);
		printf ("%-10.8x", header -> sh_offset);
		printf ("%-8.6x", header -> sh_size);
		printf ("%-4.2x", header -> sh_entsize);
		switch (header -> sh_flags) {
			case 1:
				printf ("AW");
				break;
			case 2:
				printf (" A");
				break;
			case 3:
				printf ("WA");
				break;
			case 0x6:
				printf ("AX");
				break;
			case 0x30:
				printf ("MS");
				break;
			default: 
				printf ("  ");
				break;
		}
		printf ("   %2d ", header -> sh_link);
		printf (" %2d ", header -> sh_info);
		printf (" %2d ", header -> sh_addralign);
		printf ("\n");
	}

}
