#include <stdio.h>

void change(int* x){
    *x++;
    printf("Adress: %p\n",x);
}

int main(){

    int p = 1 ;
    printf("inicio: %d\n",p);
    
    change(&p);
    
    printf("fin: %d\n",p);
    
    return 0;
}

