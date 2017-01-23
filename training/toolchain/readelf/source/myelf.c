#include"myelf.h"

Elf32_Ehdr header;
int main(int argc, char *argv[])
{
	FILE *fp;
//	Elf32_Ehdr header;

	if(argc != 2) {
		perror("check input");
		exit(EXIT_FAILURE);
	}

	if(NULL == (fp = fopen(argv[1],"r"))) {
		printf("%s not found",argv[1]);
		exit(EXIT_FAILURE);
	}

	//fread(&header,52,1,fp);
	elfhdr_print(fp);

	section_hdr_print(fp);
	return 0;
}
