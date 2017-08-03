#include "errors.h"
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>   
#define MAX 32

int main(void)
{
	mqd_t jerry;
	char *buf;
	struct mq_attr *attr;
	int st;
	char buff[5] = "bye";

	buf = (char *)malloc(sizeof(char) *MAX); 
	jerry = mq_open("/tom",O_RDWR);

	printf("jerry\n");

	while(1){


		st = mq_receive(jerry,buf,attr->mq_msgsize,NULL);
		if(st < 0)
			errno_abort("mq_recevie jerry is failes ");

		printf("%s\n",buf);

		if((strcasecmp(buf, buff) == 10) ||
			 strcasecmp(buf, buff) == 0) {
			memset(buf, '\0', strlen(buf)); 
			st = mq_send(jerry,buff,strlen(buff),3);
			if(st < 0)
				errno_abort("mq_send jerry is failes ");
			mq_close(jerry);
			mq_unlink("/tom");
			exit(0);
		}


		memset(buf, '\0', strlen(buf)); 
		fgets(buf,MAX,stdin);

		st = mq_send(jerry,buf,strlen(buf),3);
		if(st < 0)
			errno_abort("mq_send jerry is failes ");

		memset(buf, '\0', strlen(buf)); 
	}
	return 0;
}

