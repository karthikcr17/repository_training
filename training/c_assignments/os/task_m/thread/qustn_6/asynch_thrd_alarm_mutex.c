#include "errors.h"

typedef struct alarm {
	pthread_mutex_t mutex;
	pthread_cond_t cond1;
	pthread_cond_t cond2;
	int sec;
	char mesg[100];
	struct alarm *next;

}alarm_t;

alarm_t *head;

void *alarm_thread(void *arg) 
{
	int p;
	int diff = 0;
	int sec = 0;
	char *mesg = NULL;
	alarm_t *temp = NULL;

	if(NULL == (mesg = ((char *)malloc(sizeof(char) * 100)))) {
		errno_abort("malloc is failed");
	}

	while(1) {
		if(NULL == (temp = ((alarm_t *)malloc(sizeof(alarm_t))))) {
			errno_abort("malloc is failed");
		}

		if(head == NULL){
			diff = 0;		
			sleep(1);
			continue;	
		}

		else {
			temp = (alarm_t *)head;
			p = pthread_mutex_lock (&temp -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock  failed");
			else {

				sec = temp -> sec;
				strcpy(mesg, temp->mesg);
			}

			p = pthread_mutex_unlock (&temp -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

			sleep((sec - diff));
			printf("(%d) %s\n",sec, mesg);

			diff = sec;			
			memset(mesg, '\0', strlen(mesg));
			
			head = head->next;
			free(temp);
			temp = NULL;

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
	alarm_t *temp = NULL;
	pthread_t thr;

	p = pthread_create(&thr, NULL, alarm_thread, NULL);
	if(p != 0)
		err_abort(p, "pthread_create failed");


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

		p = pthread_cond_init (&alarm -> cond1, NULL);
		if(p != 0) 
			err_abort(p ,"cond init is failed");

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

				p = pthread_cond_signal (&alarm -> cond1);
				if(p != 0) 
					err_abort(p ,"cond1 signal is failed");
			}
			else {
				temp = head;
				if((head -> sec) >= (alarm -> sec)) {
					alarm->next = head;
					head = alarm;

					p = pthread_cond_signal (&alarm -> cond2);
					if(p != 0) 
						err_abort(p ,"cond2 signal is failed");
				}
				else {
					if(temp -> next == NULL)
						temp -> next = alarm;
					else {					

						while(((temp-> next-> sec) >= (alarm -> sec)) 
								&&	((temp -> next) != NULL)) 
							temp = temp -> next;
						if(temp -> next == NULL)
							temp -> next = alarm;
						else {
							alarm -> next = temp -> next;
							temp -> next = alarm;
						}
					}
				}
			}
			p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

		}
	}
	pthread_exit(NULL);
	return 0;
}


