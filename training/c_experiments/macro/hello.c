#include<stdio.h>
#include<stdlib.h>

#define validmalloc printf("malloc is failed\n");\
						exit(1)

int main()
{

	int *p = NULL;

	while(1)
	{

	p = (int *)malloc(sizeof(int) * 200);
	if(p == NULL){
		validmalloc;
	}
	}

	return 0;
}
			
