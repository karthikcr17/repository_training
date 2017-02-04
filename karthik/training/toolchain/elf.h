#include<stdio.h>
#include<stdlib.h>

#define EI_NIDENT 16

typedef struct 
{
	unsigned char e_ident[EI_NIDENT];
	unsigned short int e_type;
	unsigned short int e_machine;
	unsigned int e_version;
	unsigned int e_entry;
	unsigned int e_phoff;
	unsigned int e_shoff;
	unsigned int e_flags;
	unsigned short int e_ehsize;
	unsigned short int e_phentsize;
	unsigned short int e_phnum;
	unsigned short int e_shentsize;
	unsigned short int e_shnum;
	unsigned short int e_shstrndx;
}my_Elf32_Ehdr;

typedef struct 
{
	unsigned int sh_name;
	unsigned int sh_type;
	unsigned int sh_flags;
	unsigned int sh_addr;
	unsigned int sh_offset;
	unsigned int sh_size;
	unsigned int sh_link;
	unsigned int sh_info;
	unsigned int sh_addralign;
	unsigned int sh_entsize;
}my_Elf32_Shdr;
	
