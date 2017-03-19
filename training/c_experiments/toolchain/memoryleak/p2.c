#include "head.h"
#pragma pack(1)

struct ST {
	int a;
	char ch;
	int b;
};
int main()
{

	printf("size %d\n",sizeof(struct ST));

	return 0;
}
