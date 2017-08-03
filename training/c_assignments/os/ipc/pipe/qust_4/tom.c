#include "errors.h"
#include<fcntl.h>
#include<mqueue.h>
#include<string.h>
#define MAX 64

int main(void)
{
	mqd_t tom;
	struct mq_attr *attr;
	char *buf; // = "message successfully passed";
	int st;
	char buff[5] = "bye";

	buf = (char *)malloc(sizeof(char) *MAX);
	tom = mq_open("/tom", O_CREAT | O_RDWR, 0666, NULL);


	printf("tomm\n");

	while(1){	
		fgets(buf,MAX,stdin);

		st = mq_send (tom, buf, strlen(buf),6);
		if(st < 0)
			errno_abort("tom send is failed");

		memset(buf, '\0', strlen(buf));

		st = mq_receive(tom,buf,attr->mq_msgsize,NULL);
		if(st < 0)
			errno_abort("tom recevie is failed");

		printf("%s\n",buf);

		if((strcasecmp(buf,buff) == 10) || 
			(strcasecmp(buf,buff) == 0)){
		memset(buf, '\0', strlen(buf));
			st = mq_send (tom, buff, strlen(buff),6);
			if(st < 0)
				errno_abort("tom send is failed");
			mq_close(tom);
			mq_unlink("/tom");
			exit(0);
		}

	}
	return 0;
}
