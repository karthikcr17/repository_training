/* here both child and parent processes have same virtual address 
	ranges cat /proc/pid/maps */

/* here we got same result for both fork nad vfork */

#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>

int a = 4;//both parent and child have different global data

int main()

{
	char *str = NULL;
	char str1[] = "nv1";
	char str2[] = "nv2";
	int b =8;//both parent and child have different local data  
	//FILE *fp;
	int fp;
	char s[100];
//	wait(NULL);
	pid_t pid;
	printf ("hii\n");

	if (NULL == (str = (char *) malloc (sizeof (char) * 20))){
		printf ("malloc failed\n");
		exit (0);
	}
	/*file creation...*/
	if ((fp = open("hell.txt", O_RDWR|O_CREAT)) < 0) {
		printf ("file not craeted\n");
		exit (0);
	}
	str = "nv3";
	pid = vfork();
	
//	pid = fork ();	
	if (pid > 0)
	{
//		str = str1;	//heap data is also different for both parent and child
		int p_a = 12;
		printf ("enter string into file in parent\n");
		if (fgets (s, 100, stdin) == NULL) {
			printf ("fgets failed\n");
			exit (0);
		}
		fputs(s, fp);
		close (fp);
	 
/*		printf ("parent = %s", str);
		printf ("pid = %d\n",pid);
		printf ("pa = %d\n", a);
		printf ("pb = %d\n", b);
		printf ("p_a = %d\n", p_a);
		//wait (NULL);
		printf ("parent = %d\n", getpid());
//		wait (NULL);
		getchar ();*/
		
	}
	else if (pid == 0)
	{
		int p_a;
		printf ("enter string into file in child\n");
		if (fgets (s, 100, stdin) == NULL) {
			printf ("fgets failed\n");
			exit (0);
		}
		fputs (s, fp);
		close(fp);
/*		str = str2;
		printf ("child:%s\n",str);
		printf ("child process\n");
		printf ("child = %d\n", getpid());
		a = a + 1;//updating global variable
		b = b + 1;//updating local variable
		printf ("ca= %d\n", a);//checking global
		printf ("cb = %d\n", b);//checking local
		printf ("p_a = %d\n", p_a);
		//wait (NULL);
		//getchar();*/
		exit (0);
	}
	else 
	printf ("fork failed\n");
	//getchar();
	return 0;
}


