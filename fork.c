#include <unistd.h>
#include <stdio.h>
int main(){
    int pid = fork();
    if(pid==0){
        printf("soy el proceso hijo\n");
        sleep(5);
    }else{
        printf("soy el proceso padre\n");
    }
}