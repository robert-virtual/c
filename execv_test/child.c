#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc , char* argv[]){

    printf("child empieza\n");

    printf("Obtuve estos parametros:\n");
    for(int i = 1; i < argc;i++){
        printf("\t%s\n",argv[i]);
    }

    printf("child termina\n");
    return 0;
}