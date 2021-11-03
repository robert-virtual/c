#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

    printf("main empieza\n");

    char* argv[] = {"./child","this is a parameter",NULL};

    execv(argv[0],argv);


    printf("main termina\n");

    return 0;
}