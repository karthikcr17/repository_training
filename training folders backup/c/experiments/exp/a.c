#include <stdio.h>
//void func (void);

//extern int b;
# if 0
int main (void) {

//	int a = 4;
//	int c;

//	c = a + b;
	printf("hello world");
//	func();
	return 0;
}

#endif

# if 0

int main ()
{
	int a;
	int b;
	int c;
	
	c = scanf ("%d%d", &a, &b);

	printf ("%d", c);
	return 0;
}
#endif

# if 1
int main ()
{
	int i = 2;
	int j = 1;
	int opt = 2;
	switch (opt) {
		case 1: 
			for (i = 0; i < 4 ; i++) {
				for (j = 0 ; j < 3; j++ ) {
				
		case 2: 
					j++;
				}
				printf ("%d\n", i);
				if (i == 3)
					break;
			}
		default :
			break;
	}

	return 0;
}

# endif
