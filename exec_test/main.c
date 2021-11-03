#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(){

    printf("Hello I'm the main program: %d\n",getpid());
    char *argv[] = {"./child", "param 2","Roberto",NULL};

    execv(argv[0],argv);

    return 0;
}