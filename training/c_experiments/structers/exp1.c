#include<stdio.h>
#include<string.h>

struct batch 
{
	char b_id[12];
	char name[20];
	int emp_id;
}e1, e2, college[10];

int main()
{

	int i = 0;

	printf("%d\n",sizeof(e1));

	struct batch e2 = {"cr_17","kasj",725};
	strcpy(e1.b_id,"cr_17");
	strcpy(e1.name,"kath");

	for(i = 0; i < 1; i++) {
		scanf("%s",college[i].b_id);
		scanf("%s",college[i].name);
		scanf("%d",&college[i].emp_id);
	}

	for(i = 0; i < 1; i++) {
	printf("%s %s %d \n",college[i].b_id, college[i].name, college[i].emp_id);
	}
	printf("%s %s %d \n",e2.b_id, e2.name, e2.emp_id);
	printf("%s %s \n",e1.b_id,e1.name);
	return 0;
}
		

