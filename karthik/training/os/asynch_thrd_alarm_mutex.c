#include "errors.h"

typedef struct alarm {
	pthread_mutex_t mutex;
	int sec;
	char mesg[100];
	struct alarm *next;

}alarm_t;

alarm_t *head;

void *alarm_thread(void *arg) 
{
	int p;
	alarm_t *alarm = NULL;

	if(NULL == (alarm = ((alarm_t *)malloc(sizeof(alarm_t)))))		
		errno_abort("malloc is failed");

	while(1) {

		if(arg == NULL){
			sleep(1);
			continue;	
		}

		else {
			p = pthread_mutex_lock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock is failed");
			else {
				alarm = (alarm_t *)arg;
			}

			p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

			sleep(alarm -> sec);
			printf("(%d) %s\n",alarm->sec, alarm->mesg);

			arg = alarm -> next;
//			alarm = NULL;
		}
	}
	return NULL;


}

int main(int argc, char *argv[])
{
	char line[120];
	int p;
	pid_t pid;
	alarm_t *alarm = NULL;
	pthread_t thr;


	while(1) {
		printf("Alaram ");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(NULL == (alarm = ((alarm_t *)malloc(sizeof(alarm_t)))))		
			errno_abort("malloc is failed");

		p = pthread_mutex_init (&alarm -> mutex, NULL);
			if(p != 0) 
				err_abort(p ,"init mutex is failed");


		p = pthread_mutex_lock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock is failed");
			else {
				if(sscanf(line, "%d %64[^\n]",&alarm->sec, alarm->mesg) > 2) {
					fprintf(stderr,"Bad command");
					continue;
				} 
				if(head == NULL) {
					head = alarm;
					alarm->next = NULL;
				}
				else {
					alarm->next = head;
					head = alarm;
				}
			}
		p = pthread_create(&thr, NULL, alarm_thread, head);
		if(p != 0)
			err_abort(p, "pthread_create failed");

		p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

	
	}
	pthread_exit(NULL);
	return 0;
}


