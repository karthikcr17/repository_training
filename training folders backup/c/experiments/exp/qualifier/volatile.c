#include <stdio.h>
#if 0
int main(void)
{
    const int local = 10;
    int *ptr = (int*) &local;
 
    printf("Initial value of local : %d \n", local);
 
    *ptr = 100;
 
    printf("Modified value of local: %d \n", local);
 
    return 0;
}
#endif

#if 0

int main (void)
{
	_Bool a ;
	int b = 0;

	a = (_Bool)b;
	printf ("%d", a);

	return 0;



}
#endif

#if 1
#include <complex.h>
#include <stdio.h>
int main(void)
{
    _Imaginary z ;
    z = 1/z;
    printf("1/(3.0i) = %+.1fi\n", cimag(z));
	return 0;
}

#endif

