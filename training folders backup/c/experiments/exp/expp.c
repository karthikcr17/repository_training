#include <stdio.h>
#if 1
int main (int argc, char *argv[])
{
	int i;
	int j;
	int count = 0;
//	int *ptr[4];

//	ptr = (char )malloc (4 * sizeof (int));
	printf ("%d", argc);

	printf ("%s", *(argv));

	for (i = 0 ; i < argc ; i++) {
		for (j = 0 ; argv[i][j] != '\0' ; j++) {
			if (argv[i][j] = '.' && argv[i][j + 1] == 'c' 
								 && argv[i][j + 2] =='\0' ) {
				count++;
				break;
			}
		}
	}

	printf ("no of .c files are %d", count);
	return 0;


}
#endif

#if 0
int main ()
{
	int a,b;

	a = (b = 75) + b;

	printf ("%d,%d", a, b);

	return 0;


}
#endif
