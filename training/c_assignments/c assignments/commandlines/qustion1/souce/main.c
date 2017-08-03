#include "header.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	int count = 0;
	int i = 0;
	int j = 1;
	
	while(argc - 1) {
		fp = fopen(argv[j], "r");
		if(fp != NULL) 
			count++;
		argc--;
		j++;
	}			

	printf("number of files in the directory \n");
	printf("%d\n",(count));

	return 0;
}
