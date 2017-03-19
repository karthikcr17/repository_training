//main program
#include "elf.h"
int main(int argc, char *argv[])
{

	FILE *fp;
	FILE *fpstr;
	my_Elf32_Ehdr ELF;
	my_Elf32_Shdr *SEC;
	char *buff = NULL;
	int i;

	fp = fopen(argv[1], "r");
	perror(argv[1]);
	
	fpstr = fopen(argv[1], "r");
	perror(argv[1]);

	if(NULL == (SEC = (my_Elf32_Shdr *)malloc(sizeof(my_Elf32_Shdr)))) {
		printf("malloc is failed \n");
		exit(1);
	}

	fread(&ELF, sizeof(ELF), 1, fp);

	printf("Magic :\t");		
	for(i = 0; i < EI_NIDENT; i++){
		printf("%x ",ELF.e_ident[i]);
	}
	printf("\n");
	printf("class:\t\t\t\t\t");
	for(i = 1; i < 4; i++) 
		printf("%c",ELF.e_ident[i]);
	switch(ELF.e_ident[4]) {
		case 1:
			printf("%d\n",32);
			break;
		case 2:
			printf("%d\n",64);
			break;
		case 0:
			printf("invalid class\n");
			break;
	}
	printf("Data:\t\t\t\t\t");
	switch(ELF.e_ident[5]) {
		case 1:
			printf("2's compliment little endian\n");
			break;
		case 2:
			printf("2's compliment big endian\n");
			break;
		case 0:
			printf("invalid data\n");
	}
	printf("version:\t\t\t\t");
	switch(ELF.e_ident[6]) {
		case 1:
			printf("%d (current)\n",ELF.e_ident[6]);
			break;
		case 0:
			printf("invalid version\n");
			break;
		}
	printf("OS/ABI:\t\t\t\t\t");
	switch(ELF.e_ident[7]) {
		case 0:
			printf("UNIX - System V\n");
			break;
		case 1:
			printf("HP-UX ABI\n");
			break;
		case 2:
			printf("NetBSD ABI\n");
			break;
		case 3:
			printf("Linux ABI\n");
			break;
		case 4:
			printf("Solaris ABI\n");
			break;
		case 5:
			printf("IRIX ABI\n");
			break;
		case 6:
			printf("FreeBSD ABI\n");
			break;
		case 7:
			printf("TRU64 UNIX ABI\n");
			break;
		case 8:
			printf("ARM architecture ABI\n");
			break;
		case 9:
			printf("Stand-alone (embedded) ABI\n");
			break;
	}

	printf("ABI Version:\t\t\t\t");
	printf("%d\n",ELF.e_ident[8]);

	printf("Type:\t\t\t\t\t");
	switch(ELF.e_type) {
		case 0:
			printf("An unknown type\n");
			break;
		case 1:
			printf("A relocatable file\n");
			break;
		case 2:
			printf("An executable file\n");
			break;
		case 3:
			printf("A shared object\n");
			break;
		case 4:
			printf("A core file\n");
			break;
	}

	printf("Machine:\t\t\t\t");
	switch(ELF.e_machine) {
		case 0:
			printf("An unknown machine\n");
			break;
		case 1:
			printf("AT&T WE 32100\n");
			break;
		case 2:
			printf("Sun Microsystems SPARC\n");
			break;
		case 3:
			printf("Intel 80386\n");
			break;
		case 4:
			printf("Motorola 68000\n");
			break;
		case 5:
			printf("Motorola 88000\n");
			break;
		case 6:
			printf("Intel 80860\n");
			break;
		case 7:
			printf("MIPS RS3000\n");
			break;
		case 8:
			printf("HP/PA\n");
			break;
		case 9:
			printf("SPARC with enhanced instruction set\n");
			break;
		case 10:
			printf("PowerPC\n");
			break;
		case 11:
			printf("PowerPC 64-bit\n");
			break;
		case 12:
			printf("IBM S/390\n");
			break;
		case 13:
			printf("Advanced RISC Machines\n");
			break;
		case 14:
			printf("Renesas SuperH\n");
			break;
		case 15:
			printf("SPARC v9 64-bit\n");
			break;
		case 16:
			printf("Intel Itanium\n");
			break;
		case 17:
			printf("AMD x86-64\n");
			break;
		case 18:
			printf("DEC Vax\n");
			break;
	}
	printf("Version:\t\t\t\t");
	switch(ELF.e_version) {
		case 0: 
			printf("invalid version \n");
			break;
		case 1:
			printf("0x%x\n",ELF.e_version);
			break;
	}		
	
	printf("entry point address:\t\t\t");
	printf("0x%x\n",ELF.e_entry);
	
	printf("Start of program headers:\t\t");
	printf("%d (bytes into file)\n",ELF.e_phoff);
	
	printf("Start of section headers:\t\t");
	printf("%d (bytes into file)\n",ELF.e_shoff);
	
	printf("Flags:\t\t\t\t\t");
	printf("0x%x\n",ELF.e_flags);

	printf("Size of this header:\t\t\t");
	printf("%d (bytes)\n",ELF.e_ehsize);

	printf("Size of program headers:\t\t");
	printf("%d (bytes)\n",ELF.e_phentsize);

	printf("Number of program headers:\t\t");
	printf("%d\n",ELF.e_phnum);
	
	printf("Size of section headers::\t\t");
	printf("%d (bytes)\n",ELF.e_shentsize);
	
	printf("Number of section headers:\t\t");
	printf("%d\n",ELF.e_shnum);

	printf("Section header string table index:\t");
	printf("%d\n",ELF.e_shstrndx);

	/* section headers */

	fseek(fp, ELF.e_shoff, SEEK_SET);

	fseek(fpstr, ELF.e_shoff + (ELF.e_shentsize * ELF.e_shstrndx), SEEK_SET);
	fread(SEC, sizeof(*SEC), 1, fpstr);

	if(NULL == (buff =(char *) malloc(SEC -> sh_size))) {
		printf("malloc is failed \n");
		exit(1);
	} 

	fseek(fpstr, SEC -> sh_offset, SEEK_SET);
	fread(buff, SEC -> sh_size, 1, fpstr);

	printf("\nSection Header:\n\n[Nr]  Name\t\t\tType\t\t  Addr\t");
	printf ("    Off\t   Size\t  ES\tFlag\tLk\tInf\tAl\n");
	
	
	for(i = 0; i < ELF.e_shnum; i++) {

		fread(SEC, sizeof(*SEC), 1, fp); 

		printf("[%2d] ", i);
		printf(" %-25s",(buff + SEC -> sh_name));

		switch( SEC -> sh_type ) {

			case 0 :printf("\tNULL\t"); 
					break;
			case 1 :printf("\tPROGBITS");
					break;
			case 2 :
					printf("\tSYSTAB\t");
					break;
			case 3 :
					printf("\tSTRTAB\t");
					break;
			case 4 :
					printf("\tRELA\t");
					break;
			case 5 :	
					printf("\tHASH\t");
					break;
			case 6 :
					printf("\tDYNAMIC\t");
					break;
			case 7 :
					printf("\tNOTE\t");
					break;
			case 8 :
					printf("\tNOBITS\t");
					break;
			case 9 :
					printf("\tREL\t");
					break;
			case 10 :
					printf("\tSHLIB");
					break;
			case 11 :
					printf("\tDYNSYS\t");
					break;
			case 0x70000000 :
					printf("\tLOPROC");
					break;
			case 0x7fffffff :
					printf("\tHIPROC");
					break;
			case 0x80000000 :
					printf("\tLOUSER");
					break;
			case 0xffffffff :
					printf("\tHIUSER");
					break;
			default :
					printf("\tinvalid\t");
					break;
		}

		printf("\t%08x  ", SEC -> sh_addr);
		printf("%06x",SEC -> sh_offset);
		printf("  %06x",SEC -> sh_size); 
		printf("  %02d\t",SEC -> sh_entsize); 
//		printf("%x\t",SEC -> sh_flags);
		switch(SEC -> sh_flags) {
			case 0x2 : printf ("A\t");
					   break;

			case 0x6 : printf ("AX\t");
					   break;
			case 0x3 : printf ("WA\t");
					   break;
			case 0x30 : printf("MS\t");
						break;
			default : printf ("\t");
		}
		printf("%2d\t",SEC -> sh_link); 
		printf("%2d\t", SEC -> sh_info); 
		printf("%2d\n", SEC -> sh_addralign);  
	}

}







		


