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
	int status;
	int diff = 0;
	alarm_t *alarm = NULL;

	while(1) {
	
		if(NULL == (alarm = ((alarm_t *)malloc(sizeof(alarm_t)))))		
		errno_abort("malloc is failed");

		if(head == NULL){
			sleep(1);
			continue;	
		}

		else {
		status = pthread_mutex_lock (&alarm -> mutex);
			if(status != 0) 
				err_abort(status ,"mutex lock is failed");
			else {
				alarm = (alarm_t *)head;
			}

			status = pthread_mutex_unlock (&alarm -> mutex);
			if(status != 0) 
				err_abort(status ,"mutex unlock is failed");

			sleep((alarm -> sec) - diff);
			printf("(%d) %s\n",alarm->sec, alarm->mesg);
			
			diff = alarm->sec;

			head = head->next;
			free(alarm);

		}
	}
	return NULL;


}

int main(int argc, char *argv[])
{
	char line[120];
	int status;
	pid_t pid;
	alarm_t *alarm = NULL;
	alarm_t *temp = NULL;
	pthread_t thr;

	status = pthread_create(&thr, NULL, alarm_thread, NULL);
	if(status != 0)
		err_abort(status, "pthread_create failed");

	while(1) {
		printf("Alaram ");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(NULL == (alarm = ((alarm_t *)malloc(sizeof(alarm_t)))))		
			errno_abort("malloc is failed");

		status = pthread_mutex_init (&alarm -> mutex, NULL);
		if(status != 0) 
			err_abort(status ,"init mutex is failed");


		status = pthread_mutex_lock (&alarm -> mutex);
		if(status != 0) 
			err_abort(status ,"mutex lock is failed");
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
				temp = head;
				while(temp -> next != NULL)
					temp = temp -> next;
				temp->next = alarm;
				alarm->next = NULL;
			}
		}

		status = pthread_mutex_unlock (&alarm -> mutex);
		if(status != 0) 
			err_abort(status ,"mutex unlock is failed");


	}
	pthread_exit(NULL);
	return 0;
}


