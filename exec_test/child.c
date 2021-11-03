#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc,char* argv[]){

    printf("Hello I'm child, %d, my parent:%d\n",getpid(),getppid());

    printf("\n argument values:\n\n");
    for (int i = 0; i < argc; i++){
        /* code */
        printf("%s\n",argv[i]);
    }
    
    return 0;
}