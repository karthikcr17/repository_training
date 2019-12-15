# include <readelf.h>

void readelf_func (struct Ehdr* object)
{
	short int i;
	printf ("\nELF Header:");
	printf("\n  Magic:\t");
	for (i = 0; i < IDENT; i++) {
		printf ("%.2x  ", object -> e_ident[i]);
	}	

	printf ("\n  Class:\t\t\t\t");
	if (object -> e_ident[4] == 0){
		printf ("Invalid class");
	} else if (object -> e_ident[4] == 1) {
		printf ("ELF32");
	} else if (object -> e_ident[4] == 2) {
		printf ("ELF64");
	}

	printf ("\n  Data:\t\t\t\t\t");
	if (object -> e_ident[5] == 0){
		printf ("Invalid Data Encoding");
	} else if (object -> e_ident[5] == 1) {
		printf ("2's complement, little endian");
	} else if (object -> e_ident[5] == 2) {
		printf ("2's complement, big endian");
	}

	printf ("\n  Version:\t\t\t\t");
	(object -> e_ident[6])? printf ("1 (current)"):printf ("0 (current)");

	printf ("\n  OS/ABI:\t\t\t\t");
	switch (object -> e_ident[7]) {
		case 0 ... 1:
			printf ("UNIX System V");
			break;
		case 2:
			printf ("HP-UX");
			break;
		case 3:
			printf ("NetBSD");
			break;
		case 4:
			printf ("Linux");
			break;
		case 5:
			printf ("Solaris");
			break;
		case 7:
			printf ("IRIX");
			break;
		case 8:
			printf ("FreeBSD");
			break;
		case 10:
			printf ("TRU64 UNIX");
			break;
		case 11: 
			printf ("ARM architecture");
			break;
		case 12:
			printf ("Stand-alone (embedded)");
			break;
		
	}
	printf ("\n  ABI Version:\t\t\t\t%d", object -> e_ident[7]);
	printf ("\n  Type:\t\t\t\t\t");
	if (object -> e_type == 0) {
		printf ("No file type");
	} else if (object -> e_type == 1) {
		printf ("REL (Relocatable)");
	} else if (object -> e_type == 2) {
		printf ("EXEC (Executable)");
	} else if (object -> e_type == 3) {
		printf ("SHARED (Shared object file)");
	} else if (object -> e_type == 4) {
		printf ("CORE (Core file)");
	}

	printf ("\n  Machine:\t\t\t\t");
	switch (object -> e_machine) {
		case 0:
			printf ("No machine");
			break;

		case 1:
			printf ("AT&T WE 32100");
			break;
		case 2:
			printf ("SPARC");
			break;
		case 3:
			printf ("Intel 80386");
			break;
		case 4:
			printf ("Motorola 68000");
			break;
		case 5:
			printf ("Motorola 88000");
			break;
		case 7:
			printf ("Intel 80860");
			break;
		case 8:
			printf ("MIPS RS3000 Big_Endian");
			break;
		case 10:
			printf ("MIPS RS4000 Big-Endian");
			break;
	}
	printf ("\n  Version:\t\t\t\t0x%x", object -> e_version);

	printf ("\n  Entry point Address:\t\t\t0x%x", object -> e_entry );

	printf ("\n  Start of program headers:\t\t%d (bytes into file)", object ->  e_phoff);

	printf ("\n  Start of section headers:\t\t%d (bytes into file)", object -> e_shoff);
	printf ("\n  Flags:\t\t\t\t0x%d", object -> e_flags);
	printf ("\n  Size of this header:\t\t\t%d (bytes)", object -> e_ehsize);
	printf ("\n  Size of program headers:\t\t%d (bytes)", object -> e_phentsize);
	printf ("\n  Number of program headers:\t\t%d", object -> e_phnum);
	printf ("\n  Size of section headers:\t\t%d (bytes)", object -> e_shentsize);
	printf ("\n  Number of section headers:\t\t%d", object -> e_shnum);
	printf ("\n  Section header string table index:\t%d\n", object -> e_shstrndx);
}
