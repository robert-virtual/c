#include <stdio.h>

void inc(int* address){
    printf("Address: %p\n",address); // &address
    
    printf("*Address: %d\n",*address); // address value
    *address++; 
} 

void main(){
    int n = 10;
    printf("n: %d\n",n);
    inc(&n);
    printf("n: %d\n",n);
}