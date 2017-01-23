#include"myelf.h"

Elf32_Ehdr header;
void elfhdr_print(FILE *fp)
{
	//Elf32_Ehdr header;
	int i;
	 //printf("%d\n",ftell(fp));
	fread(&header,52,1,fp);
	 //printf("%d\n",ftell(fp));
	printf("  Magic:\t");
	for(i = 0; i <= 15; i++) 
		printf("%.2x ",header.e_ident[i]);
	printf("\n");
	
	printf("  Class:\t\t\t\t\t");
	switch(header.e_ident[CLASS])
	{
		case 0:
			printf("INVALID CLASS");
			break;
		case 1:                                                                
            printf("ELF32");                                            
            break;
		case 2:                                                                 
            printf("ELF64");                                                    
            break;
	}

	printf("\n  Data:\t\t\t\t\t");
	switch(header.e_ident[DATA])                                                   
    {                                                                           
        case 0:                                                                 
            printf("Invalid data encoding");                                            
            break;                                                              
        case 1:                                                                 
            printf("2's compliment, little endian");                                                    
            break;                                                              
        case 2:                                                                 
            printf("2's compliment, big endian");                                                    
            break;                                                              
    } 

	printf("\n  Version:\t\t\t\t%d(current)",header.e_ident[VERSION]);
	printf("\n  OS/ABI :\t\t\t\t");
	switch(header.e_ident[OS])
	{
		case 0:
			printf("UNIX - System v");
			break;
	}
	printf("\n  ABI Version:\t\t\t\t%d\n",header.e_ident[ABI]);

	printf("  Type:\t\t\t\t\t");
	switch(header.e_type)
	{
		case 0:
			printf("NO file type");
			break;
		case 1:
			printf("Relocatable file");
			break;
		case 2:
			printf("Executable file");
			break;
		case 3:
			printf("shared object file");
			break;
		case 4:
			printf("Core file");
			break;
		case 0xff00:
			printf("Processor specific");
			break;
		case 0xffff:
			printf("Processor specific");
	}
	printf("\n  Machine:\t\t\t\t");
	switch(header.e_machine)
	{
		case 0:                                                                 
            printf("No machine");                                             
            break;                                                              
        case 1:                                                                 
            printf("AT&T WE 32100");                                         
            break;                                                              
        case 2:                                                                 
            printf("SPARC");                                          
            break;                                                              
        case 3:                                                                 
            printf("Intel 80386");                                       
            break;                                                              
        case 4:                                                                 
            printf("Motorola 68000");                                                
            break;
		 case 5:                                                                 
            printf("Motorola 88000");                                               
            break;                                                              
        case 7:                                                                 
            printf("Intel 80860");                                            
            break;                                                              
        case 8:                                                                 
            printf("MIPS RS3000 Big-Endain");                                                    
            break;                                                              
        case 10:                                                                 
            printf("MIPS RS4000 Big-Endian");                                       
            break;                                                              
        case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:                                                                 
            printf("Reserved for  future use");                                           
            break; 
	}
	
	printf("\n  Version:\t\t\t\t");                                                     
    switch(header.e_version)                                                    
    {                                                                           
        case 0:                                                                 
            printf("Invalid vesrsion");                                               
            break;                                                              
        case 1:                                                                 
            printf("Current vesrsion");                                            
            break;	
	}

	printf("\n  Entry point address:\t\t\t0x%x",header.e_entry);
	printf("\n  Start of program headers:\t\t%d(bytes into file)",header.e_phoff);
	printf("\n  Start of section headers:\t\t%d(bytes into file)",header.e_shoff);
	printf("\n  Flags:\t\t\t\t\t%x",header.e_flags);
	printf("\n  Size of this header:\t\t\t%d(bytes)",header.e_ehsize);
	printf("\n  Size of program header:\t\t\t%d(bytes)",header.e_phentsize);
	printf("\n  Number of program header:\t\t%d",header.e_phnum);
	printf("\n  size of section headers:\t\t%d(bytes)",header.e_shentsize);
	printf("\n  Number of section headers:\t\t%d",header.e_shnum);
	printf("\n  Section header string table index:\t%d\n",header.e_shstrndx);
	
}
	
void section_hdr_print(FILE *fp)
{
	Elf32_Shdr *sec_hdr;
	int i;
	 sec_hdr = (Elf32_Shdr*) malloc(sizeof(Elf32_Shdr)); 
	char *buff;
	if(NULL == (buff = (char *) malloc(sizeof(sec_hdr -> sh_size)))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	} 

	int offset = ((header.e_shstrndx)*header.e_shentsize)+header.e_shoff;
	//rewind(fp);	
	fseek(fp,offset ,SEEK_SET);
	fread(sec_hdr,40,1,fp);
	fseek(fp,sec_hdr -> sh_offset,SEEK_SET);
	fread(buff,sec_hdr -> sh_size,1,fp);
	fwrite(buff,sec_hdr -> sh_size,1,stdout);
	fseek(fp,header.e_shoff,SEEK_SET);	
	
	printf("\n\nSection Headers:\n");
	printf("  [Nr]  Name\t\t  Type\t\tAddr\t  Off\tSize\tES  Flg Lk Inf Al");
	printf("\n");
	for(i = 0; i < header.e_shnum ; i++) { 
		fread(sec_hdr,40,1,fp);
		printf("  [%2d] ",i);
		printf("%-19s",buff + sec_hdr -> sh_name);
		switch(sec_hdr -> sh_type)
		{
			case 0:
				printf("NULL\t\t");
				break;
			case 1:
				printf("PROGBITS\t");
				break;
			case 2: 
                printf("SYMTAB\t");
                break;
            case 3:
                printf("STRTAB\t");
                break;
			case 4: 
                printf("RELA\t");
                break;
            case 5:
                printf("HASH\t");
                break;
			case 6: 
                printf("DYNAMIC\t");
                break;
            case 7:
                printf("NOTE\t\t");
                break;
			case 8: 
                printf("NOBITS\t");
                break;
            case 9:
                printf("REL\t\t");
                break;
			case 10:
                printf("SHLIB\t");  
                break;
            case 11: 
                printf("DYNSYM\t");
                break;
			case 14:
				printf("INIT_ARRAY\t");
				break;
			case 15:
				printf("FINI_ARRAY\t");
				break;
            case 0x70000000:
                printf("LOPROC\t");
				break;
			case 0x7fffffff:                       
                printf("HIPROC\t");
                break;
            case 0x80000000:
                printf("LOUSER\t");
                break; 
			case 0xffffffff:
				printf("HIUSER\t");
				break;
			case 0x6ffffff6:
				printf("GNU_HASH\t");
				break;
			case 0x6fffffff:
				printf("VERSYN\t");
				break;
			case 0x6ffffffe:
				printf("VERNEED\t");
				break;
			default :
				printf("invalid\t");
		}

		printf("%.8x ",sec_hdr -> sh_addr);
		printf("%.5x\t",sec_hdr -> sh_offset);
		printf("%.5x\t",sec_hdr -> sh_size);
		printf("%.2x  ",sec_hdr -> sh_entsize);
		printf("%-4d",sec_hdr -> sh_flags);
		printf("%-4d",sec_hdr -> sh_link);
		printf("%-4d",sec_hdr -> sh_info);
		printf("%-4d",sec_hdr -> sh_addralign);  
		printf("\n");
	}
}


