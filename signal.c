#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int cond;
void hola(int signalNumb){
    printf("Recibi la señal  %d",signalNumb);
    
}
void terminarWhile(int sigNumber){
    printf("Terminando while \n");  
    cond = 0; 
}

int main(){
    //recibe dos parametros el ID de la señal y una funcion
    //va a quedarse en el loop hasta que pongamos kill -12 numeroProceso y ejecuta el signal, luego vuelve al loop
    // la señal 2 corresponde a ctrl+c (terminar el proceso)
    signal(12,terminarWhile);
    signal(2, hola);
    cond = 1;
    while(cond == 1){
        printf("Trabajando\n");
        sleep(1);
    }
    printf("Aqui nunca llego");
    return 0;
}