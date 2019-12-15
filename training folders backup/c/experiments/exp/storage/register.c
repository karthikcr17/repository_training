#if 1
#include <stdio.h>
register int reg_var asm("eax");

int main(void)
{
	int a = 10;
	int b =10;
	a = a+ b;
		reg_var = 10;
		printf("reg_var = %d \n", reg_var);

		return 0;
}
#endif
