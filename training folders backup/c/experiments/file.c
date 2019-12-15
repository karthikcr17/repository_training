#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int fd;
	FILE *fp;

	int *ptr = stdin;

	fd = open("file.txt", O_CREAT | O_RDONLY, 0666);

	fp = fopen("file.txt", "w+");

	printf("%d\t%", *ptr, *fp);

	return 0;
}
