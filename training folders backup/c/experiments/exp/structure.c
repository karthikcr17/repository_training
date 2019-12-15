#include <stdio.h>

#if 0
struct node {
	int a;
	char c;
	int b;
    };
struct link {
	char a;
	short i;
	};
struct pan {
	char ch;
	int a;
	char p;
	};
struct can {
	char m;
	char c;
	int n;
  	};
struct mms {
	char ch;
	short s;
	int n;
	};
struct nm {
	char c;
	};
struct art {
	short s;
	short n;
	char ch;
	};

struct quier {
	short s;
	short n;
	int m;
	};
struct covet {
	short s;
	int n;
	short m;
	};
struct exam {
	char a;
	char b;
	int c;
	};
#pragma pack (push, 1)
union frame
{
	char c;
	short s:8;

};

#pragma (pop)
struct pack {
	char c;
	int :0;
	char d;
	short :9;
	char e;
	char :0;
};
struct hello {
	double a : 8;
	double b:  9;
	
}t;
int main()
{

	printf ("\n size is: %d", sizeof (struct node));
	printf ("\n size is: %d", sizeof (struct link));
	printf ("\n size is: %d", sizeof (struct pan));
	printf ("\n size is: %d", sizeof (struct can));
	printf ("\n size is: %d", sizeof (struct mms));
	printf ("\n size is: %d", sizeof (struct nm));
	printf ("\n size is: %d", sizeof (struct art));
	printf ("\n size is: %d", sizeof (struct quier));
	printf ("\n size is: %d", sizeof (struct covet));
	printf ("\n size is: %d", sizeof (struct exam));
	printf ("\n size is: %d", sizeof (union frame));
	printf ("\n size is: %d", sizeof (struct pack));
	printf ("\n size is: %d", sizeof (t));
	return 0;

}

#endif

# if 0

struct list {
	struct filename{
		char name[10];
		int a;
		int b;
	};
	struct file* link;
};

int main ()
{
	struct file* ptr = NULL;
	if (NULL == (ptr = (struct file*) malloc (sizeof (struct list)))) {
		perror ("memory allocation failed");
		exit (0);
	}
	printf ("enter a value");
	scanf ("%d", ptr -> filename.a);

	return 0;
}

#endif

#if 0
/*struct b {
	int n;
};*/
struct a {
	struct b*m;
	int n;
} p;

int main ()
{
	p.m = malloc (8);
	p.m -> n = 9;
	
	return 0;

}
#endif

# if 0
struct a {
//	int a:6;
	short int b:8;
	char a:4;
};

int main ()
{
	
	printf ("%d\n", sizeof (struct a));
	
	return 0;
}

#endif

# if 0

struct a {
	int a;
	struct d {
		int b;
		int c;
	};

};

int main ()
{
	struct a s;
	struct a *ptr = &s;
	
	(ptr -> d).b = 23;

	return 0;
}

#endif

#if 0
struct abc {
	int a;
	int b;
	char c;
	struct {
		double r;
		char c;
	};
	int e;
}obj;

int main ()
{
	printf ("%d", sizeof (obj));
	return 0;
}

#endif

#if 0
struct abc {
	unsigned int a:3;
	unsigned int b:2;

}bbj;
int main () 
{
	bbj.a = 7;
	printf ("%d", bbj.a);
	return 0;
}

#endif

#if 0
int main ()
{
	int a = 2;
	int b = 0;
	int c = 0;

	a *= b = c = 4;
	printf ("%d", a);
	return 0;

}
#endif

#if 0
#define SIZE ((sizeof(int) *8) - 1)
int main ()
{
	int num = 289;
	int n_bit = 4;
	while (n_bit --) {
		num = (num & 1 ) ? ((num >> 1)|(1 << SIZE)) : (num >> 1);
	}
	printf ("%d", num);
	return 0;
}
#endif
#if 0
int main ()
{
	char str[4] = {1, 2, 3, 4};
	int *n = &str;
	printf ("%d", *n);
	return 0;
}
#endif

#if 1

struct abc {
	int a;
	struct day {
		int monday;
		int tuesday;
	};
};

int main ()
{
	printf ("%d\n", sizeof (struct abc));
	return 0;
}
#endif
