#include <stdio.h>
#include <pthread.h>
//alias para tipo de dato
typedef struct thread_data{
    int threadId;
    char name[20];
    //Todas las variables que quieras
} ThreadData;
typedef char caracter;
//Apuntador a la nada
void *holaMundo(void *arg){
    ThreadData *myData = (ThreadData *)arg;   
    printf("Hola desde el hilo y mi id es %d\n",myData->threadId);
    pthread_exit(NULL);
}
int main(){
    for(int i=0;i<100;i++){
        ThreadData myData; //nuevo tipo de dato
        pthread_t threadId;
        myData.threadId=i;
        //al poner un & antes del dato nos regresa la direccion de memoria donde esta el valor
        //convertimos del dato Thread_data a un tipo generico
        pthread_create(&threadId,NULL,holaMundo,(void *)&myData); //Creamos un hilo
    } 
    pthread_exit(NULL); //Espera que los hilos terminen y el programa principal lo termina
    //return 0;
    printf("Nunca llegara");
}