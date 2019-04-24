 #include <pthread.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <semaphore.h>
 #include <time.h>
 
 #define NUM_PHIL 5
 #define NUM_FORK 5
 
sem_t forks[NUM_FORK];

int randomInRange(int min, int max){
	return min + random()% ((max - min) + 1);
}

 void *life(void *threadid)
 {
    long tid;
    tid = (long)threadid;
	srand((tid+1)*time(NULL));
    while(1){
		if(tid % 2 == 0){
			
			sem_wait(&forks[(tid+1)%NUM_FORK]);
			sem_wait(&forks[tid]);
			
		}else{
			
			sem_wait(&forks[tid]);
			sem_wait(&forks[(tid+1)%NUM_FORK]);

		}
		sleep(randomInRange(5,20));
		sem_post(&forks[tid]);
		sem_post(&forks[(tid+1)%NUM_FORK]);
		printf("Hola, soy phil %ld y voy a pensar", tid);
		sleep(randomInRange(5,20));
	}
 }

 int main (int argc, char *argv[])
 {
    pthread_t philosophers[NUM_PHIL];
    int rc;
    long t;
	 
	for(t=0; t<NUM_PHIL; t++){
		sem_init(&forks[t],0,1);
	}
	 
    for(t=0; t<NUM_PHIL; t++){
       printf("In main: creating thread %ld\n", t);
       rc = pthread_create(&philosophers[t], NULL, life, (void *)t);
       if (rc){
          printf("ERROR; return code from pthread_create() is %d\n", rc);
          exit(-1);
       }
    }
	 

    /* Last thing that main() should do */
    pthread_exit(NULL);
	 
 }