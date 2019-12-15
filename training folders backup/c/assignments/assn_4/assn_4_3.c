#include <stdio.h>

union endian
{
	int a;
	char ptr[4];

}end;

int main(void)
{

	end.a = 0x12345678;

	printf("%x", end.ptr[0]);

	printf("%x", end.ptr[1]);

	return 0;
}

