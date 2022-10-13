#include <stdio.h>
//La funcion popen recibe dos argumentos el programa que corre y el segundo el modo (lectura/escritura)
int main(){
    //Creamos dos streams, uno para leer y uno para escribir
    FILE *lsOutput;
    FILE *tomayInput;
    char readBuffer[80]; //para almacenar lo que voy a leer
    lsOutput = popen("ls *.c | wc -w","r"); //popen("comando","r/w")
    //Escribire a tomay
    tomayInput = popen("./tomay","w");
    //F nos dice que trabajan con archivos
    while(fgets(readBuffer,80,lsOutput)){
        fputs(readBuffer,tomayInput);
    }
    pclose(lsOutput);
    pclose(tomayInput);

}