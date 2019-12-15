#include <stdio.h>
#include <stdlib.h>

void ins_beg(int);
void ins_end (int);
void ins_pos (int, int);
void ins_before_pos (int, int);
void ins_after_pos (int, int);
void ins_middle (int);
void ins_penultimate (int);
void display(void);
int  search (int);
void ins_bef_num (int, int);
void ins_aft_num (int, int);

void del_pos (int);

struct node {
	int data;
	struct node* link;
};
