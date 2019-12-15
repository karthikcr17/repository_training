#include <stdio.h>
#if 0
int main (void) {
	char buf[20];

	close (stdout);
	close (stdin);

	fgets (buf, 20, stdin);


	return 0;

}
#endif

#if 0
#include <termios.h>
#include <unistd.h>
int getch() {
	struct termios oldt, newt;
	int ch;
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	return ch;
}
int main(int argc, char **argv) {
	int ch;
	printf("Press x to exit.\n\n");
	for (;;) {
		ch = getch();
		printf("ch = %c (%d)\n", ch, ch);
		if(ch == 'x')
			break;
	}
	return 0;
}
#endif

#if 1
#include <stdio.h>
#include <unistd.h>   
int main()
{
	char *password; // password string pointer
	password = getpass("Enter Password: "); // get a password
	printf("%s\n",password); // this is just for conformation
	// that password stored successfully
	return 1;
}
#endif
