#include<stdio.h>
#include<stdlib.h>
#define EI_NIDENT        16

#define  CLASS		4
#define  DATA		5
#define VERSION 	6
#define OS 			7
#define ABI 		8

typedef short int Elf32_Half;
typedef int Elf32_Word;
typedef int Elf32_Addr;
typedef int Elf32_Off;

typedef struct {
	unsigned char  e_ident[EI_NIDENT];
	Elf32_Half     e_type;
	Elf32_Half     e_machine;
	Elf32_Word     e_version;
	Elf32_Addr     e_entry;
	Elf32_Off      e_phoff;
	Elf32_Off      e_shoff;
	Elf32_Word     e_flags;
	Elf32_Half     e_ehsize;
	Elf32_Half     e_phentsize;
	Elf32_Half     e_phnum;
	Elf32_Half     e_shentsize;
	Elf32_Half     e_shnum;
	Elf32_Half     e_shstrndx;
 } Elf32_Ehdr;



typedef struct {
	Elf32_Word   sh_name;
	Elf32_Word   sh_type;
	Elf32_Word   sh_flags;
	Elf32_Addr   sh_addr;
	Elf32_Off    sh_offset;
	Elf32_Word   sh_size;
	Elf32_Word   sh_link;
	Elf32_Word   sh_info;
	Elf32_Word   sh_addralign;
	Elf32_Word   sh_entsize;
} Elf32_Shdr;

void elfhdr_print(FILE *);
void section_hdr_print(FILE *);
