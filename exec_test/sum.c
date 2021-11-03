#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



float main(int argc,char* argv[]){

    float suma = 0;
    for (int i = 1; i < argc-1; i++){
        /* code */

        suma += atof(argv[i]) + atof(argv[i+1]);
    }
    // printf("%f\n",suma);
    return suma;
}