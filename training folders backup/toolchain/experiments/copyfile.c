#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char* argv[])
{
	int fp;
	int fp1;
	char* buf = NULL;
	int fsize = 0;

	fp = open (argv[1], O_RDONLY);
	fp1 = open (argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
	fsize = lseek (fp, 0, SEEK_END);
	buf = (char*) malloc (fsize);
	lseek (fp, 0, SEEK_SET);
	read (fp, buf, fsize);
	lseek (fp1, 0, SEEK_SET);
	write (fp1, buf, fsize);
	free(buf);
	buf = NULL;
	close (fp);
	close (fp1);
	return 0;
}
