#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	FILE *fi;
	char ch;

	if(NULL == (fp = fopen("test.c", "r"))) {
		perror("fopen failed\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fi = fopen("test.i", "w"))) {
		perror("fopen failed\n");
		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(fp)) != EOF) {

		if(ch == 60) {
			fputc(ch, fi);
			while((ch = fgetc(fp)) != 62) {
				fputc(ch, fi);
			}
			fputc(ch, fi);
		}

		else if(ch == 34) {
			fputc(ch, fi);
			while((ch = fgetc(fp)) != 34) {
				fputc(ch, fi);
			}
			fputc(ch, fi);
		}

		else if((ch == 47) && ((ch = fgetc(fp)) == 42)) {
			while((ch = fgetc(fp)) != 47) {
				while((ch = fgetc(fp)) != 42) {
				}
			}
		}

		else if(ch == 47) {
			while((ch = fgetc(fp)) != 10) {
			}

		} else {
			putc(ch, fi);
		}
	}
	return;
}
