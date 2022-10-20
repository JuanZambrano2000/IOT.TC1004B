#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define NUM_THREADS 10
int saldo;
sem_t protectSaldo;
void *suma(void *arg){
    sem_wait(&protectSaldo);//decrementa y espera
    //ThreadData *myData = (ThreadData *)arg;   
    printf("El saldo  inicial es de %d\n",saldo);
    saldo = saldo + 100;
    printf("El saldo  despues es de %d\n",saldo);
    sem_post(&protectSaldo);//incrementa
    pthread_exit(NULL);
}
int main(){
    saldo = 0;
    pthread_t threadInfo[NUM_THREADS];
    sem_init(&protectSaldo,0,1);
    //Create threads
    for(int i=0;i<NUM_THREADS;i++){
        //pthread_t threadId;
        pthread_create(&threadInfo[i],NULL,suma,NULL); 
    } 
    //Wait for the threads
     for(int i=0;i<NUM_THREADS;i++){
        //pthread_t threadId;
        pthread_join(threadInfo[i],NULL); 
    } 
    printf("El final es %d\n",saldo);
    pthread_exit(NULL); //Espera que los hilos terminen y el programa principal lo termina
    //return 0;
    printf("Nunca llegara");
}