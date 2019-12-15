#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0

char *cstr = "ubiquitos";
	char *str;
	char *dstr;
int main ()
{
	char *cstr1 = "ubiquitos";
	
	printf ("0x%08x\n", cstr);
	str = malloc (10);
	printf ("0x%08x\n", str);
	str = "gamut";
	printf ("0x%08x\n", str);

    dstr = malloc (10);
	printf ("0x%08x\n", dstr);
	strcpy (dstr, "OBLATION");
	printf ("0x%08x\n", dstr);

//	free (str);
	free (dstr);

	return 0;
}
