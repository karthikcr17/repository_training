#include <stdio.h>


enum day {
	monday,
	tuesday
};

enum day func (enum day, enum day);
int main ()
{
	enum day f;
	//monday = 2; we cannot change enum varibles
	f = monday;
	printf ("%d\n", f);
	printf ("%d\n", func (monday, tuesday));
	return 0;
}

enum day func (enum day d, enum day e) {
	
	printf("%d\n", d);
	printf("%d\n", e);

	return e;

}
