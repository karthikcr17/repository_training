#include<stdio.h>
#include<string.h>
void include(FILE *, char *);

int main(int argc, char *argv[])
{
	FILE *fp;
	FILE *fd;

	char str[100];

	fd = fopen(argv[1], "r");
	fp = fopen("karthik.i", "w");

	fgets(str, 100, fd);

	//printf("hello %s\n",str);
	if((str[0] == '#') && (str[1] == 'i')) {
		printf("hello\n");
		include(fp, str);
	}

	return 0;
}

