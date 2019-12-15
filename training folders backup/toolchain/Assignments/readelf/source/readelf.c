# include <readelf.h>

int main (int argc, char* argv[])
{
	FILE *fp = NULL;
	short int i;
	struct Ehdr * object = NULL;
	unsigned int offset;	

	if (NULL == (object = (struct Ehdr*) malloc (sizeof (struct Ehdr)))) {
		perror ("memory allocation failed");
		exit (1);
	}
	for (i = 1; i < argc; i++) {
		if (NULL == (fp = fopen (argv[i], "r"))) {
			perror ("file opening failed");
			exit (1);
		}
		if (0 == fread (object, sizeof (struct Ehdr), 1, fp)) {
			perror ("copying file to instance failed");
			exit (1);
		}

		if (object -> e_ident[0] == 0x7f) {
			readelf_func (object);
			section_header(object, argv[i]);
			program_header (object, fp);
		} else {
			printf ("\n%s: readelf failed to get magic number from file", argv[i]);
		}
		fclose (fp);
	}
	return 0;
}
