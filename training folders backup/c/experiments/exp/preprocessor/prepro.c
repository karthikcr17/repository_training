#include<stdio.h>
#if 0
#ifndef MAX
#error First Give MAX value
#else

int main(){
	float a,b=25;
	//a=sqrt(b);
	printf("%f",a);
	return 0;
}
#endif

#endif

#if 1

#define cat(x,y) (#x###y)

int main ()
{
	cat (hello,
			world);

	return 0;
}

#endif
