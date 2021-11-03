#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void main(){

    char* argv[] = {"./sum","78","7",NULL};

    float res = execv(argv[0],argv);
    printf("res: %f\n",res); 
}