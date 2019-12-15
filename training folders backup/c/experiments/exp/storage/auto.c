#include <stdio.h>

void func (void)
{
	printf ("world\n");
}


int main ()
{
	auto void func (void);
	func();
	void func (void) 
	{
		printf ("hello\n");
	}

	func ();
	return 0;
}
