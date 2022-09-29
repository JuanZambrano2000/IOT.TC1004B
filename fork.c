#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main(){
    //antes de aqui solo hay un proceso, despues de crear el pid creamos dos procesos identicos
    int pid = fork();
    if(pid==0){
        printf("soy el proceso hijo\n");
        //Path del archivo, nombre del archivo que le voy a poner
        //pwd directorio donde estoy
        //Si el archivo no existe va a ignorar al execl, el segundo parametro solo va a llamar al proceso asi, puede ser cualquier nombre, pero es buena practica llamarlo igual
        //execl("/workspace/IOT.TC1004B/hola.exe","hola.exe", NULL);
        execlp("hola.exe","hola.exe",NULL);
        sleep(5);
        printf("esto no aparecera porque execl es bien asesino");
    }else{
        printf("soy el proceso padre\n");
        wait(NULL);
    }
    //El papa es responsable de eliminar al hijo
    //Vamos a convertir al hijo en hola.exe
    //pwd directorio donde estoy
}