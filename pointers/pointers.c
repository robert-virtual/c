#include <stdio.h>
#include <unistd.h>


void sumar(int* base,int exponente){
    printf("Address: %p\n",base); // &address
   
} 

void main(){
    int n = 10;
    int* p;

    printf("n: %d\n",n);
    printf("n address: %p\n",&n);
    printf("p address: %p\n",p);
    *p = 10;
  

    printf("p value: %d\n",*p);
}